#include <iostream>
#include "World.h"
World::World()
{
	std::vector<char> x;

	for(int i=0; i<16; i++)
	{
		x.push_back('.');
	}
	for(int i=0; i<16; i++)
	{
		m_table.push_back(x);
	}
	for(int i=0; i<3; i++)
	{
		m_enemies.push_back(Enemy());
	}
}

void World::Draw()
{
for(int i=0;i<16;i++)
{
	for(int g=0;g<16;g++)
	{
		std::cout<<m_table[i][g];
	}
std::cout<<std::endl;
}

} 
int main()
{
World world;
world.Draw();
return 0;
}


