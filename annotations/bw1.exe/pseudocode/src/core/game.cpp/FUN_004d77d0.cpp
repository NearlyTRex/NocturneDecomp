// Name: core_game.cpp_FUN_004d77d0
// Address: 004d77d0
// Address Range: [[004d77d0, 004d7ddb]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004d77d0(CGame *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004d77d0(CGame *param_1)

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
  pcVar9 = param_1->bitmap_filename;
  param_1->cinematic_skip_in_progress = 0;
  iVar2 = engine_dosio_cpp_getFileSize_FUN_00478fb0("art",pcVar9);
  if (iVar2 < 0) {
    shape_edittool_cpp_FUN_004943a0(g_CEditorToolsPtr,"Can't open %s",pcVar9);
    param_1->bitmap_filename[0] = '\0';
    return;
  }
  iVar3 = param_1->bitmap_width * param_1->bitmap_height;
  if (iVar2 != iVar3) {
    shape_edittool_cpp_FUN_004943a0
              (g_CEditorToolsPtr,"%s is %d bytes, but expected %dx%d=%d byte file",pcVar9,param_1->bitmap_width,
               param_1->bitmap_height,iVar3);
    param_1->bitmap_filename[0] = '\0';
    return;
  }
  splitpath(pcVar9,(char *)0x0,(char *)0x0,local_12c,(char *)0x0);
  pcVar6 = ".act";
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
    cVar1 = *pcVar6;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  p_Var4 = engine_dosio_cpp_FUN_00479180("art",local_12c,"rb");
  if (p_Var4 == (_FILE *)0x0) {
    shape_edittool_cpp_FUN_004943a0(g_CEditorToolsPtr,"Can't open %s",local_12c);
  }
  else {
    _fread(local_62c,1,0x300,p_Var4);
    _fclose(p_Var4);
    iVar2 = 0;
    iVar3 = 0;
    local_1c = 0;
    do {
      if (DAT_0061b4a0 == 0x10) {
        local_2c = (uint)local_62c[iVar2];
        local_2c = local_62c[iVar2] / _DAT_01c4e9d8;
        local_28 = local_62c[iVar2 + 2] / _DAT_01c4e9f0;
        *(ushort *)((int)auStack_32c + iVar3) =
             (ushort)(local_62c[iVar2 + 2] / _DAT_01c4e9f0 << (DAT_01c4e9ec & 0x1f)) |
             (ushort)(local_62c[iVar2 + 1] / _DAT_01c4e9e4 << (DAT_01c4e9e0 & 0x1f)) |
             (ushort)(local_2c << (DAT_01c4e9d4 & 0x1f));
      }
      else if (DAT_0061b4a0 == 0x20) {
        *(uint *)((int)auStack_a2c + local_1c) =
             (uint)local_62c[iVar2] << (DAT_01c4e9d4 & 0x1f) |
             (uint)local_62c[iVar2 + 1] << (DAT_01c4e9e0 & 0x1f) |
             (uint)local_62c[iVar2 + 2] << (DAT_01c4e9ec & 0x1f);
      }
      else {
        *(uint *)((int)auStack_a2c + local_1c) =
             (uint)local_62c[iVar2] << 0x10 | (uint)local_62c[iVar2 + 1] << 8 |
             (uint)local_62c[iVar2 + 2];
      }
      iVar3 = iVar3 + 2;
      iVar2 = iVar2 + 3;
      local_1c = local_1c + 4;
    } while (iVar3 != 0x200);
    wincore_wddvmem_cpp_openScreenDevice_FUN_005acb10();
    engine_special_cpp_FUN_00581f50();
    engine_special_cpp_clearScreen_FUN_0057dc40();
    engine_special_cpp_unlockFrame_FUN_00581fa0(0);
    wincore_wddvmem_cpp_closeScreenDevice_FUN_005acc00();
    wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
    local_18 = malloc(param_1->bitmap_width * param_1->bitmap_height);
    if (local_18 != (void *)0x0) {
      p_Var4 = engine_dosio_cpp_FUN_00479180(&DAT_005e3303,param_1->bitmap_filename,&DAT_005e3300);
      if (p_Var4 == (_FILE *)0x0) {
        _DAT_01d1d400 = "..\\core\\game.cpp";
        _DAT_01d1d404 = 0x1250;
        core_main_c_FUN_005030e0("Can't open %s",param_1->bitmap_filename);
      }
      _fread(local_18,param_1->bitmap_width,param_1->bitmap_height,p_Var4);
      _fclose(p_Var4);
      local_24 = 0;
      if (0 < DAT_0061b49c) {
        local_20 = 0;
        do {
          local_14 = param_1->bitmap_width * ((local_24 * param_1->bitmap_height) / DAT_0061b49c);
          iVar2 = 0;
          if (0 < DAT_0061b498) {
            iVar7 = 0;
            iVar3 = 0;
            do {
              pbVar5 = (byte *)((param_1->bitmap_width * iVar2) / DAT_0061b498 + local_14 +
                               (int)local_18);
              if (DAT_0061b4a0 == 0x10) {
                *(ushort *)(*(int *)(&DAT_01c4354c + local_20) + iVar3) = auStack_32c[*pbVar5];
              }
              else {
                *(uint *)(*(int *)(&DAT_01c4354c + local_20) + iVar7) = auStack_a2c[*pbVar5];
              }
              iVar7 = iVar7 + 4;
              iVar2 = iVar2 + 1;
              iVar3 = iVar3 + 2;
            } while (iVar2 < DAT_0061b498);
          }
          local_24 = local_24 + 1;
          local_20 = local_20 + 4;
        } while (local_24 < DAT_0061b49c);
      }
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      core_game_cpp_FUN_004d19d0(param_1);
      while( true ) {
        wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
        if (param_1->game_control == CONTROL_MODE_GAMEPAD) {
          core_game_cpp_CGame_resetKeyState_FUN_004d0960(param_1);
        }
        iVar2 = wincore_winrun_cpp_wasKeyPressed_FUN_005b2580();
        if ((((iVar2 != 0) ||
             (iVar2 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,param_1->key_fire), iVar2 != 0)) ||
            (_DAT_01c43544 != 0)) || ((_DAT_01cd0b3c != 1 && (param_1->bitmap_display_time < 0.0))))
        break;
        core_game_cpp_FUN_004cbf20(g_CGamePtr);
        param_1->bitmap_display_time = param_1->bitmap_display_time - g_CGamePtr->delta_time_float;
      }
      while ((_DAT_01c43544 != 0 ||
             (iVar2 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,param_1->key_fire), iVar2 != 0))) {
        if (param_1->game_control == CONTROL_MODE_GAMEPAD) {
          core_game_cpp_CGame_resetKeyState_FUN_004d0960(param_1);
          wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
        }
        else {
          wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
        }
      }
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      core_game_cpp_FUN_004d19d0(param_1);
      core_game_cpp_CGame_saveClockTime_FUN_004cbf10(param_1);
      param_1->bitmap_filename[0] = '\0';
      FUN_005c09f0(local_18);
      return;
    }
  }
  param_1->bitmap_filename[0] = '\0';
  return;
}
