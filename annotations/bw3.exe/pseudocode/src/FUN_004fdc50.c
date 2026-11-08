// Name: FUN_004fdc50
// Address: 004fdc50
// Address Range: [[004fdc50, 004fdd0a]]
// Convention: unknown
// Signature: void FUN_004fdc50(undefined4 param_1,int *param_2)

#include "nocturne.h"

void FUN_004fdc50(uint param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = (uint *)*param_2;
  uVar2 = FUN_004fd4f0(param_1);
  *puVar1 = uVar2;
  iVar3 = FUN_004fd5e0(param_1,2);
  puVar1[1] = 4 - iVar3;
  iVar3 = FUN_004fd4f0(param_1);
  puVar1[2] = (uint)(iVar3 == 0);
  uVar2 = FUN_004fd5e0(param_1,4);
  puVar1[3] = uVar2;
  uVar2 = FUN_004fd5e0(param_1,2);
  puVar1[4] = uVar2;
  uVar2 = FUN_004fd4f0(param_1);
  puVar1[5] = uVar2;
  uVar2 = FUN_004fd4f0(param_1);
  puVar1[6] = uVar2;
  uVar2 = FUN_004fd5e0(param_1,2);
  puVar1[7] = uVar2;
  uVar2 = FUN_004fd5e0(param_1,2);
  puVar1[8] = uVar2;
  uVar2 = FUN_004fd4f0(param_1);
  puVar1[9] = uVar2;
  uVar2 = FUN_004fd4f0(param_1);
  puVar1[10] = uVar2;
  uVar2 = FUN_004fd5e0(param_1,2);
  puVar1[0xb] = uVar2;
  return;
}
