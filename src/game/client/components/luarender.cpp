#include "luarender.h"

void CLuaRender::OnRender()
{
	// EVENT CALL
	LUA_FIRE_EVENT_V("OnRenderLevel", m_Level);
}