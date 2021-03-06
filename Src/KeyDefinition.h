#ifndef KEY_DEFINITION_H
#define KEY_DEFINITION_H

#include"DxLib.h"

// keyの種類
enum KeyType
{
	KeyType_UP,			//上
	KeyType_DOWN,		//下
	KeyType_LEFT,		//←
	KeyType_RIGHT,		//→
	KeyType_ENTER,		//決定
	KeyType_RESET,		//リセット

	KeyType_MAX,		//keyの種類の数

};

const int KEY_ASSIGN[KeyType_MAX] =
{
	KEY_INPUT_UP,
	KEY_INPUT_DOWN,
	KEY_INPUT_LEFT,
	KEY_INPUT_RIGHT,
	KEY_INPUT_RETURN,
	KEY_INPUT_R,
};






#endif