// Name: FUN_00482010
// Address: 00482010
// Address Range: [[00482010, 0048219c]]
// Convention: unknown
// Signature: void FUN_00482010(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00482010(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x17c) == 0) {
    if (*(int *)(param_1 + 0x3d4) != 0) {
      FUN_0044c310(0x014B98EC,0);
      FUN_00527230(*(uint *)(param_1 + 0x3d8));
      uVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"35-end.wav");
      *(uint *)(param_1 + 0x3d8) = uVar3;
    }
  }
  else {
    fVar1 = (float)_DAT_0058104b;
    *(float *)(*(int *)(param_1 + 0x150) + 0x38) =
         *(float *)(*(int *)(param_1 + 0x150) + 0x38) - param_2 * fVar1;
    *(float *)(param_1 + 0x3d0) = *(float *)(param_1 + 0x3d0) - param_2 * fVar1;
    if (*(int *)(param_1 + 0x3d4) == 0) {
      iVar2 = FUN_0040d890(*(uint *)(param_1 + 0x150),_DAT_01c08cc4);
      if (iVar2 == 0) {
        _DAT_01cc4800 = "..\\core\\filmreel.cpp";
        _DAT_01cc4804 = 0x11e;
        FUN_004c8440("CFilmProjector::Need to put CFilmReel in place");
      }
      FUN_0044c310(0x014B98EC,iVar2 + 0x2d0);
      FUN_00527230(*(uint *)(param_1 + 0x3d8));
      uVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"35-start.wav");
      *(uint *)(param_1 + 0x3d8) = uVar3;
    }
    else {
      iVar2 = FUN_00526c50(*(uint *)(param_1 + 0x3d8));
      if (iVar2 == 0) {
        uVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"35-loop.wav");
        *(uint *)(param_1 + 0x3d8) = uVar3;
      }
    }
    if (*(int *)(param_1 + 0x368) == *(int *)(param_1 + 0x150)) {
      FUN_0047ab70(0x01C03A10,param_1 + 0x36c);
    }
  }
  *(uint *)(param_1 + 0x3d4) = *(uint *)(param_1 + 0x17c);
  FUN_0044b850(param_1,param_2);
  return;
}
