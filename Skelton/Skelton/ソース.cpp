#include <Dxlib.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCMdLine, int nCmdShow)
{


    if (!System())
    {
        return false;
    }

    // �O���t�B�b�N�̓o�^
    // -------------------------------------------

    // �ϐ��̏�����
    // -------------------------------------------


    // �Q�[�����[�v
    while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
    {
        _dbgStartDraw();

        SetDrawScreen(DX_SCREEN_BACK);                      // �ޯ���̧�ɐݒ�
        ClsDrawScreen();                                    // ��ʏ���

        DrawString();

        _dbgAddDraw();
        ScreenFlip(); // ���̉�ʂ�\��ʂɏu�Ժ��-
    }

    DxLib_End();    // DXײ���؂̏I������
    return 0;       // ������۸��т̏I��
}