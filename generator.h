#ifndef GENERATOR_H
#define GENERATOR_H

#include "Particle.h"
#include <vector>
using namespace std;
class Generator{

public:
	Generator(glm::vec3 p, glm::vec3 c, glm::vec3 d, int n){position=p; color=c; direction=d; numParticles=n;};
	void populate();
	void setNewMaxVelocity(float v){maxVelocity=v;};
	void setNewMinVelocity(float v){minVelocity=v;};
	void setNewLifeTime(float t){lifeTime = t;};
	void setSize(float s){size=s;};

	vector<Particle> ParticleList;
private:
	glm::vec3 position;
	int numParticles;
	glm::vec3 color;
	float lifeTime = 1.0;
	float maxVelocity = 30.0;
	float minVelocity = 0.5;
	float size;
	glm::vec3 direction;


};
#endif