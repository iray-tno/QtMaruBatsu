#ifndef MARUBATSU_H
#define MARUBATSU_H

class MaruBatsu
{
public:
    MaruBatsu(Ui::MainWindow *ui):ui_(ui),isGaming(false),turn_(0){}
    void restartGame();
    int pushed(int i, int j);

private:
    bool isGaming_;
    int map_[3][3];
    int turn_;

    Ui::MainWindow *ui_;
};

#endif // MARUBATSU_H
