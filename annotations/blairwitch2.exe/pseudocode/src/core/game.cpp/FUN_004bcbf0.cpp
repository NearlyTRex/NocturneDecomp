// Name: core_game.cpp_FUN_004bcbf0
// Address: 004bcbf0
// Address Range: [[004bcbf0, 004bd2ec]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004bcbf0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004bcbf0(CGame *this_ptr)

{
  byte *puVar1;
  char cVar2;
  int iVar3;
  _FILE *p_Var4;
  byte *pbVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  byte bVar11;
  uint auStack_a44 [256];
  byte local_644 [768];
  ushort auStack_344 [256];
  char local_144 [256];
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_30;
  int iStack_2c;
  int local_28;
  int local_24;
  int iStack_20;
  int local_1c;
  void *local_18;
  int local_14;
  char *pcVar10;
  
  bVar11 = 0;
  if (this_ptr->field_0x8d8 == '\0') {
    return;
  }
  puVar1 = &this_ptr->field_0x8d8;
  *(uint *)&this_ptr->field_0xe0 = 0;
  iVar3 = engine_dosio_cpp_getFileSize_FUN_00460aa0(&DAT_005d8748,puVar1);
  if (iVar3 < 0) {
    shape_edittool_cpp_FUN_0047be40(g_CEditorToolsPtr,"Can't open %s",puVar1);
    this_ptr->field_0x8d8 = 0;
    return;
  }
  iVar6 = *(int *)&this_ptr->field_0x9d8 * *(int *)&this_ptr->field_0x9dc;
  if (iVar3 != iVar6) {
    shape_edittool_cpp_FUN_0047be40
              (g_CEditorToolsPtr,"%s is %d bytes, but expected %dx%d=%d byte file",puVar1,
               *(uint *)&this_ptr->field_0x9d8,*(int *)&this_ptr->field_0x9dc,iVar6);
    this_ptr->field_0x8d8 = 0;
    return;
  }
  splitpath(puVar1,(char *)0x0,(char *)0x0,local_144,(char *)0x0);
  pcVar7 = &DAT_005d878a;
  iVar3 = -1;
  pcVar10 = local_144;
  do {
    pcVar9 = pcVar10;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar9 = pcVar10 + (uint)bVar11 * -2 + 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar9;
  } while (cVar2 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar2 = *pcVar7;
    *pcVar9 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar9[1] = cVar2;
    pcVar9 = pcVar9 + 2;
  } while (cVar2 != '\0');
  p_Var4 = engine_dosio_cpp_FUN_00460c70(&DAT_005d8792,local_144,&DAT_005d878f);
  if (p_Var4 == (_FILE *)0x0) {
    shape_edittool_cpp_FUN_0047be40(g_CEditorToolsPtr,"Can't open %s",local_144);
  }
  else {
    _fread(local_644,1,0x300,p_Var4);
    _fclose(p_Var4);
    iVar3 = 0;
    iVar6 = 0;
    local_24 = 0;
    do {
      if (DAT_006141c0 == 0x10) {
        local_44 = (uint)local_644[iVar3 + 1];
        local_40 = local_44;
        local_40 = local_44 / _DAT_01c35824;
        local_3c = local_644[iVar3 + 2] / _DAT_01c35830;
        *(ushort *)((int)auStack_344 + iVar6) =
             (ushort)(local_644[iVar3 + 2] / _DAT_01c35830 << (DAT_01c3582c & 0x1f)) |
             (ushort)(local_644[iVar3] / _DAT_01c35818 << (DAT_01c35814 & 0x1f)) |
             (ushort)(local_44 / _DAT_01c35824 << (DAT_01c35820 & 0x1f));
      }
      else {
        local_30 = (uint)local_644[iVar3 + 2];
        if (DAT_006141c0 == 0x20) {
          *(uint *)((int)auStack_a44 + local_24) =
               local_30 << (DAT_01c3582c & 0x1f) |
               (uint)local_644[iVar3] << (DAT_01c35814 & 0x1f) |
               (uint)local_644[iVar3 + 1] << (DAT_01c35820 & 0x1f);
        }
        else {
          *(uint *)((int)auStack_a44 + local_24) =
               (uint)local_644[iVar3] << 0x10 | (uint)local_644[iVar3 + 1] << 8 | local_30;
        }
      }
      iVar6 = iVar6 + 2;
      iVar3 = iVar3 + 3;
      local_24 = local_24 + 4;
    } while (iVar6 != 0x200);
    wincore_wddvmem_cpp_FUN_005890c0();
    engine_special_cpp_FUN_0055f500();
    engine_special_cpp_clearScreen_FUN_0055b1f0();
    engine_special_cpp_FUN_0055f550(0);
    wincore_wddvmem_cpp_FUN_00589170();
    wincore_wddvmem_cpp_FUN_00589560();
    local_18 = FUN_005b8580
                         (*(int *)&this_ptr->field_0x9d8 * *(int *)&this_ptr->field_0x9dc);
    if (local_18 != (void *)0x0) {
      p_Var4 = engine_dosio_cpp_FUN_00460c70(&DAT_005d87a7,&this_ptr->field_0x8d8,&DAT_005d87a4);
      if (p_Var4 == (_FILE *)0x0) {
        _DAT_01d046a0 = "..\\core\\game.cpp";
        _DAT_01d046a4 = 0x1275;
        core_main_c_FUN_004e4500("Can't open %s",&this_ptr->field_0x8d8);
      }
      _fread(local_18,*(uint *)&this_ptr->field_0x9d8,
                 *(uint *)&this_ptr->field_0x9dc,p_Var4);
      _fclose(p_Var4);
      local_1c = 0;
      if (0 < DAT_006141bc) {
        local_28 = 0;
        do {
          local_14 = *(int *)&this_ptr->field_0x9d8 *
                     ((local_1c * *(int *)&this_ptr->field_0x9dc) / DAT_006141bc);
          iVar3 = 0;
          if (0 < DAT_006141b8) {
            iVar6 = 0;
            iVar8 = 0;
            do {
              pbVar5 = (byte *)((*(int *)&this_ptr->field_0x9d8 * iVar3) / DAT_006141b8 + local_14 +
                               (int)local_18);
              if (DAT_006141c0 == 0x10) {
                *(ushort *)(*(int *)(&DAT_01c2a38c + local_28) + iVar8) = auStack_344[*pbVar5];
              }
              else {
                *(uint *)(*(int *)(&DAT_01c2a38c + local_28) + iVar6) = auStack_a44[*pbVar5];
              }
              iVar6 = iVar6 + 4;
              iVar3 = iVar3 + 1;
              iVar8 = iVar8 + 2;
            } while (iVar3 < DAT_006141b8);
          }
          local_1c = local_1c + 1;
          local_28 = local_28 + 4;
        } while (local_1c < DAT_006141bc);
      }
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      core_game_cpp_FUN_004b8250(this_ptr);
      puVar1 = &this_ptr->field_0x3a8;
      while( true ) {
        wincore_wddvmem_cpp_FUN_00589560();
        if (*(int *)&this_ptr->field_0xd0 == 2) {
          core_game_cpp_CGame_resetKeyState_FUN_004b7140(this_ptr);
        }
        iVar3 = wincore_winrun_cpp_wasKeyPressed_FUN_0058eb40();
        if (((iVar3 != 0) ||
            (iVar3 = (**(code **)*0x01D02F84)(0x01D02F84,*(uint *)&this_ptr->field_0x48),
            iVar3 != 0)) || (_DAT_01c2a384 != 0)) break;
        if (_DAT_01cb80cc == 1) {
          *(float *)puVar1 = *(float *)puVar1 - *(float *)&g_CGamePtr->field_0x284;
        }
        else {
          if (*(float *)&this_ptr->field_0x3a8 < 0.0) break;
          *(float *)puVar1 = *(float *)puVar1 - *(float *)&g_CGamePtr->field_0x284;
        }
      }
      do {
        if (_DAT_01c2a384 == 0) {
          iVar3 = (**(code **)*0x01D02F84)(0x01D02F84,*(uint *)&this_ptr->field_0x48);
          if (iVar3 == 0) {
            engine_2d_c_clearInputAndWait_FUN_004032b0();
            core_game_cpp_FUN_004b8250(this_ptr);
            core_game_cpp_FUN_004b3000(this_ptr);
            this_ptr->field_0x8d8 = 0;
            FUN_005b86a0(local_18);
            iStack_20 = 0;
            if (DAT_006141bc < 1) {
              return;
            }
            iStack_2c = 0;
            do {
              iVar3 = 0;
              if (0 < DAT_006141b8) {
                iVar8 = 0;
                iVar6 = 0;
                do {
                  if (DAT_006141c0 == 0x10) {
                    *(ushort *)(*(int *)(&DAT_01c2a38c + iStack_2c) + iVar6) = auStack_344[0];
                  }
                  else {
                    *(uint *)(*(int *)(&DAT_01c2a38c + iStack_2c) + iVar8) = auStack_a44[0];
                  }
                  iVar8 = iVar8 + 4;
                  iVar3 = iVar3 + 1;
                  iVar6 = iVar6 + 2;
                } while (iVar3 < DAT_006141b8);
              }
              iStack_2c = iStack_2c + 4;
              iStack_20 = iStack_20 + 1;
            } while (iStack_20 < DAT_006141bc);
            return;
          }
        }
        if (*(int *)&this_ptr->field_0xd0 == 2) {
          core_game_cpp_CGame_resetKeyState_FUN_004b7140(this_ptr);
          wincore_wddvmem_cpp_FUN_00589560();
        }
        else {
          wincore_wddvmem_cpp_FUN_00589560();
        }
      } while( true );
    }
  }
  this_ptr->field_0x8d8 = 0;
  return;
}
