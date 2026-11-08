// Name: FUN_00437de0
// Address: 00437de0
// Address Range: [[00437de0, 00437ed4]]
// Convention: unknown
// Signature: void FUN_00437de0(int param_1,int param_2)

#include "nocturne.h"

void FUN_00437de0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  FUN_00551050(*(uint *)(param_1 + 0x10ba0));
  FUN_00551050(*(uint *)(param_1 + 0x10b98));
  FUN_00551050(*(uint *)(param_1 + 0x10b5c));
  fVar1 = *(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x25a8) = fVar1;
  if (0.0 < fVar1) {
    iVar2 = FUN_0040cfc0(0,2,1);
    FUN_00503620(param_1 + 0x2b4,iVar2 + 7);
    iVar2 = FUN_00550b70(*(uint *)(param_1 + 0x10b9c));
    if (iVar2 == 0) {
      uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"batman-hurt?.wav");
      *(uint *)(param_1 + 0x10b9c) = uVar3;
    }
  }
  else {
    *(uint *)(param_1 + 0x25a8) = 0x3f800000;
    FUN_00438060(param_1);
    iVar2 = FUN_00550b70(*(uint *)(param_1 + 0x10b9c));
    if (iVar2 == 0) {
      uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"batman-die.wav");
      *(uint *)(param_1 + 0x10b9c) = uVar3;
    }
  }
  *(uint *)(param_2 + 8) = 0;
  FUN_00488890(param_1,param_2);
  return;
}
