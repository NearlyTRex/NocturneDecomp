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
  _FILE *stream;
  SIZE_T SVar5;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  byte bVar12;
  float10 fVar13;
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
  
  bVar12 = 0;
  local_20 = 0;
  local_38 = 480.0;
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  iVar10 = 0;
  do {
    iVar4 = iVar10 + 4;
    *(uint *)((int)local_154c + iVar10) = 0;
    iVar10 = iVar4;
  } while (iVar4 != 0x1000);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d2e0(&local_4c);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(&local_4c,"stats",0x280,0x1e0);
  stream = engine_dosio_cpp_FUN_004659c0(&DAT_005c3b9d,"credits.txt",&DAT_005c3b8e);
  if (stream == (_FILE *)0x0) {
    engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d300(&local_4c,0);
    return;
  }
  for (iVar10 = local_20 << 2; ((stream->_flag & 0x10) == 0 && (iVar10 < 0x1000));
      iVar10 = iVar10 + 4) {
    _fgets(local_14c,0xff,stream);
    iVar4 = _strcmp(local_14c,&DAT_005c3ba2);
    if (iVar4 == 0) break;
    uVar8 = 0xffffffff;
    pcVar11 = local_14c;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + (uint)bVar12 * -2 + 1;
    } while (cVar2 != '\0');
    pvVar7 = malloc(~uVar8 + 9);
    *(void **)((int)local_154c + iVar10) = pvVar7;
    if (pvVar7 == (void *)0x0) {
      _DAT_01d71de0 = "..\\core\\game.cpp";
      _DAT_01d71de4 = 0x14af;
      core_main_c_FUN_004e4330("CGame::rollCredits - Out of memory");
    }
    pcVar11 = local_14c;
    pcVar9 = *(char **)((int)local_154c + iVar10);
    do {
      cVar2 = *pcVar11;
      *pcVar9 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar9[1] = cVar2;
      pcVar9 = pcVar9 + 2;
    } while (cVar2 != '\0');
    local_20 = local_20 + 1;
  }
  _fclose(stream);
  sound_sndmain_cpp_enableSoundSystem_FUN_00558050();
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  pCVar3 = _DAT_01549aa8;
  local_10 = _DAT_01549aa8;
  _DAT_01549aa8->win_font_enabled = 0;
  iVar10 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(pCVar3,0x58);
  local_24 = -1;
  local_34 = iVar10;
  core_game_cpp_CGame_saveClockTime_FUN_004b4430(this_ptr);
  engine_3d_c_setRenderAlpha_FUN_00406bf0(0xffff);
  local_1c = 0x1df - iVar10;
  do {
    iVar10 = local_24;
    fVar13 = (float10)local_38;
    round();
    local_c = (int)ROUND(fVar13);
    if (local_c != iVar10) {
      local_24 = local_c;
      engine_special_cpp_clearScreen_FUN_00560d70();
      local_18 = 0;
      if (0 < local_20) {
        local_30 = 0;
        local_14 = local_20 * 4;
        do {
          local_2c = 0xf8;
          pcVar11 = *(char **)((int)local_154c + local_30);
          if ((*pcVar11 == '\\') && (pcVar11[1] == 'b')) {
            local_2c = 2;
            pcVar11 = pcVar11 + 2;
          }
          if ((-1 < local_c) && (local_c < local_1c)) {
            local_18 = 1;
            if ((*pcVar11 == '\\') && (pcVar11[1] == '1')) {
              pcVar11 = pcVar11 + 2;
              local_28 = 0xffffffff;
              uVar8 = 0xffffffff;
              pcVar9 = pcVar11;
              do {
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                cVar2 = *pcVar9;
                pcVar9 = pcVar9 + (uint)bVar12 * -2 + 1;
              } while (cVar2 != '\0');
              iVar10 = ~uVar8 - 1;
              SVar5 = 0;
              if (0 < iVar10) {
                pcVar9 = pcVar11;
                do {
                  if ((int)(~uVar8 - 3) <= (int)SVar5) break;
                  if ((*pcVar9 == '\\') && (pcVar9[1] == '2')) {
                    local_28 = SVar5;
                    break;
                  }
                  SVar5 = SVar5 + 1;
                  pcVar9 = pcVar9 + 1;
                } while ((int)SVar5 < iVar10);
              }
              if (0 < (int)local_28) {
                _strncpy(local_54c,pcVar11,local_28);
                iVar6 = local_28 + 2;
                local_54c[local_28] = '\0';
                iVar4 = local_c;
                pCVar3 = local_10;
                iVar10 = local_2c;
                engine_font_cpp_CBitFont_drawTextWrapper_FUN_004b0cb0
                          (local_10,100,local_c,local_2c,0,local_54c);
                engine_font_cpp_CBitFont_drawTextWrapper_FUN_004b0cb0
                          (pCVar3,300,iVar4,iVar10,0,pcVar11 + iVar6);
              }
            }
            else {
              engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004b0fa0
                        (local_10,100,400,local_c,local_2c,0,pcVar11);
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
    iVar10 = (**(code **)*0x01D70A78)(0x01D70A78,1);
    if (iVar10 != 0) {
      if (_DAT_01dd4890 != 0) {
        local_10->win_font_enabled = 1;
      }
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      if (0 < local_20) {
        iVar10 = local_20 * 4;
        iVar4 = 0;
        do {
          puVar1 = (uint *)((int)local_154c + iVar4);
          iVar4 = iVar4 + 4;
          FUN_005a3770(*puVar1);
        } while (iVar4 < iVar10);
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
