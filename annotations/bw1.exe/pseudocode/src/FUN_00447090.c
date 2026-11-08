// Name: FUN_00447090
// Address: 00447090
// Address Range: [[00447090, 00447192]]
// Convention: unknown
// Signature: void FUN_00447090(int param_1,int param_2)

#include "nocturne.h"

void FUN_00447090(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  FUN_00573a80(*(uint *)(param_1 + 0xc31c));
  FUN_00573a80(*(uint *)(param_1 + 0xc314));
  FUN_00573a80(*(uint *)(param_1 + 0xc304));
  iVar3 = param_1 + 0x158;
  iVar2 = FUN_00524770(iVar3);
  if (*(int *)(iVar2 + 0x24) != 0xc) {
    fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
    *(float *)(param_1 + 0x2538) = fVar1;
    if (fVar1 <= 0.0) {
      *(uint *)(param_1 + 0x2538) = 0x3f800000;
      uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"stick-leaps.wav");
      *(uint *)(param_1 + 0xc320) = uVar4;
      FUN_004472a0(param_1);
    }
    else {
      iVar2 = FUN_0040cc60(0,2,1);
      FUN_005247c0(iVar3,iVar2 + 7);
      iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc318));
      if (iVar3 == 0) {
        uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                          (param_1,"stick-hurt_growl.wav");
        *(uint *)(param_1 + 0xc318) = uVar4;
      }
    }
    *(uint *)(param_2 + 8) = 0;
    FUN_004a0f00(param_1,param_2);
    return;
  }
  FUN_005247c0(iVar3,0xe,1);
  return;
}
