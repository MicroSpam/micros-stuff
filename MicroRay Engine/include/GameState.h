#ifndef GAMESTATE_H
#define GAMESTATE_H


class GameState
{
    public:
        GameState();
        virtual ~GameState();

        //gamestate stuff
        virtual void input()=0;
        virtual void update()=0;
        virtual void render()=0;

};

#endif // GAMESTATE_H
