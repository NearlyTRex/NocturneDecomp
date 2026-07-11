// Name: FUN_004e3130
// Address: 004e3130
// Address Range: [[004e3130, 004e31ea]]
// Convention: unknown
// Signature: void FUN_004e3130(undefined4 param_1,int *param_2)

#include "nocturne.h"

void FUN_004e3130(uint param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = (uint *)*param_2;
  uVar2 = FUN_004e29d0(param_1);
  *puVar1 = uVar2;
  iVar3 = FUN_004e2ac0(param_1,2);
  puVar1[1] = 4 - iVar3;
  iVar3 = FUN_004e29d0(param_1);
  puVar1[2] = (uint)(iVar3 == 0);
  uVar2 = FUN_004e2ac0(param_1,4);
  puVar1[3] = uVar2;
  uVar2 = FUN_004e2ac0(param_1,2);
  puVar1[4] = uVar2;
  uVar2 = FUN_004e29d0(param_1);
  puVar1[5] = uVar2;
  uVar2 = FUN_004e29d0(param_1);
  puVar1[6] = uVar2;
  uVar2 = FUN_004e2ac0(param_1,2);
  puVar1[7] = uVar2;
  uVar2 = FUN_004e2ac0(param_1,2);
  puVar1[8] = uVar2;
  uVar2 = FUN_004e29d0(param_1);
  puVar1[9] = uVar2;
  uVar2 = FUN_004e29d0(param_1);
  puVar1[10] = uVar2;
  uVar2 = FUN_004e2ac0(param_1,2);
  puVar1[0xb] = uVar2;
  return;
}
