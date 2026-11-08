// Name: FUN_005996d0
// Address: 005996d0
// Address Range: [[005996d0, 005998e6]]
// Convention: unknown
// Signature: void FUN_005996d0(int param_1,int param_2)

#include "nocturne.h"

void FUN_005996d0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  
  FUN_00599400(param_1,param_2);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x100))(param_1);
  *(float *)(param_1 + 0x25a8) = *(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4);
  if (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10bcc) * 4) == 0) {
    *(uint *)(param_1 + 0x25a8) = 0;
  }
  *(uint *)(param_1 + 0x10a74) = 0x3f99999a;
  if (0.0 < *(float *)(param_1 + 0x25a8)) {
    FUN_00503620(param_1 + 0x2b4,4,1);
    if (*(float *)(param_1 + 0x10bd0) <= 0.0) {
      *(uint *)(param_1 + 0x10bd0) = 0x40000000;
      iVar1 = FUN_00550b70(*(uint *)(param_1 + 0x10bd8));
      if (iVar1 == 0) {
        if (*(int *)(param_1 + 0x10b84) != 0) {
          uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))
                            (param_1,"f-zombie-hit?.wav");
          *(uint *)(param_1 + 0x10bd8) = uVar3;
          FUN_00488890(param_1,param_2);
          return;
        }
        uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"zom-s0?.wav");
        *(uint *)(param_1 + 0x10bd8) = uVar3;
        FUN_00488890(param_1,param_2);
        return;
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x25a8) = 0;
    iVar1 = FUN_005035c0(param_1 + 0x2b4);
    if ((*(int *)(iVar1 + 0x24) != 8) && (*(int *)(iVar1 + 0x24) != 7)) {
      FUN_00598f20(param_1);
      uVar3 = 6;
      if ((*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10bcc) * 4) == 0) &&
         ((*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10bbc) * 4) != 0 ||
          (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10bb4) * 4) != 0)))) {
        uVar2 = FUN_00503860(param_1 + 0x2b4,"@lookForHead" + 1,0);
        iVar1 = FUN_00502f10(uVar2);
        if (-1 < iVar1) {
          uVar3 = 9;
        }
      }
      FUN_00503620(param_1 + 0x2b4,uVar3,1);
      FUN_00551050(*(uint *)(param_1 + 0x10bd8));
      if (*(int *)(param_1 + 0x10b84) == 0) {
        pcVar4 = "zom-d0?.wav";
      }
      else {
        pcVar4 = "f-zombie-die?.wav";
      }
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,pcVar4);
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0xb0))(param_1,0x32,0x41c80000);
    }
  }
  FUN_00488890(param_1,param_2);
  return;
}
