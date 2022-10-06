#pragma once




class Entity
{
public:
	Entity();
	Vecter2 pos;
	float spd;
	float size;

	void Draw();

private:



};

Entity::Entity() : pos({ 0,0 }), spd(0), size(32)
{
}

void Entity::Draw() {
	Novice
}

Entity p;
