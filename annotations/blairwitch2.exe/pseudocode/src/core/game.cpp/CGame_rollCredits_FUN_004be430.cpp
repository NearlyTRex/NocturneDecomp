// Name: core_game.cpp_CGame_rollCredits_FUN_004be430
// Address: 004be430
// Address Range: [[004be430, 004be89a]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_rollCredits_FUN_004be430(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_rollCredits_FUN_004be430(CGame *this_ptr)

{
  char cVar1;
  CBitFont *this_ptr_00;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  byte bVar9;
  double dVar10;
  int y;
  uint local_1158 [1025];
  char local_154 [252];
  byte auStack_58 [16];
  int iStack_48;
  int iStack_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  _FILE *local_30;
  CBitFont *local_2c;
  float local_28;
  int local_24;
  CBitFont *local_20;
  int local_1c;
  
  bVar9 = 0;
  local_40 = 0;
  local_28 = 480.0;
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  iVar5 = 0;
  do {
    iVar2 = iVar5 + 4;
    *(uint *)((int)local_1158 + iVar5 + 4) = 0;
    iVar5 = iVar2;
  } while (iVar2 != 0x1000);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d420((CAlphaBitmap *)(auStack_58 + 4));
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            ((CAlphaBitmap *)(auStack_58 + 4),"title_bw",0x280,0x1e0);
  local_30 = engine_dosio_cpp_getFile_FUN_00460c70
                       (&DAT_005d8a53,"credits.txt",&DAT_005d8a44);
  if (local_30 != (_FILE *)0x0) {
    for (iVar5 = local_40 << 2; ((local_30->_flag & 0x10) == 0 && (iVar5 < 0x1000));
        iVar5 = iVar5 + 4) {
      _fgets(local_154,0xff,local_30);
      iVar2 = _strcmp(local_154,&DAT_005d8a58);
      if (iVar2 == 0) break;
      uVar4 = 0xffffffff;
      pcVar6 = local_154;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + (uint)bVar9 * -2 + 1;
      } while (cVar1 != '\0');
      pvVar3 = malloc(~uVar4 + 9);
      *(void **)((int)local_1158 + iVar5 + 4) = pvVar3;
      if (pvVar3 == (void *)0x0) {
        _DAT_01d046a0 = "..\\core\\game.cpp";
        _DAT_01d046a4 = 0x14ad;
        core_main_c_displayErrorAndQuit_FUN_004e4500("CGame::rollCredits - Out of memory");
      }
      pcVar6 = local_154;
      pcVar8 = *(char **)((int)local_1158 + iVar5 + 4);
      do {
        cVar1 = *pcVar6;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      local_40 = local_40 + 1;
    }
    _fclose(local_30);
    sound_sndmain_cpp_resetSoundDevice_FUN_005526b0();
    sound_sndmain_cpp_enableSoundSystem_FUN_005524b0();
    local_2c = (CBitFont *)0x0;
    iVar5 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005512a0(1);
    if (iVar5 != 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
      sound_sndmain_cpp_setNextSfxChannel_FUN_00550310(1);
      sound_sndmain_cpp_setNextSfxFlags_FUN_00550380(1);
      local_2c = (CBitFont *)sound_sndmain_cpp_startSfx_FUN_005506b0("XBLAIRMENU.WAV");
      sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
    }
    engine_2d_c_clearInputAndWait_FUN_004032b0();
    this_ptr_00 = _DAT_01511cc0;
    local_20 = _DAT_01511cc0;
    _DAT_01511cc0->win_font_enabled = 0;
    iVar5 = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(this_ptr_00,0x58);
    local_38 = -1;
    local_24 = iVar5;
    core_game_cpp_CGame_saveClockTime_FUN_004b3000(this_ptr);
    engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
    local_34 = 0x1df - iVar5;
LAB_004be5a8:
    iVar2 = local_38;
    dVar10 = round((double)local_28);
    iVar5 = (int)ROUND(dVar10);
    if (iVar5 != iVar2) {
      local_3c = iVar5;
      engine_special_cpp_clearScreen_FUN_0055b1f0();
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900((CAlphaBitmap *)auStack_58,10,7,0xffff);
      if (0 < iStack_44) {
        iVar2 = 0;
        local_20 = (CBitFont *)(iStack_44 * 4);
        do {
          pcVar6 = *(char **)((int)local_1158 + iVar2);
          iVar7 = 0xf8;
          if (*pcVar6 == '\\') {
            if (pcVar6[1] == 'b') {
              iVar7 = 2;
            }
            pcVar6 = pcVar6 + 2;
          }
          if ((-1 < iVar5) && (iVar5 < local_38)) {
            local_1c = iVar5;
            dVar10 = round((double)iVar5 + _DAT_005d8abb);
            uVar4 = (int)ROUND(dVar10) >> 0x1f;
            local_20 = (CBitFont *)(((int)ROUND(dVar10) ^ uVar4) - uVar4);
            y = 0x4be692;
            dVar10 = round
                               ((1.0 - (double)(int)local_20 * _DAT_005d8aa3) * _DAT_005d8aab);
            iStack_48 = (int)ROUND(dVar10);
            engine_3d_c_setRenderAlpha_FUN_00406da0(iStack_48);
            engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004a93a0
                      (local_2c,0,0x280,y,iVar7,0,pcVar6);
          }
          iVar2 = iVar2 + 4;
          iVar5 = iVar5 + (int)local_28;
        } while (iVar2 < (int)local_20);
      }
      if ((local_2c != (CBitFont *)0x0) &&
         (iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70((uint)local_2c), iVar5 == 0))
      goto LAB_004be71e;
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
    iVar5 = (**(code **)*0x01D02F84)(0x01D02F84,1);
    if (iVar5 != 0) goto LAB_004be71e;
    core_game_cpp_CGame_updateDT_FUN_004b3010(this_ptr);
    local_28 = local_28 - this_ptr->delta_time_float * _DAT_005d8ab3;
    if (local_28 < _DAT_005d8ac3) {
      local_38 = -1;
      local_28 = 500.0;
    }
    goto LAB_004be5a8;
  }
LAB_004be772:
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440((CAlphaBitmap *)(auStack_58 + 4),0);
  return;
LAB_004be71e:
  if (_DAT_01d63250 != 0) {
    local_20->win_font_enabled = 1;
  }
  sound_sndmain_cpp_resetSoundDevice_FUN_005526b0();
  iVar5 = local_40;
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  if (0 < iVar5) {
    iVar2 = 0;
    do {
      iVar7 = iVar2 + 4;
      iVar2 = iVar2 + 4;
      debugFree(*(void **)((int)local_1158 + iVar7));
    } while (iVar2 < iVar5 * 4);
  }
  goto LAB_004be772;
}
