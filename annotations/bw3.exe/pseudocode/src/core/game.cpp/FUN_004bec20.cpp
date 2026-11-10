// Name: core_game.cpp_FUN_004bec20
// Address: 004bec20
// Address Range: [[004bec20, 004bf22b]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004bec20(CGame *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004bec20(CGame *param_1)

{
  char cVar1;
  int iVar2;
  _FILE *p_Var3;
  byte *pbVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  byte bVar10;
  uint auStack_a2c [256];
  byte local_62c [768];
  ushort auStack_32c [256];
  char local_12c [256];
  uint local_2c;
  uint local_28;
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
  *(uint *)&param_1->field_0xe8 = 0;
  iVar2 = engine_dosio_cpp_getFileSize_FUN_004657f0(&DAT_005c38a8,param_1->bitmap_filename);
  if (iVar2 < 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
              (g_CEditorToolsPtr,"Can't open %s");
    param_1->bitmap_filename[0] = '\0';
    return;
  }
  if (iVar2 != param_1->bitmap_width * param_1->bitmap_height) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
              (g_CEditorToolsPtr,"%s is %d bytes, but expected %dx%d=%d byte file");
    param_1->bitmap_filename[0] = '\0';
    return;
  }
  splitpath
            (param_1->bitmap_filename,(char *)0x0,(char *)0x0,local_12c,(char *)0x0);
  pcVar5 = &DAT_005c38ea;
  iVar2 = -1;
  pcVar9 = local_12c;
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
    cVar1 = *pcVar5;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  p_Var3 = engine_dosio_cpp_FUN_004659c0(&DAT_005c38f2,local_12c,&DAT_005c38ef);
  if (p_Var3 == (_FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
              (g_CEditorToolsPtr,"Can't open %s");
  }
  else {
    _fread(local_62c,1,0x300,p_Var3);
    _fclose(p_Var3);
    iVar2 = 0;
    iVar6 = 0;
    local_1c = 0;
    do {
      if (DAT_005fba20 == 0x10) {
        local_2c = (uint)local_62c[iVar2];
        local_2c = local_62c[iVar2] / _DAT_01c6af78;
        local_28 = local_62c[iVar2 + 2] / _DAT_01c6af90;
        *(ushort *)((int)auStack_32c + iVar6) =
             (ushort)(local_62c[iVar2 + 2] / _DAT_01c6af90 << (DAT_01c6af8c & 0x1f)) |
             (ushort)(local_62c[iVar2 + 1] / _DAT_01c6af84 << (DAT_01c6af80 & 0x1f)) |
             (ushort)(local_2c << (DAT_01c6af74 & 0x1f));
      }
      else if (DAT_005fba20 == 0x20) {
        *(uint *)((int)auStack_a2c + local_1c) =
             (uint)local_62c[iVar2] << (DAT_01c6af74 & 0x1f) |
             (uint)local_62c[iVar2 + 1] << (DAT_01c6af80 & 0x1f) |
             (uint)local_62c[iVar2 + 2] << (DAT_01c6af8c & 0x1f);
      }
      else {
        *(uint *)((int)auStack_a2c + local_1c) =
             (uint)local_62c[iVar2] << 0x10 | (uint)local_62c[iVar2 + 1] << 8 |
             (uint)local_62c[iVar2 + 2];
      }
      iVar6 = iVar6 + 2;
      iVar2 = iVar2 + 3;
      local_1c = local_1c + 4;
    } while (iVar6 != 0x200);
    wincore_wddvmem_cpp_openScreenDevice_FUN_0057a3c0();
    engine_special_cpp_FUN_00565820();
    engine_special_cpp_clearScreen_FUN_00560d70();
    engine_special_cpp_unlockFrame_FUN_00565870(0);
    wincore_wddvmem_cpp_closeScreenDevice_FUN_0057a4b0();
    wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
    local_18 = FUN_005a3650(param_1->bitmap_width * param_1->bitmap_height);
    if (local_18 != (void *)0x0) {
      p_Var3 = engine_dosio_cpp_FUN_004659c0(&DAT_005c3907,param_1->bitmap_filename,&DAT_005c3904);
      if (p_Var3 == (_FILE *)0x0) {
        _DAT_01d71de0 = "..\\core\\game.cpp";
        _DAT_01d71de4 = 0x1287;
        core_main_c_FUN_004e4330("Can't open %s",param_1->bitmap_filename);
      }
      _fread(local_18,param_1->bitmap_width,param_1->bitmap_height,p_Var3);
      _fclose(p_Var3);
      local_24 = 0;
      if (0 < DAT_005fba1c) {
        local_20 = 0;
        do {
          local_14 = param_1->bitmap_width * ((local_24 * param_1->bitmap_height) / DAT_005fba1c);
          iVar2 = 0;
          if (0 < DAT_005fba18) {
            iVar7 = 0;
            iVar6 = 0;
            do {
              pbVar4 = (byte *)((param_1->bitmap_width * iVar2) / DAT_005fba18 + local_14 +
                               (int)local_18);
              if (DAT_005fba20 == 0x10) {
                *(ushort *)(*(int *)(&DAT_01c5faec + local_20) + iVar6) = auStack_32c[*pbVar4];
              }
              else {
                *(uint *)(*(int *)(&DAT_01c5faec + local_20) + iVar7) = auStack_a2c[*pbVar4];
              }
              iVar7 = iVar7 + 4;
              iVar2 = iVar2 + 1;
              iVar6 = iVar6 + 2;
            } while (iVar2 < DAT_005fba18);
          }
          local_24 = local_24 + 1;
          local_20 = local_20 + 4;
        } while (local_24 < DAT_005fba1c);
      }
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      core_game_cpp_FUN_004ba490(param_1);
      while( true ) {
        wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
        if (*(int *)&param_1->field_0xd4 == 2) {
          core_game_cpp_CGame_resetKeyState_FUN_004b93e0(param_1);
        }
        iVar2 = wincore_winrun_cpp_wasKeyPressed_FUN_00580800();
        if ((((iVar2 != 0) ||
             (iVar2 = (**(code **)*0x01D70A78)(0x01D70A78,*(uint *)&param_1->field_0x48),
             iVar2 != 0)) || (_DAT_01c5fae4 != 0)) ||
           ((_DAT_01d22b44 != 1 && (*(float *)&param_1->field_0x438 < 0.0)))) break;
        core_game_cpp_FUN_004b4440(g_CGamePtr);
        *(float *)&param_1->field_0x438 =
             *(float *)&param_1->field_0x438 - g_CGamePtr->delta_time_float;
      }
      while ((_DAT_01c5fae4 != 0 ||
             (iVar2 = (**(code **)*0x01D70A78)(0x01D70A78,*(uint *)&param_1->field_0x48),
             iVar2 != 0))) {
        if (*(int *)&param_1->field_0xd4 == 2) {
          core_game_cpp_CGame_resetKeyState_FUN_004b93e0(param_1);
          wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
        }
        else {
          wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
        }
      }
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      core_game_cpp_FUN_004ba490(param_1);
      core_game_cpp_CGame_saveClockTime_FUN_004b4430(param_1);
      param_1->bitmap_filename[0] = '\0';
      FUN_005a3770(local_18);
      return;
    }
  }
  param_1->bitmap_filename[0] = '\0';
  return;
}
