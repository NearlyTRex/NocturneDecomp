// Name: core_game.cpp_CGame_rollCredits_FUN_004a6e90
// Address: 004a6e90
// Address Range: [[004a6e90, 004a729c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_rollCredits_FUN_004a6e90(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_rollCredits_FUN_004a6e90(uint param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  byte bVar9;
  float10 fVar10;
  int unaff_retaddr;
  uint uVar11;
  int local_1134 [1024];
  char local_134 [252];
  byte auStack_38 [4];
  byte local_34 [16];
  int iStack_24;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  int local_10;
  
  bVar9 = 0;
  local_1c = 0;
  local_14 = 480.0;
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 4;
    *(uint *)((int)local_1134 + iVar3) = 0;
    iVar3 = iVar2;
  } while (iVar2 != 0x1000);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040e320();
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0(local_34,"stats",0x280);
  iVar3 = engine_dosio_cpp_getFile_FUN_00456a60(&DAT_00584687,"credits.txt");
  if (iVar3 == 0) {
    engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040e340(local_34);
    return;
  }
  for (iVar2 = local_1c << 2; ((*(byte *)(iVar3 + 0xc) & 0x10) == 0 && (iVar2 < 0x1000));
      iVar2 = iVar2 + 4) {
    _fgets(local_134,0xff,iVar3);
    iVar4 = _strcmp(local_134,&DAT_0058468c);
    if (iVar4 == 0) break;
    uVar6 = 0xffffffff;
    pcVar5 = local_134;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar9 * -2 + 1;
    } while (cVar1 != '\0');
    iVar4 = malloc(~uVar6 + 9);
    *(int *)((int)local_1134 + iVar2) = iVar4;
    if (iVar4 == 0) {
      _DAT_01cc4800 = "..\\core\\game.cpp";
      _DAT_01cc4804 = 0x1242;
      FUN_004c8440("CGame::rollCredits - Out of memory");
    }
    pcVar5 = local_134;
    pcVar8 = *(char **)((int)local_1134 + iVar2);
    do {
      cVar1 = *pcVar5;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    local_1c = local_1c + 1;
  }
  _fclose(iVar3);
  sound_sndmain_cpp_resetSoundDevice_FUN_00528080();
  sound_sndmain_cpp_enableSoundSystem_FUN_00527e40();
  local_18 = 0.0;
  iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(1);
  if (iVar3 != 0) {
    sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
    sound_sndmain_cpp_setNextSfxChannel_FUN_005261b0(1);
    sound_sndmain_cpp_setNextSfxFlags_FUN_00526240(1);
    local_18 = (float)sound_sndmain_cpp_startSfx_FUN_005265a0("faded-remix.mp3");
    sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
  }
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  iVar3 = _DAT_014b9900;
  *(uint *)(_DAT_014b9900 + 0x3190) = 0;
  iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(iVar3,0x58);
  local_20 = -1;
  core_game_cpp_CGame_saveClockTime_FUN_0049a890(param_1);
  engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
  local_10 = 0x1df - iVar2;
  do {
    iVar4 = local_20;
    uVar11 = 0x4a6ffd;
    fVar10 = (float10)round((float10)local_14);
    local_10 = (int)ROUND(fVar10);
    if (local_10 != iVar4) {
      iStack_24 = local_10;
      wincore_windll_cpp_clearScreen_FUN_0052ee70(uVar11);
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710(auStack_38,0,0,0xffff);
      if (0 < local_20) {
        iVar4 = local_20 * 4;
        iVar7 = 0;
        do {
          pcVar5 = *(char **)((int)local_1134 + iVar7 + -4);
          uVar11 = 0xf8;
          if (*pcVar5 == '\\') {
            if (pcVar5[1] == 'b') {
              uVar11 = 2;
            }
            pcVar5 = pcVar5 + 2;
          }
          if ((-1 < local_10) && (local_10 < (int)local_14)) {
            engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0
                      (iVar3,0x19e,0x27f,local_10,uVar11,0,pcVar5);
          }
          iVar7 = iVar7 + 4;
          local_10 = local_10 + iVar2;
        } while (iVar7 < iVar4);
      }
      if ((local_1c != 0) &&
         (iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(local_1c), iVar4 == 0)) {
LAB_004a722b:
        if (_DAT_01d16810 != 0) {
          *(uint *)(iVar3 + 0x3190) = 1;
        }
        sound_sndmain_cpp_resetSoundDevice_FUN_00528080();
        iVar3 = local_20;
        engine_2d_c_clearInputAndWait_FUN_00403f50();
        if (0 < iVar3) {
          iVar3 = 0;
          iVar2 = local_20 * 4;
          do {
            iVar4 = iVar3 + -4;
            iVar3 = iVar3 + 4;
            FUN_005638d0(*(uint *)((int)local_1134 + iVar4));
          } while (iVar3 < iVar2);
        }
        engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040e340(auStack_38,0);
        return;
      }
      engine_2d_c_fillRectColor_FUN_00403e60(0x19e,0,0x27f,0x1e,0);
      engine_2d_c_fillRectColor_FUN_00403e60(0x19e,0x1b7,0x27f,0x1df,0);
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    iVar4 = (**(code **)*0x01CC30E4)(0x01CC30E4,1);
    if (iVar4 != 0) goto LAB_004a722b;
    core_game_cpp_CGame_updateDT_FUN_0049a8a0(unaff_retaddr);
    local_18 = local_18 - *(float *)(unaff_retaddr + 0x264) * _DAT_005846d6;
  } while( true );
}
