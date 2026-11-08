// Name: FUN_00458950
// Address: 00458950
// Address Range: [[00458950, 00458b91]]
// Convention: unknown
// Signature: void FUN_00458950(int param_1,int param_2)

#include "nocturne.h"

void FUN_00458950(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  if (*(int *)(param_1 + 0x27b0) == 0) {
    FUN_00458680(param_1,param_2);
    (**(code **)(*(int *)(param_1 + 0x154) + 0xf8))(param_1);
    *(float *)(param_1 + 0x2538) = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
    if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd12c) * 4) == 0) {
      *(uint *)(param_1 + 0x2538) = 0;
    }
    *(uint *)(param_1 + 0xcde0) = 0x3f99999a;
    if (0.0 < *(float *)(param_1 + 0x2538)) {
      iVar1 = FUN_0040cea0(0,3);
      iVar1 = iVar1 + 0xe;
      if (iVar1 == 0x11) {
        iVar2 = FUN_0040cea0(0,4);
        if (iVar2 != 1) {
          iVar1 = 0xe;
        }
      }
      FUN_004fc0d0(param_1 + 0x158,iVar1,1);
      if (*(float *)(param_1 + 0xd130) <= 0.0) {
        *(uint *)(param_1 + 0xd130) = 0x40000000;
        iVar1 = FUN_00556700(*(uint *)(param_1 + 0xd138));
        if (iVar1 == 0) {
          if (*(int *)(param_1 + 0xd0e4) != 0) {
            uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                              (param_1,"demn_taunt?_???.wav");
            *(uint *)(param_1 + 0xd138) = uVar3;
            FUN_00489b80(param_1,param_2);
            return;
          }
          uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"demn_taunt_???.wav")
          ;
          *(uint *)(param_1 + 0xd138) = uVar3;
          FUN_00489b80(param_1,param_2);
          return;
        }
      }
    }
    else {
      *(uint *)(param_1 + 0x2538) = 0;
      iVar1 = FUN_004fc070(param_1 + 0x158);
      if ((*(int *)(iVar1 + 0x24) != 0x19) && (*(int *)(iVar1 + 0x24) != 0x18)) {
        FUN_00458180(param_1);
        iVar1 = FUN_0040cea0(0,4);
        iVar1 = iVar1 + 0x13;
        if ((*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd12c) * 4) == 0) &&
           (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd128) * 4) != 0)) {
          iVar1 = 0x1e;
        }
        iVar2 = FUN_005a3260(param_1 + 0x24a8,"D_SHERIFF.dfm");
        if (iVar2 == 0) {
          iVar1 = 0x17;
        }
        FUN_004fc0d0(param_1 + 0x158,iVar1,1);
        FUN_00556be0(*(uint *)(param_1 + 0xd138));
        if (*(int *)(param_1 + 0xd0e4) == 0) {
          pcVar4 = "demn_die_???.wav";
        }
        else {
          pcVar4 = "demn_die_???.wav";
        }
        (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,pcVar4);
      }
    }
    FUN_00489b80(param_1,param_2);
  }
  else {
    FUN_0048c150(0x01C6E360,"@ShotInvulnerable" + 1);
  }
  return;
}
