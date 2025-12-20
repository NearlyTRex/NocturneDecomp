// Name: core_game.cpp_CGame_rollCredits_FUN_004e4010
// Address: 004e4010
// Address Range: [[004e4010, 004e443c]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_rollCredits_FUN_004e4010(CGame * this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_rollCredits_FUN_004e4010(CGame *this_ptr)

{
  char cVar1;
  CBitFont *this_ptr_00;
  int iVar2;
  FILE *stream;
  char *pcVar3;
  char *pcVar4;
  void *pvVar5;
  uint uVar6;
  char *extraout_EDX;
  int color_mode;
  int unaff_EBX;
  int iVar7;
  BADSPACEBASE *in_ESP;
  byte bVar8;
  double dVar9;
  char *pcStack00000020;
  char *in_stack_00000024;
  char *in_stack_0000002c;
  char *pcStack00000030;
  uint in_stack_00000038;
  CGame *in_stack_00000040;
  float in_stack_00000044;
  int in_stack_00000048;
  int in_stack_0000004c;
  CGame *in_stack_0000005c;
  int in_stack_00000060;
  uint uStack_1120;
  CGame *in_stack_ffffef00;
  uint auStack_10dc [1005];
  char acStack_128 [4];
  char acStack_124 [244];
  byte auStack_30 [12];
  CAlphaBitmap CStack_24;
  
  bVar8 = 0;
  CStack_24.height = 0;
  CStack_24.width = 0x43f00000;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  iVar7 = 0;
  do {
    iVar2 = iVar7 + 4;
    *(uint *)(&stack0xffffeed0 + iVar7) = 0;
    iVar7 = iVar2;
  } while (iVar2 != 0x1000);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520((CAlphaBitmap *)auStack_30);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            ((CAlphaBitmap *)(auStack_30 + 4),"stats",0x280,0x1e0);
  stream = engine_dosio_c_getFile_FUN_00481a50("data","credits.txt","rt")
  ;
  if (stream == (FILE *)0x0) {
    engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540(&CStack_24);
    return;
  }
  for (iVar7 = unaff_EBX << 2; ((stream->_flag & 0x10) == 0 && (iVar7 < 0x1000)); iVar7 = iVar7 + 4)
  {
    crt_stdio_c_fgets_FUN_005fefd0(acStack_124,0xff,stream);
    iVar2 = crt_string_c_strcmp_FUN_005fef20(acStack_128,"end\n");
    if (iVar2 == 0) break;
    uVar6 = 0xffffffff;
    pcVar3 = acStack_124;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + (uint)bVar8 * -2 + 1;
    } while (cVar1 != '\0');
    pvVar5 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(~uVar6 + 9,"..\\core\\game.cpp",0x1237);
    *(void **)((int)&uStack_1120 + iVar7) = pvVar5;
    if (pvVar5 == (void *)0x0) {
      g_CurrentFilename = "..\\core\\game.cpp";
      g_CurrentLineNumber = 0x1239;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CGame::rollCredits - Out of memory");
    }
    pcVar3 = acStack_124;
    pcVar4 = *(char **)(&stack0xffffeedc + iVar7);
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream,"..\\core\\game.cpp",0x123e);
  sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
  sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
  iVar7 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
  if (iVar7 != 0) {
    uStack_1120 = 0x4e438f;
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    uStack_1120 = 0x4e4396;
    sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(1);
    sound_sndmain_cpp_setNextSfxFlags_FUN_005a8b70(1);
    sound_sndmain_cpp_startSfx_FUN_005a8e90("faded-remix.mp3");
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  this_ptr_00 = g_ThemeFont;
  g_ThemeFont->win_font_enabled = 0;
  pcVar3 = (char *)engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr_00,0x58);
  pcStack00000020 = (char *)0xffffffff;
  pcStack00000030 = pcVar3;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(in_stack_00000040,in_stack_ffffef00);
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  do {
    dVar9 = crt_math_c_round_FUN_005fe6b0((double)(float)in_stack_0000002c);
    pcStack00000030 = (char *)(int)ROUND(dVar9);
    if (pcStack00000030 != extraout_EDX) {
      in_stack_00000024 = pcStack00000030;
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950
                ((CAlphaBitmap *)&stack0x00000020,0,0,0xffff);
      if (0 < (int)in_stack_00000044) {
        iVar7 = (int)in_stack_00000044 * 4;
        iVar2 = 0;
        do {
          pcVar4 = *(char **)((int)auStack_10dc + iVar2);
          color_mode = 0xf8;
          if (*pcVar4 == '\\') {
            if (pcVar4[1] == 'b') {
              color_mode = 2;
            }
            pcVar4 = pcVar4 + 2;
          }
          if ((-1 < in_stack_00000048) && (in_stack_00000048 < 0x1df - (int)pcVar3)) {
            engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
                      (this_ptr_00,0x19e,0x27f,in_stack_00000048,color_mode,0,pcVar4);
          }
          in_stack_00000048 = in_stack_00000048 + in_stack_0000004c;
          iVar2 = iVar2 + 4;
        } while (iVar2 < iVar7);
      }
      if ((in_stack_00000038 != 0) &&
         (iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(in_stack_00000038), iVar7 == 0)) {
LAB_004e43c1:
        if (g_MessageCount != 0) {
          this_ptr_00->win_font_enabled = 1;
        }
        sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
        iVar7 = in_stack_00000048;
        engine_2d_c_clearInputAndWait_FUN_00403260();
        if (0 < iVar7) {
          iVar7 = 0;
          do {
            iVar2 = iVar7 + 8;
            iVar7 = iVar7 + 4;
            shape_memdbg_cpp_debugFree_FUN_0050f460
                      (*(void **)((int)auStack_10dc + iVar2),"..\\core\\game.cpp",0x1294);
          } while (iVar7 < in_stack_0000004c * 4);
        }
        engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540((CAlphaBitmap *)&stack0x0000002c);
        return;
      }
      engine_2d_c_fillRectColor_FUN_00403170(0x19e,0,0x27f,0x1e,0);
      engine_2d_c_fillRectColor_FUN_00403170(0x19e,0x1b7,0x27f,0x1df,0);
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,1);
    if (iVar7 != 0) goto LAB_004e43c1;
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(in_stack_0000005c);
    in_stack_00000044 = in_stack_00000044 - *(float *)(in_stack_00000060 + 0x264) * 32f;
  } while( true );
}
