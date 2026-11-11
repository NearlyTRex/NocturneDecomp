// Name: core_game.cpp_CGame_rollCredits_FUN_004c02a0
// Address: 004c02a0
// Address Range: [[004c02a0, 004c07a0]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_rollCredits_FUN_004c02a0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_rollCredits_FUN_004c02a0(CGame *this_ptr)

{
  uint *puVar1;
  char cVar2;
  CBitFont *pCVar3;
  int iVar4;
  _FILE *p_Var5;
  SIZE_T SVar6;
  int iVar7;
  void *pvVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  byte bVar13;
  float10 fVar14;
  uint local_154c [1024];
  char local_54c [1024];
  char local_14c [256];
  CAlphaBitmap local_4c;
  float local_38;
  int local_34;
  int local_30;
  int local_2c;
  SIZE_T local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  CBitFont *local_10;
  int local_c;
  
  bVar13 = 0;
  local_20 = 0;
  local_38 = 480.0;
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  iVar11 = 0;
  do {
    iVar4 = iVar11 + 4;
    *(uint *)((int)local_154c + iVar11) = 0;
    iVar11 = iVar4;
  } while (iVar4 != 0x1000);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d2e0(&local_4c);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(&local_4c,"stats",0x280,0x1e0);
  p_Var5 = engine_dosio_cpp_FUN_004659c0(&DAT_005c3b9d,"credits.txt",&DAT_005c3b8e);
  if (p_Var5 == (_FILE *)0x0) {
    engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d300(&local_4c,0);
    return;
  }
  for (iVar11 = local_20 << 2; ((p_Var5->_flag & 0x10) == 0 && (iVar11 < 0x1000));
      iVar11 = iVar11 + 4) {
    _fgets(local_14c,0xff,p_Var5);
    iVar4 = _strcmp(local_14c,&DAT_005c3ba2);
    if (iVar4 == 0) break;
    uVar9 = 0xffffffff;
    pcVar12 = local_14c;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + (uint)bVar13 * -2 + 1;
    } while (cVar2 != '\0');
    pvVar8 = malloc(~uVar9 + 9);
    *(void **)((int)local_154c + iVar11) = pvVar8;
    if (pvVar8 == (void *)0x0) {
      _DAT_01d71de0 = "..\\core\\game.cpp";
      _DAT_01d71de4 = 0x14af;
      core_main_c_FUN_004e4330("CGame::rollCredits - Out of memory");
    }
    pcVar12 = local_14c;
    pcVar10 = *(char **)((int)local_154c + iVar11);
    do {
      cVar2 = *pcVar12;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    local_20 = local_20 + 1;
  }
  _fclose(p_Var5);
  sound_sndmain_cpp_enableSoundSystem_FUN_00558050();
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  pCVar3 = _DAT_01549aa8;
  local_10 = _DAT_01549aa8;
  _DAT_01549aa8->win_font_enabled = 0;
  iVar11 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(pCVar3,0x58);
  local_24 = -1;
  local_34 = iVar11;
  core_game_cpp_CGame_saveClockTime_FUN_004b4430(this_ptr);
  engine_3d_c_setRenderAlpha_FUN_00406bf0(0xffff);
  local_1c = 0x1df - iVar11;
  do {
    iVar11 = local_24;
    fVar14 = (float10)local_38;
    round();
    local_c = (int)ROUND(fVar14);
    if (local_c != iVar11) {
      local_24 = local_c;
      engine_special_cpp_clearScreen_FUN_00560d70();
      local_18 = 0;
      if (0 < local_20) {
        local_30 = 0;
        local_14 = local_20 * 4;
        do {
          local_2c = 0xf8;
          pcVar12 = *(char **)((int)local_154c + local_30);
          if ((*pcVar12 == '\\') && (pcVar12[1] == 'b')) {
            local_2c = 2;
            pcVar12 = pcVar12 + 2;
          }
          if ((-1 < local_c) && (local_c < local_1c)) {
            local_18 = 1;
            if ((*pcVar12 == '\\') && (pcVar12[1] == '1')) {
              pcVar12 = pcVar12 + 2;
              local_28 = 0xffffffff;
              uVar9 = 0xffffffff;
              pcVar10 = pcVar12;
              do {
                if (uVar9 == 0) break;
                uVar9 = uVar9 - 1;
                cVar2 = *pcVar10;
                pcVar10 = pcVar10 + (uint)bVar13 * -2 + 1;
              } while (cVar2 != '\0');
              iVar11 = ~uVar9 - 1;
              SVar6 = 0;
              if (0 < iVar11) {
                pcVar10 = pcVar12;
                do {
                  if ((int)(~uVar9 - 3) <= (int)SVar6) break;
                  if ((*pcVar10 == '\\') && (pcVar10[1] == '2')) {
                    local_28 = SVar6;
                    break;
                  }
                  SVar6 = SVar6 + 1;
                  pcVar10 = pcVar10 + 1;
                } while ((int)SVar6 < iVar11);
              }
              if (0 < (int)local_28) {
                _strncpy(local_54c,pcVar12,local_28);
                iVar7 = local_28 + 2;
                local_54c[local_28] = '\0';
                iVar4 = local_c;
                pCVar3 = local_10;
                iVar11 = local_2c;
                engine_font_cpp_CBitFont_drawTextWrapper_FUN_004b0cb0
                          (local_10,100,local_c,local_2c,0,local_54c);
                engine_font_cpp_CBitFont_drawTextWrapper_FUN_004b0cb0
                          (pCVar3,300,iVar4,iVar11,0,pcVar12 + iVar7);
              }
            }
            else {
              engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004b0fa0
                        (local_10,100,400,local_c,local_2c,0,pcVar12);
            }
          }
          local_30 = local_30 + 4;
          local_c = local_c + local_34;
        } while (local_30 < local_14);
      }
      engine_2d_c_fillRectColor_FUN_004031c0(0,0,0x27f,0x1e,0);
      engine_2d_c_fillRectColor_FUN_004031c0(0,0x1b7,0x27f,0x1df,0);
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
    iVar11 = (**(code **)*0x01D70A78)(0x01D70A78,1);
    if (iVar11 != 0) {
      if (_DAT_01dd4890 != 0) {
        local_10->win_font_enabled = 1;
      }
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      if (0 < local_20) {
        iVar11 = local_20 * 4;
        iVar4 = 0;
        do {
          puVar1 = (uint *)((int)local_154c + iVar4);
          iVar4 = iVar4 + 4;
          FUN_005a3770(*puVar1);
        } while (iVar4 < iVar11);
      }
      engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d300(&local_4c,0);
      return;
    }
    core_game_cpp_FUN_004b4440(this_ptr);
    local_38 = local_38 - this_ptr->delta_time_float * _DAT_005c3bdc;
    if ((local_18 == 0) && (local_38 < 0.0)) {
      local_38 = 480.0;
      local_24 = -1;
    }
  } while( true );
}
