#include <DxLib.h>

struct Sample{
	char c;	//8bit 1�o�C�g
	//�v���O���}�Ɍ����Ȃ�1�o�C�g
	int w;//32bit 4�o�C�g
};//24bit = 5�o�C�g

int WINAPI WinMain(HINSTANCE,HINSTANCE,LPSTR,int) {
	//DxLib::SetMainWindowText(L"2016189.�v���");
	DxLib::SetMainWindowText(_T("2016189.�v���"));
	ChangeWindowMode(true);
	SetGraphMode(960, 540,32);
	DxLib_Init();

	SetDrawScreen(DX_SCREEN_BACK);
	while (ProcessMessage() == 0) {
		ClearDrawScreen();
		DrawCircle(480, 270, 200, 0xffaaaa);
		ScreenFlip();
	}
	DxLib_End();
}