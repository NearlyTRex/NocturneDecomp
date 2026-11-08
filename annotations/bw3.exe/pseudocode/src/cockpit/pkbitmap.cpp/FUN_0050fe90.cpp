// Name: FUN_0050fe90
// Address: 0050fe90
// Address Range: [[0050fe90, 0050ff5c]]
// Convention: unknown
// Signature: void FUN_0050fe90(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050fe90(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int aiStack_2c [6];
  int iStack_14;
  
  puVar2 = (uint *)0x6036f8;
  piVar3 = aiStack_2c;
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(byte *)piVar3 = *(byte *)puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
    piVar3 = (uint *)((int)piVar3 + 1);
  }
  aiStack_2c[1] = *(uint *)(param_1 + 0x18);
  aiStack_2c[2] = *(uint *)(param_1 + 0x1c);
  aiStack_2c[3] = 0;
  aiStack_2c[4] = 0;
  aiStack_2c[5] = *(int *)(param_1 + 0x18) + -1;
  iStack_14 = *(int *)(param_1 + 0x1c) + -1;
  FUN_005a48e0(aiStack_2c,0x1c,1,param_2);
  FUN_005a48e0(*(uint *)(param_1 + 0x20),4,*(int *)(param_1 + 0x1c) + 1,param_2);
  FUN_005a48e0(*(uint *)(param_1 + 0x14),
               *(uint *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c) * 4),1,param_2);
  if ((*(byte *)(param_2 + 0xc) & 0x20) == 0) {
    return;
  }
  _DAT_01d71de0 = "..\\cockpit\\pkbitmap.cpp";
  _DAT_01d71de4 = 0x49e;
  FUN_004e4330("Error writing PBM");
  return;
}
