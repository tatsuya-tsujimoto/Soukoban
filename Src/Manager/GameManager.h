#ifndef GAME_MANAGER_H
#define GAME_MANAGER_H

#include"Singleton.h"


// ゲーム全体の管理クラス
class GameManager :public Singleton<GameManager>
{
public:
	GameManager();
	~GameManager();

	//シーン間でやり取りしたいデータ設定、取得関数を適宜追加


private:
	//　シーン間でやり取りするデータを保持しておく変数を適宜追加




};











#endif