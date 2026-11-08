// Name: FUN_00492d10
// Address: 00492d10
// Address Range: [[00492d10, 00492e92]]
// Convention: unknown
// Signature: void FUN_00492d10(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00492d10(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x2e0) == 0) {
    if (*(int *)(param_1 + 0x538) != 0) {
      FUN_00447c50(0x01511CAC,0);
      FUN_00551050(*(uint *)(param_1 + 0x53c));
      uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,0x5d5310);
      *(uint *)(param_1 + 0x53c) = uVar3;
    }
  }
  else {
    fVar1 = param_2 * _DAT_005d531d;
    *(float *)(*(int *)(param_1 + 0x2b4) + 0x38) =
         *(float *)(*(int *)(param_1 + 0x2b4) + 0x38) - fVar1;
    *(float *)(param_1 + 0x534) = *(float *)(param_1 + 0x534) - fVar1;
    if (*(int *)(param_1 + 0x538) == 0) {
      iVar2 = FUN_0040c8f0(*(uint *)(param_1 + 0x2b4),_DAT_01c3de74);
      if (iVar2 == 0) {
        _DAT_01d046a0 = "..\\core\\filmreel.cpp";
        _DAT_01d046a4 = 0x11d;
        FUN_004e4500("CFilmProjector::Need to put CFilmReel in place");
      }
      FUN_00447c50(0x01511CAC,iVar2 + 0x434);
      FUN_00551050(*(uint *)(param_1 + 0x53c));
      uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"35-start.wav");
      *(uint *)(param_1 + 0x53c) = uVar3;
    }
    else {
      iVar2 = FUN_00550b70(*(uint *)(param_1 + 0x53c));
      if (iVar2 == 0) {
        uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"35-loop.wav");
        *(uint *)(param_1 + 0x53c) = uVar3;
      }
    }
    if (*(int *)(param_1 + 0x4cc) == *(int *)(param_1 + 0x2b4)) {
      FUN_004894f0(0x01C38BC0,param_1 + 0x4d0);
    }
  }
  *(uint *)(param_1 + 0x538) = *(uint *)(param_1 + 0x2e0);
  FUN_00447140(param_1,param_2);
  return;
}
