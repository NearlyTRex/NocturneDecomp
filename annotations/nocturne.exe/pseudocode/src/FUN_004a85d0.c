// Name: FUN_004a85d0
// Address: 004a85d0
// Address Range: [[004a85d0, 004a8723]]
// Convention: unknown
// Signature: void FUN_004a85d0(int param_1,int param_2)

#include "nocturne.h"

void FUN_004a85d0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte local_1c [12];
  
  iVar4 = 0;
  FUN_0040a240(param_1,local_1c,param_2 + 0x1c);
  do {
    iVar4 = iVar4 + 1;
    FUN_0048ae90(0x01C08D04,local_1c,0,0x10000,0x8000,0,0xffff);
  } while (iVar4 < 3);
  iVar4 = param_1 + 0x150;
  iVar2 = FUN_004e1660(iVar4);
  if (*(int *)(iVar2 + 0x24) != 5) {
    FUN_004a8330(param_1,param_2);
    fVar1 = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
    *(float *)(param_1 + 0x2434) = fVar1;
    if (0.0 < fVar1) {
      iVar4 = FUN_00526c50(*(uint *)(param_1 + 0xbd64));
      if (iVar4 == 0) {
        uVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))
                          (param_1,"gargoyle-hurt?.wav");
        *(uint *)(param_1 + 0xbd64) = uVar3;
        FUN_00479f70(param_1,param_2);
        return;
      }
    }
    else {
      FUN_00527230(*(uint *)(param_1 + 0xbd64));
      *(uint *)(param_1 + 0x2434) = 0;
      iVar2 = FUN_004e1660(iVar4);
      if (*(int *)(iVar2 + 0x24) != 8) {
        FUN_004e16b0(iVar4,8,1);
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))
                  (param_1,"@gargoyle-shatter.wav" + 1);
        FUN_00427b60(param_1,0,0xbf800000,1);
      }
    }
    FUN_00479f70(param_1,param_2);
    return;
  }
  *(uint *)(param_2 + 4) = 0;
  FUN_00479f70(param_1,param_2);
  return;
}
