// Name: wincore_winrun.cpp_FUN_00581f50
// Address: 00581f50
// Address Range: [[00581f50, 0058235a]]
// Convention: unknown
// Signature: void wincore_winrun_cpp_FUN_00581f50(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wincore_winrun_cpp_FUN_00581f50(int param_1)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  MMRESULT MVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  uint *puVar10;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_40;
  uint uStack_38;
  joyinfo_tag jStack_24;
  uint uStack_14;
  
  iVar7 = param_1 * 0xac;
  piVar8 = (int *)(iVar7 + 0x2d22c24);
  if ((*piVar8 == 0) || (*piVar8 == 4)) {
    return;
  }
  *(uint *)(iVar7 + 0x2d22c80) = *(uint *)(iVar7 + 0x2d22c7c);
  *(uint *)(iVar7 + 0x2d22c88) = *(uint *)(iVar7 + 0x2d22c84);
  puVar9 = (uint *)(iVar7 + 0x2d22c8c);
  puVar10 = (uint *)(iVar7 + 0x2d22cac);
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(byte *)puVar10 = *(byte *)puVar9;
    puVar9 = (uint *)((int)puVar9 + 1);
    puVar10 = (uint *)((int)puVar10 + 1);
  }
  if (_DAT_02d22c1c == (code *)0x0) {
    memset(&jStack_24,0,0x10);
    MVar4 = joyGetPos(*(UINT *)(param_1 * 4 + 0x2d22ed4),&jStack_24);
    if (MVar4 == 0) {
      param_1 = param_1 * 0x30;
      *(uint *)(iVar7 + 0x2d22c28) = 1;
      uStack_14 = wincore_winrun_cpp_FUN_00581e70
                            (jStack_24.wXpos,param_1 + 0x2d22ee4,0xbf800000,0x3f800000);
      *(uint *)(iVar7 + 0x2d22c44) = uStack_14;
      uStack_14 = wincore_winrun_cpp_FUN_00581e70
                            (jStack_24.wYpos,param_1 + 0x2d22ef0,0xbf800000,0x3f800000);
      *(uint *)(iVar7 + 0x2d22c48) = uStack_14;
      if (*(int *)(iVar7 + 0x2d22c38) != 0) {
        uVar3 = wincore_winrun_cpp_FUN_00581e70(jStack_24.wZpos,param_1 + 0x2d22efc,0,0x3f800000);
        *(uint *)(iVar7 + 0x2d22c4c) = uVar3;
      }
      iVar5 = 0;
      piVar2 = piVar8;
      do {
        bVar1 = (byte)iVar5;
        iVar5 = iVar5 + 1;
        piVar2[0x1a] = (uint)((jStack_24.wButtons & 1 << (bVar1 & 0x1f)) != 0);
        piVar2 = piVar2 + 1;
      } while (iVar5 < 8);
    }
    else {
      *(uint *)(iVar7 + 0x2d22c28) = 0;
    }
  }
  else {
    memset(&uStack_58,0,0x34);
    uStack_58 = 0x34;
    uStack_54 = 0x183;
    if (*(int *)(iVar7 + 0x2d22c38) != 0) {
      uStack_54 = 0x187;
    }
    if (*(int *)(iVar7 + 0x2d22c3c) != 0) {
      uStack_54 = uStack_54 | 8;
    }
    if (*(int *)(iVar7 + 0x2d22c40) != 0) {
      uStack_54 = uStack_54 | 0x40;
    }
    iVar5 = (*_DAT_02d22c1c)(*(uint *)(param_1 * 4 + 0x2d22ed4),&uStack_58);
    if (iVar5 == 0) {
      iVar5 = param_1 * 0x30;
      *(uint *)(iVar7 + 0x2d22c28) = 1;
      jStack_24.wZpos =
           wincore_winrun_cpp_FUN_00581e70(uStack_58,iVar5 + 0x2d22ee4,0xbf800000,0x3f800000);
      *(UINT *)(iVar7 + 0x2d22c44) = jStack_24.wZpos;
      jStack_24.wZpos =
           wincore_winrun_cpp_FUN_00581e70(uStack_54,iVar5 + 0x2d22ef0,0xbf800000,0x3f800000);
      *(UINT *)(iVar7 + 0x2d22c48) = jStack_24.wZpos;
      if (*(int *)(iVar7 + 0x2d22c38) != 0) {
        jStack_24.wZpos = wincore_winrun_cpp_FUN_00581e70(uStack_50,iVar5 + 0x2d22efc,0,0x3f800000);
        *(UINT *)(iVar7 + 0x2d22c4c) = jStack_24.wZpos;
      }
      if (*(int *)(iVar7 + 0x2d22c3c) != 0) {
        uVar3 = wincore_winrun_cpp_FUN_00581e70
                          (uStack_4c,param_1 * 0x30 + 0x2d22f08,0xbf800000,0x3f800000);
        *(uint *)(iVar7 + 0x2d22c50) = uVar3;
      }
      iVar5 = 0;
      piVar2 = piVar8;
      do {
        bVar1 = (byte)iVar5;
        iVar5 = iVar5 + 1;
        piVar2[0x1a] = (uint)((1 << (bVar1 & 0x1f) & uStack_40) != 0);
        piVar2 = piVar2 + 1;
      } while (iVar5 < 8);
      if (*(int *)(iVar7 + 0x2d22c40) != 0) {
        if (uStack_38 < 18000) {
          if (uStack_38 == 0) {
            *(uint *)(iVar7 + 0x2d22c58) = 0xffffffff;
            goto LAB_00582110;
          }
          if (uStack_38 == 9000) {
            *(uint *)(iVar7 + 0x2d22c54) = 1;
            goto LAB_00582110;
          }
        }
        else {
          if (uStack_38 < 0x4651) {
            *(uint *)(iVar7 + 0x2d22c58) = 1;
            goto LAB_00582110;
          }
          if ((26999 < uStack_38) && (uStack_38 < 0x6979)) {
            *(uint *)(iVar7 + 0x2d22c54) = 0xffffffff;
            goto LAB_00582110;
          }
        }
        *(uint *)(iVar7 + 0x2d22c58) = 0;
        *(uint *)(iVar7 + 0x2d22c54) = 0;
      }
    }
    else {
      *(uint *)(iVar7 + 0x2d22c28) = 0;
    }
  }
LAB_00582110:
  if (*(int *)(iVar7 + 0x2d22c7c) != *(int *)(iVar7 + 0x2d22c80)) {
    *(int *)(iVar7 + 0x2d22c54) = *(int *)(iVar7 + 0x2d22c7c);
  }
  if (*(int *)(iVar7 + 0x2d22c84) != *(int *)(iVar7 + 0x2d22c88)) {
    *(int *)(iVar7 + 0x2d22c58) = *(int *)(iVar7 + 0x2d22c84);
  }
  piVar2 = piVar8;
  do {
    if (piVar2[0x1a] != piVar2[0x22]) {
      piVar2[0xe] = piVar2[0x1a];
    }
    piVar2 = piVar2 + 1;
  } while (piVar2 != (int *)(iVar7 + 0x2d22c44));
  if ((*(int *)(iVar7 + 0x2d22c7c) == 0) && (*(int *)(iVar7 + 0x2d22c84) == 0)) {
    iVar6 = 0;
    iVar5 = *(int *)(iVar7 + 0x2d22c8c);
    piVar2 = piVar8;
    while (iVar5 == 0) {
      iVar6 = iVar6 + 1;
      if (7 < iVar6) goto LAB_00582177;
      iVar5 = piVar2[0x1b];
      piVar2 = piVar2 + 1;
    }
    *(uint *)(iVar7 + 0x2d22ccc) = 0;
LAB_00582177:
    iVar5 = 0;
    while (ABS((float)piVar8[8]) <= (float)_DAT_005d7efa) {
      iVar5 = iVar5 + 1;
      piVar8 = piVar8 + 1;
      if (3 < iVar5) {
        return;
      }
    }
  }
  *(uint *)(iVar7 + 0x2d22ccc) = 0;
  return;
}
