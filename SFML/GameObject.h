#ifndef GAMEOBJECT_HEADER
#define GAMEOBJECT_HEADER

#include <SFML\Graphics.hpp>

class GameObject
{
public:
	GameObject();
	~GameObject();

	virtual void Init() = 0;

	virtual void Update(float aDeltaTime) = 0;
	virtual void Draw(sf::RenderWindow &aWindow) = 0;
	
};
#endif // !GameObject