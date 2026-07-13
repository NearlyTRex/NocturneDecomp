// Name: FUN_0041f3d0
// Address: 0041f3d0
// Address Range: [[0041f3d0, 0041f5f3]]
// Convention: unknown
// Signature: void FUN_0041f3d0(int param_1,float param_2)

#include "nocturne.h"

void FUN_0041f3d0(int param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint local_e4 [12];
  byte local_b4 [48];
  uint local_84 [12];
  byte local_54 [48];
  byte local_24 [12];
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  bVar6 = 0;
  FUN_0041e5e0(param_1,param_2);
  if ((*(int *)(param_1 + 0x664) == 2) &&
     (param_2 = *(float *)(param_1 + 0x362c) - param_2, *(float *)(param_1 + 0x362c) = param_2,
     param_2 <= 0.0)) {
    iVar3 = FUN_0040de00(0,7,0,0,0);
    FUN_004501c0(param_1 + 0x668,&DAT_0076483c + iVar3 * 0x4c);
    local_c = FUN_0040dda0(0,0x3e19999a);
    *(uint *)(param_1 + 0x362c) = local_c;
  }
  if (*(int *)(param_1 + 0x664) != 3) {
    if (*(int *)(param_1 + 0x231c) == 0) {
      return;
    }
    FUN_0040a240(param_1,&local_18,param_1 + 0x3614);
    if ((uint *)(param_1 + 0x76c) != &local_18) {
      *(uint *)(param_1 + 0x76c) = local_18;
      *(uint *)(param_1 + 0x770) = local_14;
      *(uint *)(param_1 + 0x774) = local_10;
    }
    FUN_0055afb0(local_54,&DAT_02dd1184,param_1 + 0x3620);
    FUN_0055afb0(local_b4,&DAT_02dd1184,param_1 + 0x30);
    FUN_0055aa00(local_54,local_b4);
    puVar4 = local_e4;
    puVar5 = local_84;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    FUN_0055b180(local_84,local_24);
    FUN_0044d7a0(param_1 + 0x778,local_24);
    FUN_0050a970(0x01E57284,param_1 + 0x668);
    return;
  }
  iVar3 = param_1 + 0x3630;
  FUN_0044cd90(iVar3,param_1 + 0x20);
  uVar2 = FUN_0056488c();
  *(uint *)(param_1 + 0x366c) = uVar2 & 0x7fff;
  *(char *)(param_1 + 0x364c) = (char)((int)(uVar2 & 0x7fff) >> 10);
  FUN_0044cde0(iVar3,0x40000000);
  uVar1 = 0x01E57284;
  *(uint *)(param_1 + 0x3650) = 0;
  FUN_0050a9f0(uVar1,iVar3);
  return;
}
