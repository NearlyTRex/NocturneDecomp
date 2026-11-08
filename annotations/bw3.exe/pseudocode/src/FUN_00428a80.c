// Name: FUN_00428a80
// Address: 00428a80
// Address Range: [[00428a80, 00428c9a]]
// Convention: unknown
// Signature: void FUN_00428a80(int param_1,int param_2)

#include "nocturne.h"

void FUN_00428a80(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  if (*(int *)(param_1 + 0x27b0) != 0) {
    FUN_0048c150(0x01C6E360,"@ShotInvulnerable" + 1);
    return;
  }
  FUN_00428810(param_1,param_2);
  (**(code **)(*(int *)(param_1 + 0x154) + 0xf8))(param_1);
  *(float *)(param_1 + 0x2538) = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd0bc) * 4) == 0) {
    *(uint *)(param_1 + 0x2538) = 0;
  }
  *(uint *)(param_1 + 0xcde0) = 0x3f99999a;
  if (0.0 < *(float *)(param_1 + 0x2538)) {
    iVar1 = FUN_0040cea0(0,5);
    FUN_004fc0d0(param_1 + 0x158,iVar1 + 0xd,1);
    if (*(float *)(param_1 + 0xd0c0) <= 0.0) {
      *(uint *)(param_1 + 0xd0c0) = 0x40000000;
      iVar1 = FUN_00556700(*(uint *)(param_1 + 0xd0c8));
      if (iVar1 == 0) {
        if (*(int *)(param_1 + 0xd074) != 0) {
          uVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"demn_taunt?_???.wav")
          ;
          *(uint *)(param_1 + 0xd0c8) = uVar2;
          FUN_00489b80(param_1,param_2);
          return;
        }
        uVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"demn_taunt_???.wav");
        *(uint *)(param_1 + 0xd0c8) = uVar2;
        FUN_00489b80(param_1,param_2);
        return;
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x2538) = 0;
    iVar1 = FUN_004fc070(param_1 + 0x158);
    iVar1 = *(int *)(iVar1 + 0x24);
    if (((iVar1 == 0x16) || (iVar1 == 0x13)) && ((iVar1 == 0x17 || (iVar1 == 0x14)))) {
      if (iVar1 == 0x18) goto LAB_00428b93;
      if (iVar1 == 0x15) {
        FUN_00489b80(param_1,param_2);
        return;
      }
    }
    FUN_00428600(param_1);
    iVar1 = FUN_0040cea0(0,2);
    FUN_004fc0d0(param_1 + 0x158,iVar1 + 0x13,1);
    FUN_00556be0(*(uint *)(param_1 + 0xd0c8));
    if (*(int *)(param_1 + 0xd074) == 0) {
      pcVar3 = "demn_die_???.wav";
    }
    else {
      pcVar3 = "demn_die_???.wav";
    }
    (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,pcVar3);
    (**(code **)(*(int *)(param_1 + 0x154) + 0xa8))(param_1,0x32,0x41c80000);
  }
LAB_00428b93:
  FUN_00489b80(param_1,param_2);
  return;
}
