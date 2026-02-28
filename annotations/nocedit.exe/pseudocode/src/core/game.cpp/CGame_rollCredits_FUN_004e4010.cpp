// Name: core_game.cpp_CGame_rollCredits_FUN_004e4010
// Address: 004e4010
// Address Range: [[004e4010, 004e443c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_rollCredits_FUN_004e4010(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_game_cpp_CGame_rollCredits_FUN_004e4010(CGame *this_ptr)

{
  uint *puVar1;
  char cVar2;
  CBitFont *this_ptr_00;
  int iVar3;
  _FILE *stream;
  char *pcVar4;
  void *pvVar5;
  uint uVar6;
  int color_mode;
  int iVar7;
  int iVar8;
  char *pcVar9;
  byte bVar10;
  uint local_1134 [1024];
  char local_134 [256];
  CAlphaBitmap local_34;
  uint local_20;
  int local_1c;
  float local_18;
  int local_14;
  int local_10;
  int local_c;
  
  bVar10 = 0;
  local_14 = 0;
  local_18 = 480.0;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  iVar7 = 0;
  do {
    iVar3 = iVar7 + 4;
    *(uint *)((int)local_1134 + iVar7) = 0;
    iVar7 = iVar3;
  } while (iVar3 != 0x1000);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&local_34);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(&local_34,"stats",0x280,0x1e0);
  stream = engine_dosio_c_getFile_FUN_00481a50("data","credits.txt","rt")
  ;
  if (stream == (_FILE *)0x0) {
    engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540(&local_34,0);
    return;
  }
  for (iVar7 = local_14 << 2; ((stream->_flag & 0x10) == 0 && (iVar7 < 0x1000)); iVar7 = iVar7 + 4)
  {
    _fgets(local_134,0xff,stream);
    iVar3 = _strcmp(local_134,"end\n");
    if (iVar3 == 0) break;
    uVar6 = 0xffffffff;
    pcVar4 = local_134;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar10 * -2 + 1;
    } while (cVar2 != '\0');
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
      cVar2 = *pcVar4;
      *pcVar9 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar9[1] = cVar2;
      pcVar9 = pcVar9 + 2;
    } while (cVar2 != '\0');
    local_14 = local_14 + 1;
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream,"..\\core\\game.cpp",0x123e);
  sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
  sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
  local_20 = 0;
  iVar7 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
  if (iVar7 != 0) {
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(1);
    sound_sndmain_cpp_setNextSfxFlags_FUN_005a8b70(1);
    local_20 = sound_sndmain_cpp_startSfx_FUN_005a8e90("faded-remix.mp3");
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  this_ptr_00 = g_ThemeFont;
  g_ThemeFont->win_font_enabled = 0;
  iVar7 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr_00,0x58);
  local_1c = -1;
  local_c = iVar7;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(this_ptr);
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  do {
    local_10 = (int)ROUND(ROUND(local_18));
    if (local_10 != local_1c) {
      local_1c = local_10;
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(&local_34,0,0,0xffff);
      if (0 < local_14) {
        iVar3 = local_14 * 4;
        iVar8 = 0;
        do {
          pcVar4 = *(char **)((int)local_1134 + iVar8);
          color_mode = 0xf8;
          if (*pcVar4 == '\\') {
            if (pcVar4[1] == 'b') {
              color_mode = 2;
            }
            pcVar4 = pcVar4 + 2;
          }
          if ((-1 < local_10) && (local_10 < 0x1df - iVar7)) {
            engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
                      (this_ptr_00,0x19e,0x27f,local_10,color_mode,0,pcVar4);
          }
          iVar8 = iVar8 + 4;
          local_10 = local_10 + local_c;
        } while (iVar8 < iVar3);
      }
      if ((local_20 != 0) &&
         (iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(local_20), iVar3 == 0)) {
LAB_004e43c1:
        if (g_MessageCount != 0) {
          this_ptr_00->win_font_enabled = 1;
        }
        sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
        iVar7 = local_14;
        engine_2d_c_clearInputAndWait_FUN_00403260();
        if (0 < iVar7) {
          iVar7 = 0;
          iVar3 = local_14 * 4;
          do {
            puVar1 = (uint *)((int)local_1134 + iVar7);
            iVar7 = iVar7 + 4;
            shape_memdbg_cpp_debugFree_FUN_0050f460((void *)*puVar1,"..\\core\\game.cpp",0x1294)
            ;
          } while (iVar7 < iVar3);
        }
        engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540(&local_34,0);
        return;
      }
      engine_2d_c_fillRectColor_FUN_00403170(0x19e,0,0x27f,0x1e,0);
      engine_2d_c_fillRectColor_FUN_00403170(0x19e,0x1b7,0x27f,0x1df,0);
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar3 != 0) goto LAB_004e43c1;
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(this_ptr);
    local_18 = local_18 - this_ptr->delta_time_float * 32.0f;
  } while( true );
}
