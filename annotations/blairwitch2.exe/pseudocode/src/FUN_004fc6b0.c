// Name: FUN_004fc6b0
// Address: 004fc6b0
// Address Range: [[004fc6b0, 004fc73b]]
// Convention: unknown
// Signature: void FUN_004fc6b0(int *param_1,int param_2)

#include "nocturne.h"

void FUN_004fc6b0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == *param_1) {
    return;
  }
  *param_1 = param_2;
  FUN_0052c0e0(0x01E661B8,param_1 + param_2 * 0x40 + 2);
  FUN_004fc4c0(param_1);
  if (param_1[0x514] != *param_1) {
    FUN_004fc350(param_1);
  }
  iVar3 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(0x01E661B8 + 0x14d164); iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(iVar3 + 0x14d168 + 0x01E661B8);
    iVar3 = iVar3 + 4;
    (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x58))(iVar1);
  }
  FUN_004bfa70(0x01CB6900);
  return;
}
