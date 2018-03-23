#ifndef PARTICLE_H
#define PARTICLE_H

#include "glm/glm/vec3.hpp"

class Particle{

public:
	Particle(){};
	void setLifeTime(float l){lifetime=l;};
	void setSize(float s){size=s;};
	void setStartPosition(float x, float y, float z){startPosition = glm::vec3(x,y,z);};
	void setDirection(float x, float y, float z){direction = glm::vec3(x,y,z);};
	void setVelocity(float x, float y, float z){velocity = glm::vec3(x,y,z);};
	void setColor(float r, float g, float b){color = glm::vec3(r,g,b);};
	glm::vec3 getStartPosition(){return startPosition;};
	glm::vec3 getDirection(){return direction;};
	glm::vec3 getVelocity(){return velocity;};
	float getLifetime(){return lifetime;};
	float getSize(){return size;};
	glm::vec3 getColor(){return color;};
	void kill(){lifetime=0;};
	void update();


private:
	float lifetime;
	float size;
	glm::vec3 startPosition;
	glm::vec3 direction;
	glm::vec3 velocity;
	glm::vec3 color;
	float timeDecrease = 0.01;
	glm::vec3 gravity = glm::vec3(9.8,9.8,9.8);
	glm::vec3 airResistence = glm::vec3(0.0,0.0,0.0);
	glm::vec3 wind = glm::vec3(0.5,0.3,0.0);


};
#endif