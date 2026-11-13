// Name: core_game.cpp_CGame_rollCredits_FUN_004d8e50
// Address: 004d8e50
// Address Range: [[004d8e50, 004d925c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_rollCredits_FUN_004d8e50(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_rollCredits_FUN_004d8e50(CGame *this_ptr)

{
  uint *puVar1;
  char cVar2;
  CBitFont *this_ptr_00;
  int iVar3;
  _FILE *stream;
  char *pcVar4;
  void *pvVar5;
  uint uVar6;
  int extraout_EDX;
  int color_mode;
  int iVar7;
  int iVar8;
  char *pcVar9;
  byte bVar10;
  float10 fVar11;
  uint local_1134 [1024];
  char local_134 [256];
  CAlphaBitmap local_34;
  int local_20;
  int local_1c;
  uint local_18;
  float local_14;
  int local_10;
  int local_c;
  
  bVar10 = 0;
  local_1c = 0;
  local_14 = 480.0;
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  iVar7 = 0;
  do {
    iVar3 = iVar7 + 4;
    *(uint *)((int)local_1134 + iVar7) = 0;
    iVar7 = iVar3;
  } while (iVar3 != 0x1000);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d0a0(&local_34);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220(&local_34,"stats",0x280,0x1e0);
  stream = engine_dosio_cpp_FUN_00479180(&DAT_005e3599,"credits.txt",&DAT_005e358a);
  if (stream == (_FILE *)0x0) {
    engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0(&local_34,0);
    return;
  }
  for (iVar7 = local_1c << 2; ((stream->_flag & 0x10) == 0 && (iVar7 < 0x1000)); iVar7 = iVar7 + 4)
  {
    _fgets(local_134,0xff,stream);
    iVar3 = _strcmp(local_134,&DAT_005e359e);
    if (iVar3 == 0) break;
    uVar6 = 0xffffffff;
    pcVar4 = local_134;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar10 * -2 + 1;
    } while (cVar2 != '\0');
    pvVar5 = malloc(~uVar6 + 9);
    *(void **)((int)local_1134 + iVar7) = pvVar5;
    if (pvVar5 == (void *)0x0) {
      _DAT_01d1d400 = "..\\core\\game.cpp";
      _DAT_01d1d404 = 0x147e;
      core_main_c_FUN_005030e0("CGame::rollCredits - Out of memory");
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
    local_1c = local_1c + 1;
  }
  _fclose(stream);
  sound_sndmain_cpp_resetSoundDevice_FUN_005750e0();
  sound_sndmain_cpp_enableSoundSystem_FUN_00574ee0();
  local_18 = 0;
  iVar7 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00573cd0(1);
  if (iVar7 != 0) {
    sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
    sound_sndmain_cpp_setNextSfxChannel_FUN_00572980(1);
    sound_sndmain_cpp_setNextSfxFlags_FUN_005729f0(1);
    local_18 = sound_sndmain_cpp_startSfx_FUN_00572d20("splash-music-44.wav");
    sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
  }
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  this_ptr_00 = _DAT_0152d244;
  _DAT_0152d244->win_font_enabled = 0;
  iVar7 = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(this_ptr_00,0x58);
  local_20 = -1;
  core_game_cpp_CGame_saveClockTime_FUN_004cbf10(this_ptr);
  engine_3d_c_setRenderAlpha_FUN_00406bd0(0xffff);
  local_10 = 0x1df - iVar7;
  do {
    fVar11 = (float10)local_14;
    round();
    local_c = (int)ROUND(fVar11);
    if (local_c != extraout_EDX) {
      local_20 = local_c;
      engine_special_cpp_clearScreen_FUN_0057dc40();
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(&local_34,0,0,0xffff);
      if (0 < local_1c) {
        iVar3 = local_1c * 4;
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
          if ((-1 < local_c) && (local_c < local_10)) {
            engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004c2350
                      (this_ptr_00,0x19e,0x27f,local_c,color_mode,0,pcVar4);
          }
          iVar8 = iVar8 + 4;
          local_c = local_c + iVar7;
        } while (iVar8 < iVar3);
      }
      if ((local_18 != 0) &&
         (iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(local_18), iVar3 == 0)) {
LAB_004d91eb:
        if (_DAT_01d7f1b8 != 0) {
          this_ptr_00->win_font_enabled = 1;
        }
        sound_sndmain_cpp_resetSoundDevice_FUN_005750e0();
        iVar7 = local_1c;
        engine_2d_c_clearInputAndWait_FUN_004032b0();
        if (0 < iVar7) {
          iVar7 = 0;
          iVar3 = local_1c * 4;
          do {
            puVar1 = (uint *)((int)local_1134 + iVar7);
            iVar7 = iVar7 + 4;
            FUN_005c09f0(*puVar1);
          } while (iVar7 < iVar3);
        }
        engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0(&local_34,0);
        return;
      }
      engine_2d_c_fillRectColor_FUN_004031c0(0x19e,0,0x27f,0x1e,0);
      engine_2d_c_fillRectColor_FUN_004031c0(0x19e,0x1b7,0x27f,0x1df,0);
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
    iVar3 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,1);
    if (iVar3 != 0) goto LAB_004d91eb;
    core_game_cpp_FUN_004cbf20(this_ptr);
    local_14 = local_14 - this_ptr->delta_time_float * _DAT_005e35ec;
  } while( true );
}
