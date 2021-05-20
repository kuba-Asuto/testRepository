#include <DxLib.h>

struct Sample{
	char c;	//8bit 1バイト
	//プログラマに見えない1バイト
	int w;//32bit 4バイト
};//24bit = 5バイト

int WINAPI WinMain(HINSTANCE,HINSTANCE,LPSTR,int) {
	//DxLib::SetMainWindowText(L"2016189.久場飛音");
	DxLib::SetMainWindowText(_T("2016189.久場飛音"));
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