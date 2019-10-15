#include <NPC.h>

NPC::NPC(){};
NPC::~NPC(){};

void NPC::initialize()
{
	m_texture.loadFromFile("Assets//Sprites//016_Png.png");
	m_sprite.setTexture(m_texture);
}
void NPC::update()
{
	cout << "NPC updating" << endl;
}
void NPC::draw(sf::RenderWindow* const t_window)
{
	t_window->draw(m_sprite);
	m_sprite.setScale({ 0.25f,0.25f });
}