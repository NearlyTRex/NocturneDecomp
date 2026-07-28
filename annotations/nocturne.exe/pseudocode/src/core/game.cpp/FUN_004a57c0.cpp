// Name: core_game.cpp_FUN_004a57c0
// Address: 004a57c0
// Address Range: [[004a57c0, 004a5d87]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004a57c0(CGame *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004a57c0(CGame *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  _FILE *p_Var4;
  byte *pbVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  byte bVar10;
  uint auStack_a30 [256];
  byte local_630 [768];
  ushort auStack_330 [256];
  char local_130 [256];
  uint local_30;
  uint local_2c;
  ushort *local_28;
  int local_24;
  int local_20;
  int local_1c;
  void *local_18;
  int local_14;
  char *pcVar9;
  
  bVar10 = 0;
  if (param_1->bitmap_filename[0] == '\0') {
    return;
  }
  pcVar9 = param_1->bitmap_filename;
  param_1->cutscene_skippable = 0;
  iVar2 = engine_dosio_cpp_getFileSize_FUN_004568c0("art",pcVar9);
  if (iVar2 < 0) {
    shape_edittool_cpp_FUN_0046fcd0(0x01BCD074,"Can't open %s",pcVar9);
    param_1->bitmap_filename[0] = '\0';
    return;
  }
  iVar3 = param_1->bitmap_width * param_1->bitmap_height;
  if (iVar2 != iVar3) {
    shape_edittool_cpp_FUN_0046fcd0
              (0x01BCD074,"%s is %d bytes, but expected %dx%d=%d byte file",pcVar9,param_1->bitmap_width,
               param_1->bitmap_height,iVar3);
    param_1->bitmap_filename[0] = '\0';
    return;
  }
  splitpath(pcVar9,(char *)0x0,(char *)0x0,local_130,(char *)0x0);
  pcVar6 = ".act";
  iVar2 = -1;
  pcVar9 = local_130;
  do {
    pcVar8 = pcVar9;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar8 = pcVar9 + (uint)bVar10 * -2 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar8;
  } while (cVar1 != '\0');
  pcVar8 = pcVar8 + -1;
  do {
    cVar1 = *pcVar6;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  p_Var4 = engine_dosio_cpp_getFile_FUN_00456a60("art",local_130,"rb");
  if (p_Var4 == (_FILE *)0x0) {
    shape_edittool_cpp_FUN_0046fcd0(0x01BCD074,"Can't open %s",local_130);
  }
  else {
    _fread(local_630,1,0x300,p_Var4);
    _fclose(p_Var4);
    iVar2 = 0;
    iVar3 = 0;
    local_20 = 0;
    do {
      if (DAT_005b7624 == 0x10) {
        local_30 = (uint)local_630[iVar2 + 1];
        local_30 = local_630[iVar2 + 1] / _DAT_01c00634;
        local_2c = local_630[iVar2 + 2] / _DAT_01c00640;
        *(ushort *)((int)auStack_330 + iVar3) =
             (ushort)(local_630[iVar2 + 2] / _DAT_01c00640 << (DAT_01c0063c & 0x1f)) |
             (ushort)(local_630[iVar2] / _DAT_01c00628 << (DAT_01c00624 & 0x1f)) |
             (ushort)(local_30 << (DAT_01c00630 & 0x1f));
      }
      else if (DAT_005b7624 == 0x20) {
        *(uint *)((int)auStack_a30 + local_20) =
             (uint)local_630[iVar2] << (DAT_01c00624 & 0x1f) |
             (uint)local_630[iVar2 + 1] << (DAT_01c00630 & 0x1f) |
             (uint)local_630[iVar2 + 2] << (DAT_01c0063c & 0x1f);
      }
      else {
        *(uint *)((int)auStack_a30 + local_20) =
             (uint)local_630[iVar2 + 1] << 8 | (uint)local_630[iVar2] << 0x10 |
             (uint)local_630[iVar2 + 2];
      }
      iVar3 = iVar3 + 2;
      iVar2 = iVar2 + 3;
      local_20 = local_20 + 4;
    } while (iVar3 != 0x200);
    wincore_wddvmem_cpp_openScreenDevice_FUN_00553470();
    engine_special_cpp_lockFrame_FUN_005322e0();
    engine_special_cpp_clearScreen_FUN_0052ee70();
    engine_special_cpp_FUN_00532320();
    wincore_wddvmem_cpp_closeScreenDevice_FUN_00553520();
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    local_18 = malloc(param_1->bitmap_width * param_1->bitmap_height);
    if (local_18 != (void *)0x0) {
      p_Var4 = engine_dosio_cpp_getFile_FUN_00456a60
                         ("art",param_1->bitmap_filename,"rb");
      if (p_Var4 == (_FILE *)0x0) {
        PTR_01cc4800 = "..\\core\\game.cpp";
        INT_01cc4804 = 0x1028;
        core_main_c_FUN_004c8440("Can't open %s",param_1->bitmap_filename);
      }
      _fread(local_18,param_1->bitmap_width,param_1->bitmap_height,p_Var4);
      _fclose(p_Var4);
      local_1c = 0;
      if (0 < DAT_005b7620) {
        local_24 = 0;
        do {
          local_14 = param_1->bitmap_width * ((local_1c * param_1->bitmap_height) / DAT_005b7620);
          iVar2 = 0;
          if (0 < DAT_005b761c) {
            iVar3 = 0;
            iVar7 = 0;
            do {
              pbVar5 = (byte *)((int)local_18 +
                               (param_1->bitmap_width * iVar2) / DAT_005b761c + local_14);
              if (DAT_005b7624 == 0x10) {
                local_28 = (ushort *)(*(int *)(&DAT_01bd2fa0 + local_24) + iVar7);
                *(ushort *)(*(int *)(&DAT_01bd2fa0 + local_24) + iVar7) = auStack_330[*pbVar5];
              }
              else {
                *(uint *)(iVar3 + *(int *)(&DAT_01bd2fa0 + local_24)) = auStack_a30[*pbVar5];
              }
              iVar3 = iVar3 + 4;
              iVar2 = iVar2 + 1;
              iVar7 = iVar7 + 2;
            } while (iVar2 < DAT_005b761c);
          }
          local_1c = local_1c + 1;
          local_24 = local_24 + 4;
        } while (local_1c < DAT_005b7620);
      }
      engine_2d_c_clearInputAndWait_FUN_00403f50();
      core_game_cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0(param_1);
      do {
        wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
        if (param_1->game_control == CONTROL_MODE_GAMEPAD) {
          core_game_cpp_CGame_resetKeyState_FUN_0049e8b0(param_1);
        }
        iVar2 = wincore_winrun_cpp_wasKeyPressed_FUN_00558b70();
      } while (((iVar2 == 0) &&
               (iVar2 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,param_1->key_fire),
               iVar2 == 0)) && (_DAT_01bd1d94 == 0));
      while ((_DAT_01bd1d94 != 0 ||
             (iVar2 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,param_1->key_fire),
             iVar2 != 0))) {
        if (param_1->game_control == CONTROL_MODE_GAMEPAD) {
          core_game_cpp_CGame_resetKeyState_FUN_0049e8b0(param_1);
          wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
        }
        else {
          wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
        }
      }
      engine_2d_c_clearInputAndWait_FUN_00403f50();
      core_game_cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0(param_1);
      core_game_cpp_CGame_saveClockTime_FUN_0049a890(param_1);
      param_1->bitmap_filename[0] = '\0';
      FUN_005638d0(local_18);
      return;
    }
  }
  param_1->bitmap_filename[0] = '\0';
  return;
}
