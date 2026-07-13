// Name: FUN_00561fc0
// Address: 00561fc0
// Address Range: [[00561fc0, 005621d6]]
// Convention: unknown
// Signature: void FUN_00561fc0(int param_1,int param_2)

#include "nocturne.h"

void FUN_00561fc0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  
  FUN_00561cf0(param_1,param_2);
  (**(code **)(*(int *)(param_1 + 0x14c) + 0xf0))(param_1);
  *(float *)(param_1 + 0x2434) = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
  if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbdf8) * 4) == 0) {
    *(uint *)(param_1 + 0x2434) = 0;
  }
  *(uint *)(param_1 + 0xbca0) = 0x3f99999a;
  if (0.0 < *(float *)(param_1 + 0x2434)) {
    FUN_004e16b0(param_1 + 0x150,4,1);
    if (*(float *)(param_1 + 0xbdfc) <= 0.0) {
      *(uint *)(param_1 + 0xbdfc) = 0x40000000;
      iVar1 = FUN_00526c50(*(uint *)(param_1 + 0xbe04));
      if (iVar1 == 0) {
        if (*(int *)(param_1 + 0xbdb0) != 0) {
          uVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))
                            (param_1,"f-zombie-hit?.wav");
          *(uint *)(param_1 + 0xbe04) = uVar3;
          FUN_00479f70(param_1,param_2);
          return;
        }
        uVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"zom-s0?.wav");
        *(uint *)(param_1 + 0xbe04) = uVar3;
        FUN_00479f70(param_1,param_2);
        return;
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x2434) = 0;
    iVar1 = FUN_004e1660(param_1 + 0x150);
    if ((*(int *)(iVar1 + 0x24) != 8) && (*(int *)(iVar1 + 0x24) != 7)) {
      FUN_005618c0(param_1);
      uVar3 = 6;
      if ((*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbdf8) * 4) == 0) &&
         ((*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbde8) * 4) != 0 ||
          (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbde0) * 4) != 0)))) {
        uVar2 = FUN_004e1890(param_1 + 0x150,"@lookForHead" + 1,0);
        iVar1 = FUN_004e1010(uVar2);
        if (-1 < iVar1) {
          uVar3 = 9;
        }
      }
      FUN_004e16b0(param_1 + 0x150,uVar3,1);
      FUN_00527230(*(uint *)(param_1 + 0xbe04));
      if (*(int *)(param_1 + 0xbdb0) == 0) {
        pcVar4 = "zom-d0?.wav";
      }
      else {
        pcVar4 = "f-zombie-die?.wav";
      }
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,pcVar4);
      (**(code **)(*(int *)(param_1 + 0x14c) + 0xa0))(param_1,0x32,0x41c80000);
    }
  }
  FUN_00479f70(param_1,param_2);
  return;
}
