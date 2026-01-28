// Name: core_game.cpp_CGame_rollCredits_FUN_004e4010
// Address: 004e4010
// Address Range: [[004e4010, 004e443c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_rollCredits_FUN_004e4010(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_rollCredits_FUN_004e4010(CGame *this_ptr)

{
  char cVar1;
  CBitFont *this_ptr_00;
  float fVar2;
  int iVar3;
  FILE *stream;
  char *pcVar4;
  void *pvVar5;
  uint uVar6;
  int color_mode;
  int iVar7;
  int iVar8;
  CGame *unaff_ESI;
  char *pcVar9;
  byte bVar10;
  double dVar11;
  CGame *in_stack_00000008;
  uint local_1134 [1024];
  char local_134 [252];
  byte auStack_38 [8];
  CAlphaBitmap CStack_30;
  float local_1c;
  float local_18;
  float local_14;
  int local_10;
  int local_c;
  
  bVar10 = 0;
  local_14 = 0.0;
  local_18 = 480.0;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  iVar7 = 0;
  do {
    iVar3 = iVar7 + 4;
    *(uint *)((int)local_1134 + iVar7) = 0;
    iVar7 = iVar3;
  } while (iVar3 != 0x1000);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520((CAlphaBitmap *)(auStack_38 + 4));
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            ((CAlphaBitmap *)(auStack_38 + 4),"stats",0x280,0x1e0);
  stream = engine_dosio_c_getFile_FUN_00481a50("data","credits.txt","rt")
  ;
  if (stream == (FILE *)0x0) {
    engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540((CAlphaBitmap *)(auStack_38 + 4));
    return;
  }
  for (iVar7 = (int)local_14 << 2; ((stream->_flag & 0x10) == 0 && (iVar7 < 0x1000));
      iVar7 = iVar7 + 4) {
    crt_stdio_c_fgets_FUN_005fefd0(local_134,0xff,stream);
    iVar3 = crt_string_c_strcmp_FUN_005fef20(local_134,"end\n");
    if (iVar3 == 0) break;
    uVar6 = 0xffffffff;
    pcVar4 = local_134;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar10 * -2 + 1;
    } while (cVar1 != '\0');
    pvVar5 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(~uVar6 + 9,"..\\core\\game.cpp",0x1237);
    *(void **)((int)local_1134 + iVar7) = pvVar5;
    if (pvVar5 == (void *)0x0) {
      g_CurrentFilename = "..\\core\\game.cpp";
      g_CurrentLineNumber = 0x1239;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CGame::rollCredits - Out of memory");
    }
    pcVar4 = local_134;
    pcVar9 = *(char **)((int)local_1134 + iVar7);
    do {
      cVar1 = *pcVar4;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    local_14 = (float)((int)local_14 + 1);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream,"..\\core\\game.cpp",0x123e);
  sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
  sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
  CStack_30.height = 0;
  iVar7 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
  if (iVar7 != 0) {
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(1);
    sound_sndmain_cpp_setNextSfxFlags_FUN_005a8b70(1);
    CStack_30.height = sound_sndmain_cpp_startSfx_FUN_005a8e90("faded-remix.mp3");
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  this_ptr_00 = g_ThemeFont;
  g_ThemeFont->win_font_enabled = 0;
  iVar7 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr_00,0x58);
  local_1c = -NAN;
  local_c = iVar7;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(this_ptr,unaff_ESI);
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  do {
    fVar2 = local_1c;
    dVar11 = crt_math_c_round_FUN_005fe6b0((double)local_18);
    local_14 = (float)(int)ROUND(dVar11);
    if (local_14 != fVar2) {
      CStack_30.height = (int)local_14;
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950((CAlphaBitmap *)auStack_38,0,0,0xffff);
      if (0 < (int)local_18) {
        iVar3 = (int)local_18 * 4;
        iVar8 = 0;
        do {
          pcVar4 = *(char **)((int)local_1134 + iVar8 + -4);
          color_mode = 0xf8;
          if (*pcVar4 == '\\') {
            if (pcVar4[1] == 'b') {
              color_mode = 2;
            }
            pcVar4 = pcVar4 + 2;
          }
          if ((-1 < (int)local_14) && ((int)local_14 < 0x1df - iVar7)) {
            engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
                      (this_ptr_00,0x19e,0x27f,(int)local_14,color_mode,0,pcVar4);
          }
          iVar8 = iVar8 + 4;
          local_14 = (float)((int)local_14 + local_10);
        } while (iVar8 < iVar3);
      }
      if ((CStack_30.width != 0) &&
         (iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(CStack_30.width), iVar3 == 0)) {
LAB_004e43c1:
        if (g_MessageCount != 0) {
          this_ptr_00->win_font_enabled = 1;
        }
        sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
        iVar7 = local_10;
        engine_2d_c_clearInputAndWait_FUN_00403260();
        if (0 < iVar7) {
          iVar7 = 0;
          do {
            iVar3 = iVar7 + 4;
            iVar7 = iVar7 + 4;
            shape_memdbg_cpp_debugFree_FUN_0050f460
                      (*(void **)((int)local_1134 + iVar3),"..\\core\\game.cpp",0x1294);
          } while (iVar7 < local_10 * 4);
        }
        engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540(&CStack_30);
        return;
      }
      engine_2d_c_fillRectColor_FUN_00403170(0x19e,0,0x27f,0x1e,0);
      engine_2d_c_fillRectColor_FUN_00403170(0x19e,0x1b7,0x27f,0x1df,0);
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,1);
    if (iVar3 != 0) goto LAB_004e43c1;
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(in_stack_00000008);
    local_14 = local_14 - in_stack_00000008->delta_time_float * 32.0f;
  } while( true );
}
