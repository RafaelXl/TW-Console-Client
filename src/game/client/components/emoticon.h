/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.                */
#ifndef GAME_CLIENT_COMPONENTS_EMOTICON_H
#define GAME_CLIENT_COMPONENTS_EMOTICON_H
#include <base/vmath.h>
#include <game/client/component.h>

class CEmoticon : public CComponent
{
	static void ConEmote(IConsole::IResult *pResult, void *pUserData);

public:
	CEmoticon();

	virtual void OnConsoleInit();

	void Emote(int Emoticon);
};

#endif
