// Name: core_game.cpp_CGame_rollCredits_FUN_004e4010
// Address: 004e4010
// MANUAL RECONSTRUCTION
// Address Range: [[004e4010, 004e443c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_rollCredits_FUN_004e4010(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_rollCredits_FUN_004e4010(CGame *this_ptr)

{
  _FILE *stream;
  int iVar2;
  char *pcVar4;
  int iVar4;
  int iVar5;
  void *pvVar5;
  int color_mode;
  int iVar7;
  int iVar8;
  char *local_1134 [1024];
  char local_134 [256];
  CAlphaBitmap local_34;
  uint local_20;
  int local_1c;
  float local_18;
  int local_14;
  int local_10;
  CBitFont *this_ptr_00;
  
  local_14 = 0;
  local_18 = 480.0;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  memset(local_1134, 0, sizeof(local_1134));
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&local_34);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(&local_34,"stats",0x280,0x1e0);
  stream = engine_dosio_cpp_getFile_FUN_00481a50
                     ("data","credits.txt","rt");
  if (stream == (_FILE *)0x0) {
    engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540(&local_34,0);
    return;
  }
  for (iVar7 = 0; ((stream->_flag & 0x10) == 0 && (iVar7 < 0x400)); iVar7 = iVar7 + 1) {
    _fgets(local_134,0xff,stream);
    iVar2 = _strcmp(local_134,"end\n");
    if (iVar2 == 0) break;
    pvVar5 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(strlen(local_134) + 10,"..\\core\\game.cpp",4663);
    local_1134[iVar7] = (char *)pvVar5;
    if (pvVar5 == (void *)0x0) {
      g_CurrentFilename = "..\\core\\game.cpp";
      g_CurrentLineNumber = 4665;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CGame::rollCredits - Out of memory");
    }
    strcpy(local_1134[iVar7], local_134);
    local_14 = local_14 + 1;
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream,"..\\core\\game.cpp",4670);
  sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
  sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
  local_20 = 0;
  iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
  if (iVar2 != 0) {
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(1);
    sound_sndmain_cpp_setNextSfxFlags_FUN_005a8b70(1);
    local_20 = sound_sndmain_cpp_startSfx_FUN_005a8e90("faded-remix.mp3");
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  this_ptr_00 = g_ThemeFont;
  g_ThemeFont->win_font_enabled = 0;
  iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(this_ptr_00,0x58);
  local_1c = -1;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(this_ptr);
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  do {
    iVar5 = (int)ROUND(ROUND(local_18));
    if (iVar5 != local_1c) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(&local_34,0,0,0xffff);
      if (0 < local_14) {
        iVar8 = 0;
        local_10 = iVar5;
        do {
          pcVar4 = local_1134[iVar8];
          color_mode = 0xf8;
          if (*pcVar4 == '\\') {
            if (pcVar4[1] == 'b') {
              color_mode = 2;
            }
            pcVar4 = pcVar4 + 2;
          }
          if ((-1 < local_10) && (local_10 < 0x1df - iVar2)) {
            engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
                      (this_ptr_00,0x19e,0x27f,local_10,color_mode,0,pcVar4);
          }
          local_10 = local_10 + iVar2;
          iVar8 = iVar8 + 1;
        } while (iVar8 < local_14);
      }
      if ((local_20 != 0) &&
         (iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(local_20), iVar4 == 0)) {
LAB_004e43c1:
        if (g_MessageCount != 0) {
          this_ptr_00->win_font_enabled = 1;
        }
        sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
        engine_2d_c_clearInputAndWait_FUN_00403260();
        if (0 < local_14) {
          iVar2 = 0;
          do {
            shape_memdbg_cpp_debugFree_FUN_0050f460(local_1134[iVar2],"..\\core\\game.cpp",4756)
            ;
            iVar2 = iVar2 + 1;
          } while (iVar2 < local_14);
        }
        engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540(&local_34,0);
        return;
      }
      engine_2d_c_fillRectColor_FUN_00403170(0x19e,0,0x27f,0x1e,0);
      engine_2d_c_fillRectColor_FUN_00403170(0x19e,0x1b7,0x27f,0x1df,0);
      local_1c = iVar5;
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar5 != 0) goto LAB_004e43c1;
    core_game_cpp_CGame_updateDT_FUN_004d7d90(this_ptr);
    local_18 = local_18 - this_ptr->delta_time_float * 32.0f;
  } while( true );
}
