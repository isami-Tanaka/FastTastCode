#include <Dxlib.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCMdLine, int nCmdShow)
{


    if (!System())
    {
        return false;
    }

    // グラフィックの登録
    // -------------------------------------------

    // 変数の初期化
    // -------------------------------------------


    // ゲームループ
    while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
    {
        _dbgStartDraw();

        SetDrawScreen(DX_SCREEN_BACK);                      // ﾊﾞｯｸﾊﾞﾌｧに設定
        ClsDrawScreen();                                    // 画面消去

        DrawString();

        _dbgAddDraw();
        ScreenFlip(); // 裏の画面を表画面に瞬間ｺﾋﾟ-
    }

    DxLib_End();    // DXﾗｲﾌﾞﾗﾘの終了処理
    return 0;       // このﾌﾟﾛｸﾞﾗﾑの終了
}