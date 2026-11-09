// Name: core_game.cpp_CGame_rollCredits_FUN_004be430
// Address: 004be430
// Address Range: [[004be430, 004be89a]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_rollCredits_FUN_004be430(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_rollCredits_FUN_004be430(CGame *this_ptr)

{
  uint *puVar1;
  char cVar2;
  CBitFont *this_ptr_00;
  int iVar3;
  void *pvVar4;
  int extraout_ECX;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  float10 fVar10;
  int local_1158;
  uint auStack_1154 [1024];
  char local_154 [256];
  CAlphaBitmap local_54;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  _FILE *local_30;
  uint local_2c;
  float local_28;
  int local_24;
  CBitFont *local_20;
  int local_1c;
  int local_18;
  
  bVar9 = 0;
  local_40 = 0;
  local_28 = 480.0;
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  iVar6 = 0;
  do {
    iVar3 = iVar6 + 4;
    *(uint *)((int)auStack_1154 + iVar6) = 0;
    iVar6 = iVar3;
  } while (iVar3 != 0x1000);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d420(&local_54);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0(&local_54,"title_bw",0x280,0x1e0);
  local_30 = engine_dosio_cpp_FUN_00460c70(&DAT_005d8a53,"credits.txt",&DAT_005d8a44);
  if (local_30 != (_FILE *)0x0) {
    for (iVar6 = local_40 << 2; (((byte)local_30[0xc] & 0x10) == 0 && (iVar6 < 0x1000));
        iVar6 = iVar6 + 4) {
      _fgets(local_154,0xff,local_30);
      iVar3 = _strcmp(local_154,&DAT_005d8a58);
      if (iVar3 == 0) break;
      uVar5 = 0xffffffff;
      pcVar7 = local_154;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + (uint)bVar9 * -2 + 1;
      } while (cVar2 != '\0');
      pvVar4 = FUN_005b8580(~uVar5 + 9);
      *(void **)((int)auStack_1154 + iVar6) = pvVar4;
      if (pvVar4 == (void *)0x0) {
        _DAT_01d046a0 = "..\\core\\game.cpp";
        _DAT_01d046a4 = 0x14ad;
        core_main_c_FUN_004e4500("CGame::rollCredits - Out of memory");
      }
      pcVar7 = local_154;
      pcVar8 = *(char **)((int)auStack_1154 + iVar6);
      do {
        cVar2 = *pcVar7;
        *pcVar8 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar8[1] = cVar2;
        pcVar8 = pcVar8 + 2;
      } while (cVar2 != '\0');
      local_40 = local_40 + 1;
    }
    _fclose(local_30);
    sound_sndmain_cpp_resetSoundDevice_FUN_005526b0();
    sound_sndmain_cpp_FUN_005524b0();
    local_2c = 0;
    iVar6 = sound_sndmain_cpp_FUN_005512a0(1);
    if (iVar6 != 0) {
      sound_sndmain_cpp_FUN_00550450();
      sound_sndmain_cpp_setNextSfxChannel_FUN_00550310(1);
      sound_sndmain_cpp_setNextSfxFlags_FUN_00550380(1);
      local_2c = sound_sndmain_cpp_FUN_005506b0("XBLAIRMENU.WAV");
      sound_sndmain_cpp_FUN_005504d0();
    }
    engine_2d_c_clearInputAndWait_FUN_004032b0();
    this_ptr_00 = _DAT_01511cc0;
    local_20 = _DAT_01511cc0;
    *(uint *)(_DAT_01511cc0 + 0x4210) = 0;
    iVar6 = engine_font_cpp_FUN_004ab560(this_ptr_00,0x58);
    local_38 = -1;
    local_24 = iVar6;
    core_game_cpp_FUN_004b3000(this_ptr);
    engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
    local_34 = 0x1df - iVar6;
LAB_004be5a8:
    fVar10 = (float10)local_28;
    round();
    local_1158 = (int)ROUND(fVar10);
    if (local_1158 != extraout_ECX) {
      local_38 = local_1158;
      engine_special_cpp_clearScreen_FUN_0055b1f0();
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900(&local_54,10,7,0xffff);
      if (0 < local_40) {
        iVar6 = 0;
        local_1c = local_40 * 4;
        do {
          pcVar7 = *(char **)((int)auStack_1154 + iVar6);
          iVar3 = 0xf8;
          if (*pcVar7 == '\\') {
            if (pcVar7[1] == 'b') {
              iVar3 = 2;
            }
            pcVar7 = pcVar7 + 2;
          }
          if ((-1 < local_1158) && (local_1158 < local_34)) {
            local_18 = local_1158;
            fVar10 = (float10)local_1158 + (float10)_DAT_005d8abb;
            round();
            uVar5 = (int)ROUND(fVar10) >> 0x1f;
            local_18 = ((int)ROUND(fVar10) ^ uVar5) - uVar5;
            fVar10 = ((float10)1 - (float10)local_18 * (float10)_DAT_005d8aa3) *
                     (float10)_DAT_005d8aab;
            round();
            local_3c = (int)ROUND(fVar10);
            engine_3d_c_setRenderAlpha_FUN_00406da0(local_3c);
            engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004a93a0
                      (local_20,0,0x280,local_1158,iVar3,0,pcVar7);
          }
          iVar6 = iVar6 + 4;
          local_1158 = local_1158 + local_24;
        } while (iVar6 < local_1c);
      }
      if ((local_2c != 0) && (iVar6 = sound_sndmain_cpp_FUN_00550b70(local_2c), iVar6 == 0))
      goto LAB_004be71e;
    }
    wincore_wddvmem_cpp_FUN_00589560();
    iVar6 = (**(code **)*0x01D02F84)(0x01D02F84,1);
    if (iVar6 != 0) goto LAB_004be71e;
    core_game_cpp_FUN_004b3010(this_ptr);
    local_28 = local_28 - *(float *)&this_ptr->field_0x284 * _DAT_005d8ab3;
    if (local_28 < _DAT_005d8ac3) {
      local_38 = -1;
      local_28 = 500.0;
    }
    goto LAB_004be5a8;
  }
LAB_004be772:
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440(&local_54,0);
  return;
LAB_004be71e:
  if (_DAT_01d63250 != 0) {
    *(uint *)(local_20 + 0x4210) = 1;
  }
  sound_sndmain_cpp_resetSoundDevice_FUN_005526b0();
  iVar6 = local_40;
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  if (0 < iVar6) {
    iVar3 = 0;
    do {
      puVar1 = (uint *)((int)auStack_1154 + iVar3);
      iVar3 = iVar3 + 4;
      FUN_005b86a0(*puVar1);
    } while (iVar3 < iVar6 * 4);
  }
  goto LAB_004be772;
}
