#include <iostream>
#include <cstdlib>
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

void World::Update()
{
	std::vector<char> V;
	for(int i=0; i<16; i++)
	{
		V.push_back('.');
	}
	for(int i=0; i<16; i++)
	{
		m_table[i]=V;
	}
	int x = m_enemies[0].GetX();
	int y = m_enemies[0].GetY();
	
	
	m_table[x][y] = m_enemies[0].GetSymbol();




	Draw();
};

int main()
{
srand( time(0) );
World world;
world.Update();
return 0;
}


