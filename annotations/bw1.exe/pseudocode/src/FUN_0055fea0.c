// Name: FUN_0055fea0
// Address: 0055fea0
// Address Range: [[0055fea0, 005600fa]]
// Convention: unknown
// Signature: void FUN_0055fea0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055fea0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  byte bVar3;
  float afStackY_100c [1010];
  uint uVar4;
  uint uStack_24;
  uint uStack_18;
  float fStack_10;
  int iStack_c;
  
  bVar3 = 0;
  iVar2 = *(int *)(param_2 + 0x30);
  if (((((iVar2 == 100) || (iVar2 == 0x65)) || (iVar2 == 0x66)) ||
      ((iVar2 == 0x67 || (iVar2 == 0x68)))) ||
     ((iVar2 == 0x69 || ((iVar2 == 0x6a || (iVar2 == 0x6b)))))) {
    FUN_004a1b70(0x01C51D80,"ShotShadowWithLead");
    *(uint *)(param_2 + 4) = 0;
  }
  else {
    FUN_00573a80(*(uint *)(param_1 + 0xc2a0));
    FUN_00573a80(*(uint *)(param_1 + 0xc29c));
    FUN_00573a80(*(uint *)(param_1 + 0xc2a0));
    FUN_00573a80(*(uint *)(param_1 + 0xc2a4));
    FUN_00573a80(*(uint *)(param_1 + 0xc2a8));
    if (*(int *)(param_2 + 0x30) == 0x6c) {
      FUN_0055f4f0(param_1);
      FUN_00408b40(param_1,param_2 + 0x1c);
    }
    iStack_c = param_1 + 0x158;
    fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
    *(float *)(param_1 + 0x2538) = fVar1;
    if (0.0 < fVar1) {
      iVar2 = FUN_00524770(iStack_c);
      iVar2 = *(int *)(iVar2 + 0x24);
      if ((((iVar2 == 0) || (iVar2 == 5)) || (iVar2 == 0xc)) || ((iVar2 == 6 || (iVar2 == 7)))) {
        iVar2 = FUN_0040cc60(0,2);
        if (iVar2 == 0) {
          FUN_005247c0(param_1 + 0x158,0x13,1);
        }
        if (iVar2 == 1) {
          FUN_005247c0(param_1 + 0x158,0x14,1);
        }
        if (iVar2 == 2) {
          FUN_005247c0(param_1 + 0x158,0x15,1);
        }
      }
      FUN_0055f4f0(param_1);
      FUN_004a0f00(param_1,param_2);
      return;
    }
    *(uint *)(param_1 + 0x2538) = 0;
    iVar2 = FUN_00524770(iStack_c);
    iVar2 = *(int *)(iVar2 + 0x24);
    if (((iVar2 != 0x11) && (iVar2 != 0xf)) && ((iVar2 != 0x12 && (iVar2 != 0x10)))) {
      FUN_00408bb0(param_1,*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x20);
      uStack_18 = uStack_24;
      *(uint *)(&stack0xffffffec + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffe0 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xfffffff0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffe4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      if (fStack_10 <= 0.0) {
        uVar4 = 0x10;
      }
      else {
        uVar4 = 0xf;
      }
      FUN_005247c0(iStack_c,uVar4,1);
      FUN_0055f540(param_1);
      FUN_004a1b70(0x01C51D80,"ShadowDead");
    }
    FUN_004a0f00(param_1,param_2);
  }
  return;
}
