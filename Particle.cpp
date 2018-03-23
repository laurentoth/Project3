#include "Particle.h"

void Particle::update(){
	//Need to decrease velocity, increase position, decrease lifetime
	glm::vec3 pos0 = getStartPosition();
	pos0.x+=0.0;
	pos0.y+=0.05;
	pos0.z+=0.0;
	setStartPosition(pos0.x,pos0.y,pos0.z);
}