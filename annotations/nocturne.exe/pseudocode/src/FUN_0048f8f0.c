// Name: FUN_0048f8f0
// Address: 0048f8f0
// Address Range: [[0048f8f0, 0048f9a9]]
// Convention: unknown
// Signature: void FUN_0048f8f0(int param_1,int param_2)

#include "nocturne.h"

void FUN_0048f8f0(int param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  byte local_30 [12];
  byte local_24 [12];
  uint *local_18;
  
  puVar4 = (uint *)(param_1 + 0x160 + param_2 * 0x34);
  local_18 = puVar4;
  puVar1 = (uint *)FUN_0048f9b0(param_1,local_30,0);
  if (puVar4 + 1 != puVar1) {
    puVar4[1] = *puVar1;
    puVar4[2] = puVar1[1];
    puVar4[3] = puVar1[2];
  }
  puVar4 = local_18 + 1;
  puVar1 = local_18 + 4;
  puVar5 = local_18 + 10;
  do {
    puVar2 = (uint *)FUN_0048f9b0(param_1,local_24,puVar4);
    if (puVar1 != puVar2) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
    }
    puVar4 = puVar4 + 3;
    puVar1 = puVar1 + 3;
  } while (puVar4 != puVar5);
  uVar3 = FUN_0040dda0(0,0x3f800000);
  *local_18 = uVar3;
  return;
}
