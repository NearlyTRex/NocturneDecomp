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
  void *pvVar4;
  uint uVar5;
  float extraout_EDX;
  int color_mode;
  int iVar6;
  int iVar7;
  CGame *unaff_ESI;
  char *pcVar8;
  byte bVar9;
  double dVar10;
  CGame *in_stack_00000008;
  uint local_1134 [1024];
  char local_134 [252];
  byte auStack_38 [8];
  CAlphaBitmap CStack_30;
  uint local_1c;
  float local_18;
  float local_14;
  int local_10;
  int local_c;
  
  bVar9 = 0;
  local_14 = 0.0;
  local_18 = 480.0;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  iVar6 = 0;
  do {
    iVar2 = iVar6 + 4;
    *(uint *)((int)local_1134 + iVar6) = 0;
    iVar6 = iVar2;
  } while (iVar2 != 0x1000);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520((CAlphaBitmap *)(auStack_38 + 4));
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            ((CAlphaBitmap *)(auStack_38 + 4),"stats",0x280,0x1e0);
  stream = engine_dosio_c_getFile_FUN_00481a50("data","credits.txt","rt")
  ;
  if (stream == (FILE *)0x0) {
    engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540((CAlphaBitmap *)(auStack_38 + 4));
    return;
  }
  for (iVar6 = (int)local_14 << 2; ((stream->_flag & 0x10) == 0 && (iVar6 < 0x1000));
      iVar6 = iVar6 + 4) {
    crt_stdio_c_fgets_FUN_005fefd0(local_134,0xff,stream);
    iVar2 = crt_string_c_strcmp_FUN_005fef20(local_134,"end\n");
    if (iVar2 == 0) break;
    uVar5 = 0xffffffff;
    pcVar3 = local_134;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + (uint)bVar9 * -2 + 1;
    } while (cVar1 != '\0');
    pvVar4 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(~uVar5 + 9,"..\\core\\game.cpp",0x1237);
    *(void **)((int)local_1134 + iVar6) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      g_CurrentFilename = "..\\core\\game.cpp";
      g_CurrentLineNumber = 0x1239;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CGame::rollCredits - Out of memory");
    }
    pcVar3 = local_134;
    pcVar8 = *(char **)((int)local_1134 + iVar6);
    do {
      cVar1 = *pcVar3;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    local_14 = (float)((int)local_14 + 1);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream,"..\\core\\game.cpp",0x123e);
  sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
  sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
  CStack_30.height = 0;
  iVar6 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
  if (iVar6 != 0) {
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(1);
    sound_sndmain_cpp_setNextSfxFlags_FUN_005a8b70(1);
    CStack_30.height = sound_sndmain_cpp_startSfx_FUN_005a8e90("faded-remix.mp3");
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  this_ptr_00 = g_ThemeFont;
  g_ThemeFont->win_font_enabled = 0;
  iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr_00,0x58);
  local_1c = 0xffffffff;
  local_c = iVar6;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(this_ptr,unaff_ESI);
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  do {
    dVar10 = crt_math_c_round_FUN_005fe6b0((double)local_18);
    local_14 = (float)(int)ROUND(dVar10);
    if (local_14 != extraout_EDX) {
      CStack_30.height = (int)local_14;
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950((CAlphaBitmap *)auStack_38,0,0,0xffff);
      if (0 < (int)local_18) {
        iVar2 = (int)local_18 * 4;
        iVar7 = 0;
        do {
          pcVar3 = *(char **)((int)local_1134 + iVar7 + -4);
          color_mode = 0xf8;
          if (*pcVar3 == '\\') {
            if (pcVar3[1] == 'b') {
              color_mode = 2;
            }
            pcVar3 = pcVar3 + 2;
          }
          if ((-1 < (int)local_14) && ((int)local_14 < 0x1df - iVar6)) {
            engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
                      (this_ptr_00,0x19e,0x27f,(int)local_14,color_mode,0,pcVar3);
          }
          iVar7 = iVar7 + 4;
          local_14 = (float)((int)local_14 + local_10);
        } while (iVar7 < iVar2);
      }
      if ((CStack_30.width != 0) &&
         (iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(CStack_30.width), iVar2 == 0)) {
LAB_004e43c1:
        if (g_MessageCount != 0) {
          this_ptr_00->win_font_enabled = 1;
        }
        sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
        iVar6 = local_10;
        engine_2d_c_clearInputAndWait_FUN_00403260();
        if (0 < iVar6) {
          iVar6 = 0;
          do {
            iVar2 = iVar6 + 4;
            iVar6 = iVar6 + 4;
            shape_memdbg_cpp_debugFree_FUN_0050f460
                      (*(void **)((int)local_1134 + iVar2),"..\\core\\game.cpp",0x1294);
          } while (iVar6 < local_10 * 4);
        }
        engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540(&CStack_30);
        return;
      }
      engine_2d_c_fillRectColor_FUN_00403170(0x19e,0,0x27f,0x1e,0);
      engine_2d_c_fillRectColor_FUN_00403170(0x19e,0x1b7,0x27f,0x1df,0);
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,1);
    if (iVar2 != 0) goto LAB_004e43c1;
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(in_stack_00000008);
    local_14 = local_14 - in_stack_00000008->delta_time_float * 32f;
  } while( true );
}
