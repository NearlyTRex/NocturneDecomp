// Name: FUN_004459b0
// Address: 004459b0
// Address Range: [[004459b0, 00445a63]]
// Convention: unknown
// Signature: void FUN_004459b0(int param_1,int param_2)

#include "nocturne.h"

void FUN_004459b0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  FUN_00445730(param_1,param_2);
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x2538) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2538) = 0;
    iVar2 = FUN_004fc070(param_1 + 0x158);
    if ((*(int *)(iVar2 + 0x24) == 5) || (*(int *)(iVar2 + 0x24) == 4)) goto LAB_004459f0;
    uVar3 = 4;
  }
  else {
    uVar3 = 3;
  }
  FUN_004fc0d0(param_1 + 0x158,uVar3,1);
LAB_004459f0:
  iVar2 = FUN_00560af0(0x02CF5680,*(uint *)(param_1 + 0xd05c));
  if (iVar2 != 0) {
    FUN_00489b80(param_1,param_2);
    return;
  }
  uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"cow?.wav");
  *(uint *)(param_1 + 0xd05c) = uVar3;
  FUN_00489b80(param_1,param_2);
  return;
}
