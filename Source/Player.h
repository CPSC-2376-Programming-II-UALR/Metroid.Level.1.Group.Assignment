#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <map>
#include <vector>
#include  "AnimatedObject.h"


class GUI;
class Block;

class Player:public AnimatedObject
{
public:
	Player() = delete;
	Player(std::string animationFile, Vector2D position, const GUI& gui);
	
	
	void update(const std::vector<std::unique_ptr<Object>>& objects) override;
	
private:
	const int runSpeed{ 12 };
	const int upLeftAdjustX{ 6 };
	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();
	void noAction();
	
};
#endif // !PLAYER_H


