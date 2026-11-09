// Name: unkafter_winrun.cpp_FUN_005b3d70
// Address: 005b3d70
// Address Range: [[005b3d70, 005b417a]]
// Convention: unknown
// Signature: void unkafter_winrun_cpp_FUN_005b3d70(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_winrun_cpp_FUN_005b3d70(int param_1)

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
  piVar8 = (int *)(iVar7 + 0x2c9cf14);
  if ((*piVar8 == 0) || (*piVar8 == 4)) {
    return;
  }
  *(uint *)(iVar7 + 0x2c9cf70) = *(uint *)(iVar7 + 0x2c9cf6c);
  *(uint *)(iVar7 + 0x2c9cf78) = *(uint *)(iVar7 + 0x2c9cf74);
  puVar9 = (uint *)(iVar7 + 0x2c9cf7c);
  puVar10 = (uint *)(iVar7 + 0x2c9cf9c);
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
  if (_DAT_02c9cf0c == (code *)0x0) {
    memset(&jStack_24,0,0x10);
    MVar4 = joyGetPos(*(UINT *)(param_1 * 4 + 0x2c9d1c4),&jStack_24);
    if (MVar4 == 0) {
      param_1 = param_1 * 0x30;
      *(uint *)(iVar7 + 0x2c9cf18) = 1;
      uStack_14 = unkafter_winrun_cpp_FUN_005b3c90
                            (jStack_24.wXpos,param_1 + 0x2c9d1d4,0xbf800000,0x3f800000);
      *(uint *)(iVar7 + 0x2c9cf34) = uStack_14;
      uStack_14 = unkafter_winrun_cpp_FUN_005b3c90
                            (jStack_24.wYpos,param_1 + 0x2c9d1e0,0xbf800000,0x3f800000);
      *(uint *)(iVar7 + 0x2c9cf38) = uStack_14;
      if (*(int *)(iVar7 + 0x2c9cf28) != 0) {
        uVar3 = unkafter_winrun_cpp_FUN_005b3c90(jStack_24.wZpos,param_1 + 0x2c9d1ec,0,0x3f800000);
        *(uint *)(iVar7 + 0x2c9cf3c) = uVar3;
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
      *(uint *)(iVar7 + 0x2c9cf18) = 0;
    }
  }
  else {
    memset(&uStack_58,0,0x34);
    uStack_58 = 0x34;
    uStack_54 = 0x183;
    if (*(int *)(iVar7 + 0x2c9cf28) != 0) {
      uStack_54 = 0x187;
    }
    if (*(int *)(iVar7 + 0x2c9cf2c) != 0) {
      uStack_54 = uStack_54 | 8;
    }
    if (*(int *)(iVar7 + 0x2c9cf30) != 0) {
      uStack_54 = uStack_54 | 0x40;
    }
    iVar5 = (*_DAT_02c9cf0c)(*(uint *)(param_1 * 4 + 0x2c9d1c4),&uStack_58);
    if (iVar5 == 0) {
      iVar5 = param_1 * 0x30;
      *(uint *)(iVar7 + 0x2c9cf18) = 1;
      jStack_24.wZpos =
           unkafter_winrun_cpp_FUN_005b3c90(uStack_58,iVar5 + 0x2c9d1d4,0xbf800000,0x3f800000);
      *(UINT *)(iVar7 + 0x2c9cf34) = jStack_24.wZpos;
      jStack_24.wZpos =
           unkafter_winrun_cpp_FUN_005b3c90(uStack_54,iVar5 + 0x2c9d1e0,0xbf800000,0x3f800000);
      *(UINT *)(iVar7 + 0x2c9cf38) = jStack_24.wZpos;
      if (*(int *)(iVar7 + 0x2c9cf28) != 0) {
        jStack_24.wZpos = unkafter_winrun_cpp_FUN_005b3c90(uStack_50,iVar5 + 0x2c9d1ec,0,0x3f800000)
        ;
        *(UINT *)(iVar7 + 0x2c9cf3c) = jStack_24.wZpos;
      }
      if (*(int *)(iVar7 + 0x2c9cf2c) != 0) {
        uVar3 = unkafter_winrun_cpp_FUN_005b3c90
                          (uStack_4c,param_1 * 0x30 + 0x2c9d1f8,0xbf800000,0x3f800000);
        *(uint *)(iVar7 + 0x2c9cf40) = uVar3;
      }
      iVar5 = 0;
      piVar2 = piVar8;
      do {
        bVar1 = (byte)iVar5;
        iVar5 = iVar5 + 1;
        piVar2[0x1a] = (uint)((1 << (bVar1 & 0x1f) & uStack_40) != 0);
        piVar2 = piVar2 + 1;
      } while (iVar5 < 8);
      if (*(int *)(iVar7 + 0x2c9cf30) != 0) {
        if (uStack_38 < 18000) {
          if (uStack_38 == 0) {
            *(uint *)(iVar7 + 0x2c9cf48) = 0xffffffff;
            goto LAB_005b3f30;
          }
          if (uStack_38 == 9000) {
            *(uint *)(iVar7 + 0x2c9cf44) = 1;
            goto LAB_005b3f30;
          }
        }
        else {
          if (uStack_38 < 0x4651) {
            *(uint *)(iVar7 + 0x2c9cf48) = 1;
            goto LAB_005b3f30;
          }
          if ((26999 < uStack_38) && (uStack_38 < 0x6979)) {
            *(uint *)(iVar7 + 0x2c9cf44) = 0xffffffff;
            goto LAB_005b3f30;
          }
        }
        *(uint *)(iVar7 + 0x2c9cf48) = 0;
        *(uint *)(iVar7 + 0x2c9cf44) = 0;
      }
    }
    else {
      *(uint *)(iVar7 + 0x2c9cf18) = 0;
    }
  }
LAB_005b3f30:
  if (*(int *)(iVar7 + 0x2c9cf6c) != *(int *)(iVar7 + 0x2c9cf70)) {
    *(int *)(iVar7 + 0x2c9cf44) = *(int *)(iVar7 + 0x2c9cf6c);
  }
  if (*(int *)(iVar7 + 0x2c9cf74) != *(int *)(iVar7 + 0x2c9cf78)) {
    *(int *)(iVar7 + 0x2c9cf48) = *(int *)(iVar7 + 0x2c9cf74);
  }
  piVar2 = piVar8;
  do {
    if (piVar2[0x1a] != piVar2[0x22]) {
      piVar2[0xe] = piVar2[0x1a];
    }
    piVar2 = piVar2 + 1;
  } while (piVar2 != (int *)(iVar7 + 0x2c9cf34));
  if ((*(int *)(iVar7 + 0x2c9cf6c) == 0) && (*(int *)(iVar7 + 0x2c9cf74) == 0)) {
    iVar6 = 0;
    iVar5 = *(int *)(iVar7 + 0x2c9cf7c);
    piVar2 = piVar8;
    while (iVar5 == 0) {
      iVar6 = iVar6 + 1;
      if (7 < iVar6) goto LAB_005b3f97;
      iVar5 = piVar2[0x1b];
      piVar2 = piVar2 + 1;
    }
    *(uint *)(iVar7 + 0x2c9cfbc) = 0;
LAB_005b3f97:
    iVar5 = 0;
    while (ABS((float)piVar8[8]) <= (float)_DAT_005f9ecf) {
      iVar5 = iVar5 + 1;
      piVar8 = piVar8 + 1;
      if (3 < iVar5) {
        return;
      }
    }
  }
  *(uint *)(iVar7 + 0x2c9cfbc) = 0;
  return;
}
