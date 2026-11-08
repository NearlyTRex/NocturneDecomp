// Name: FUN_00443f00
// Address: 00443f00
// Address Range: [[00443f00, 0044400c]]
// Convention: unknown
// Signature: void FUN_00443f00(int param_1,int param_2)

#include "nocturne.h"

void FUN_00443f00(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  FUN_00556be0(*(uint *)(param_1 + 0xd108));
  FUN_00556be0(*(uint *)(param_1 + 0xd100));
  FUN_00556be0(*(uint *)(param_1 + 0xd0f0));
  iVar3 = param_1 + 0x158;
  iVar2 = FUN_004fc070(iVar3);
  if (*(int *)(iVar2 + 0x24) != 0xc) {
    if (*(int *)(param_1 + 0xd844) != 1) {
      fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
      *(float *)(param_1 + 0x2538) = fVar1;
      if (fVar1 <= 0.0) {
        *(uint *)(param_1 + 0x2538) = 0x3f800000;
        uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"stick-leaps.wav");
        *(uint *)(param_1 + 0xd10c) = uVar4;
        FUN_00444110(param_1);
      }
      else {
        iVar2 = FUN_0040cea0(0,2,1);
        FUN_004fc0d0(iVar3,iVar2 + 7);
        iVar3 = FUN_00556700(*(uint *)(param_1 + 0xd104));
        if (iVar3 == 0) {
          uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                            (param_1,"stick-hurt_growl.wav");
          *(uint *)(param_1 + 0xd104) = uVar4;
        }
      }
      *(uint *)(param_2 + 8) = 0;
      FUN_00489b80(param_1,param_2);
    }
    return;
  }
  FUN_004fc0d0(iVar3,0xe,1);
  return;
}
