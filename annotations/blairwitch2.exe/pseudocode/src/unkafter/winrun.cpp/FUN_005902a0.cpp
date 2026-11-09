// Name: unkafter_winrun.cpp_FUN_005902a0
// Address: 005902a0
// Address Range: [[005902a0, 00590631]]
// Convention: unknown
// Signature: void unkafter_winrun_cpp_FUN_005902a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_winrun_cpp_FUN_005902a0(int param_1)

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
  joyinfo_tag jStack_24;
  uint uStack_14;
  
  iVar7 = param_1 * 0xac;
  piVar8 = (int *)(iVar7 + 0x26656c4);
  if ((*piVar8 == 0) || (*piVar8 == 4)) {
    return;
  }
  *(uint *)(iVar7 + 0x2665720) = *(uint *)(iVar7 + 0x266571c);
  *(uint *)(iVar7 + 0x2665728) = *(uint *)(iVar7 + 0x2665724);
  puVar9 = (uint *)(iVar7 + 0x266572c);
  puVar10 = (uint *)(iVar7 + 0x266574c);
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
  if (_DAT_026656bc == (code *)0x0) {
    memset(&jStack_24,0,0x10);
    MVar4 = joyGetPos(*(UINT *)(param_1 * 4 + 0x2665974),&jStack_24);
    if (MVar4 == 0) {
      param_1 = param_1 * 0x30;
      *(uint *)(iVar7 + 0x26656c8) = 1;
      uStack_14 = unkafter_winrun_cpp_FUN_005901c0
                            (jStack_24.wXpos,param_1 + 0x2665984,0xbf800000,0x3f800000);
      *(uint *)(iVar7 + 0x26656e4) = uStack_14;
      uStack_14 = unkafter_winrun_cpp_FUN_005901c0
                            (jStack_24.wYpos,param_1 + 0x2665990,0xbf800000,0x3f800000);
      *(uint *)(iVar7 + 0x26656e8) = uStack_14;
      if (*(int *)(iVar7 + 0x26656d8) != 0) {
        uVar3 = unkafter_winrun_cpp_FUN_005901c0(jStack_24.wZpos,param_1 + 0x266599c,0,0x3f800000);
        *(uint *)(iVar7 + 0x26656ec) = uVar3;
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
      *(uint *)(iVar7 + 0x26656c8) = 0;
    }
  }
  else {
    memset(&uStack_58,0,0x34);
    uStack_58 = 0x34;
    uStack_54 = 0x183;
    if (*(int *)(iVar7 + 0x26656d8) != 0) {
      uStack_54 = 0x187;
    }
    if (*(int *)(iVar7 + 0x26656dc) != 0) {
      uStack_54 = uStack_54 | 8;
    }
    if (*(int *)(iVar7 + 0x26656e0) != 0) {
      uStack_54 = uStack_54 | 0x40;
    }
    iVar5 = (*_DAT_026656bc)(*(uint *)(param_1 * 4 + 0x2665974),&uStack_58);
    if (iVar5 == 0) {
      iVar5 = param_1 * 0x30;
      *(uint *)(iVar7 + 0x26656c8) = 1;
      jStack_24.wZpos =
           unkafter_winrun_cpp_FUN_005901c0(uStack_58,iVar5 + 0x2665984,0xbf800000,0x3f800000);
      *(UINT *)(iVar7 + 0x26656e4) = jStack_24.wZpos;
      jStack_24.wZpos =
           unkafter_winrun_cpp_FUN_005901c0(uStack_54,iVar5 + 0x2665990,0xbf800000,0x3f800000);
      *(UINT *)(iVar7 + 0x26656e8) = jStack_24.wZpos;
      if (*(int *)(iVar7 + 0x26656d8) != 0) {
        jStack_24.wZpos = unkafter_winrun_cpp_FUN_005901c0(uStack_50,iVar5 + 0x266599c,0,0x3f800000)
        ;
        *(UINT *)(iVar7 + 0x26656ec) = jStack_24.wZpos;
      }
      if (*(int *)(iVar7 + 0x26656dc) != 0) {
        uVar3 = unkafter_winrun_cpp_FUN_005901c0
                          (uStack_4c,param_1 * 0x30 + 0x26659a8,0xbf800000,0x3f800000);
        *(uint *)(iVar7 + 0x26656f0) = uVar3;
      }
      iVar5 = 0;
      piVar2 = piVar8;
      do {
        bVar1 = (byte)iVar5;
        iVar5 = iVar5 + 1;
        piVar2[0x1a] = (uint)((1 << (bVar1 & 0x1f) & uStack_40) != 0);
        piVar2 = piVar2 + 1;
      } while (iVar5 < 8);
    }
    else {
      *(uint *)(iVar7 + 0x26656c8) = 0;
    }
  }
  if (*(int *)(iVar7 + 0x266571c) != *(int *)(iVar7 + 0x2665720)) {
    *(int *)(iVar7 + 0x26656f4) = *(int *)(iVar7 + 0x266571c);
  }
  if (*(int *)(iVar7 + 0x2665724) != *(int *)(iVar7 + 0x2665728)) {
    *(int *)(iVar7 + 0x26656f8) = *(int *)(iVar7 + 0x2665724);
  }
  piVar2 = piVar8;
  do {
    if (piVar2[0x1a] != piVar2[0x22]) {
      piVar2[0xe] = piVar2[0x1a];
    }
    piVar2 = piVar2 + 1;
  } while (piVar2 != (int *)(iVar7 + 0x26656e4));
  if ((*(int *)(iVar7 + 0x266571c) == 0) && (*(int *)(iVar7 + 0x2665724) == 0)) {
    iVar6 = 0;
    iVar5 = *(int *)(iVar7 + 0x266572c);
    piVar2 = piVar8;
    while (iVar5 == 0) {
      iVar6 = iVar6 + 1;
      if (7 < iVar6) goto LAB_00590497;
      iVar5 = piVar2[0x1b];
      piVar2 = piVar2 + 1;
    }
    *(uint *)(iVar7 + 0x266576c) = 0;
LAB_00590497:
    iVar5 = 0;
    while (ABS((float)piVar8[8]) <= (float)_DAT_005eeafd) {
      iVar5 = iVar5 + 1;
      piVar8 = piVar8 + 1;
      if (3 < iVar5) {
        return;
      }
    }
  }
  *(uint *)(iVar7 + 0x266576c) = 0;
  return;
}
