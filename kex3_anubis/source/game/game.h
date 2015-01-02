//
// Copyright(C) 2014-2015 Samuel Villarreal
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//

#ifndef __GAME_H__
#define __GAME_H__

class kexFont;
class kexTitleScreen;

class kexGame
{
public:
    kexGame(void);
    ~kexGame(void);

    void                Init(void);
    void                Tick(void);
    void                Draw(void);
    bool                ProcessInput(inputEvent_t *ev);

    kexTitleScreen      *TitleScreen(void) { return titleScreen; }
    kexFont             *SmallFont(void) { return smallFont; }
    kexFont             *BigFont(void) { return bigFont; }

    void                DrawSmallString(const char *string, float x, float y, float scale, bool center);
    void                DrawBigString(const char *string, float x, float y, float scale, bool center);

private:
    kexFont             *smallFont;
    kexFont             *bigFont;
    kexTitleScreen      *titleScreen;
};

#endif