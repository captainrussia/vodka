#if ndef EnemyDno.h
#include <vector>
#include "EnemyDno.h"
class World
{
private: 
	std::vector< std::vector< char > > m_table;
	std::vector< Enemy > m_enemies;
public:
World();
void Draw (); 


};
#endif

