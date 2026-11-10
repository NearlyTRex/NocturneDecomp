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
  _FILE *p_Var4;
  char *pcVar5;
  void *pvVar6;
  uint uVar7;
  int extraout_EDX;
  int color_mode;
  int iVar8;
  int iVar9;
  char *pcVar10;
  byte bVar11;
  float10 fVar12;
  uint local_1134 [1024];
  char local_134 [256];
  CAlphaBitmap local_34;
  int local_20;
  int local_1c;
  uint local_18;
  float local_14;
  int local_10;
  int local_c;
  
  bVar11 = 0;
  local_1c = 0;
  local_14 = 480.0;
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  iVar8 = 0;
  do {
    iVar3 = iVar8 + 4;
    *(uint *)((int)local_1134 + iVar8) = 0;
    iVar8 = iVar3;
  } while (iVar3 != 0x1000);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d0a0(&local_34);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220(&local_34,"stats",0x280,0x1e0);
  p_Var4 = engine_dosio_cpp_FUN_00479180(&DAT_005e3599,"credits.txt",&DAT_005e358a);
  if (p_Var4 == (_FILE *)0x0) {
    engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0(&local_34,0);
    return;
  }
  for (iVar8 = local_1c << 2; (((byte)p_Var4[0xc] & 0x10) == 0 && (iVar8 < 0x1000));
      iVar8 = iVar8 + 4) {
    _fgets(local_134,0xff,p_Var4);
    iVar3 = _strcmp(local_134,&DAT_005e359e);
    if (iVar3 == 0) break;
    uVar7 = 0xffffffff;
    pcVar5 = local_134;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar11 * -2 + 1;
    } while (cVar2 != '\0');
    pvVar6 = FUN_005c08d0(~uVar7 + 9);
    *(void **)((int)local_1134 + iVar8) = pvVar6;
    if (pvVar6 == (void *)0x0) {
      _DAT_01d1d400 = "..\\core\\game.cpp";
      _DAT_01d1d404 = 0x147e;
      core_main_c_FUN_005030e0("CGame::rollCredits - Out of memory");
    }
    pcVar5 = local_134;
    pcVar10 = *(char **)((int)local_1134 + iVar8);
    do {
      cVar2 = *pcVar5;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    local_1c = local_1c + 1;
  }
  _fclose(p_Var4);
  sound_sndmain_cpp_resetSoundDevice_FUN_005750e0();
  sound_sndmain_cpp_enableSoundSystem_FUN_00574ee0();
  local_18 = 0;
  iVar8 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00573cd0(1);
  if (iVar8 != 0) {
    sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
    sound_sndmain_cpp_FUN_00572980(1);
    sound_sndmain_cpp_FUN_005729f0(1);
    local_18 = sound_sndmain_cpp_startSfx_FUN_00572d20("splash-music-44.wav");
    sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
  }
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  this_ptr_00 = _DAT_0152d244;
  *(uint *)(_DAT_0152d244 + 0x4210) = 0;
  iVar8 = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(this_ptr_00,0x58);
  local_20 = -1;
  core_game_cpp_CGame_saveClockTime_FUN_004cbf10(this_ptr);
  engine_3d_c_setRenderAlpha_FUN_00406bd0(0xffff);
  local_10 = 0x1df - iVar8;
  do {
    fVar12 = (float10)local_14;
    round();
    local_c = (int)ROUND(fVar12);
    if (local_c != extraout_EDX) {
      local_20 = local_c;
      engine_special_cpp_clearScreen_FUN_0057dc40();
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(&local_34,0,0,0xffff);
      if (0 < local_1c) {
        iVar3 = local_1c * 4;
        iVar9 = 0;
        do {
          pcVar5 = *(char **)((int)local_1134 + iVar9);
          color_mode = 0xf8;
          if (*pcVar5 == '\\') {
            if (pcVar5[1] == 'b') {
              color_mode = 2;
            }
            pcVar5 = pcVar5 + 2;
          }
          if ((-1 < local_c) && (local_c < local_10)) {
            engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004c2350
                      (this_ptr_00,0x19e,0x27f,local_c,color_mode,0,pcVar5);
          }
          iVar9 = iVar9 + 4;
          local_c = local_c + iVar8;
        } while (iVar9 < iVar3);
      }
      if ((local_18 != 0) && (iVar3 = sound_sndmain_cpp_FUN_005735a0(local_18), iVar3 == 0)) {
LAB_004d91eb:
        if (_DAT_01d7f1b8 != 0) {
          *(uint *)(this_ptr_00 + 0x4210) = 1;
        }
        sound_sndmain_cpp_resetSoundDevice_FUN_005750e0();
        iVar8 = local_1c;
        engine_2d_c_clearInputAndWait_FUN_004032b0();
        if (0 < iVar8) {
          iVar8 = 0;
          iVar3 = local_1c * 4;
          do {
            puVar1 = (uint *)((int)local_1134 + iVar8);
            iVar8 = iVar8 + 4;
            FUN_005c09f0(*puVar1);
          } while (iVar8 < iVar3);
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
