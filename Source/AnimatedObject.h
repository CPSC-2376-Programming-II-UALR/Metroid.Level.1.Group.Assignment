#ifndef ANIMATEDOBJECT_H
#define ANIMATEDOBJECT_H
#include <map>
#include <vector>
#include <string>
#include "Object.h"

class AnimatedObject : public Object
{
public:
	AnimatedObject() = delete;
	AnimatedObject(std::string animationFile, Vector2D position, Type name, const GUI& gui);

	enum class State { stillRight, stillLeft, runRight, runLeft, ball, upRight, upLeft, jumpRight, jumpLeft };
	Vector2D getDimensions() const override;
	int getCurrentSpriteID() const;
protected:
	void updateSprite();

	//int walkSpeed{ -1 };
	Vector2D velocity{ 0,0 };

	int currentSprite{ 0 };
	int currentAnimation{ 0 };
	State state{ State::stillLeft };
	std::map<State, std::vector<int>> sprites;


};
#endif // !ANIMATION_H
