#include "Generator.h"

void Generator::populate(){
	for(int x=0; x < numParticles; x++){
		Particle *p = new Particle();
		p->setLifeTime(5.0);
		p->setSize(1.0);
		p->setStartPosition(1.0, 0.0, 1.0);
		p->setDirection(5.0, 5.0, 0.0);
		p->setVelocity(10.0, 10.0, 10.0);
		p->setColor(0.872, 0.872, 0.872);
		ParticleList.push_back(*p);
		delete p;
	}
}

void Generator::update(){
	for (int x=0; x<numParticles; x++){
		ParticleList[x].update();
	}
}