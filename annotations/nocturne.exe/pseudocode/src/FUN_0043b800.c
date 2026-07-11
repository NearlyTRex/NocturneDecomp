// Name: FUN_0043b800
// Address: 0043b800
// Address Range: [[0043b800, 0043b884]]
// Convention: unknown
// Signature: void FUN_0043b800(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

#include "nocturne.h"

void FUN_0043b800(uint param_1,uint param_2,uint param_3,uint *param_4)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  byte bVar4;
  uint local_88 [12];
  uint local_58 [12];
  byte local_28 [16];
  byte local_18 [12];
  
  bVar4 = 0;
  FUN_0043b890(param_1,param_2,param_3,local_28);
  FUN_0055ced0(local_28,local_18);
  puVar1 = local_58;
  puVar3 = local_88;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  puVar1 = (uint *)FUN_0055b180(local_88);
  if (param_4 == puVar1) {
    return;
  }
  *param_4 = *puVar1;
  param_4[1] = puVar1[1];
  param_4[2] = puVar1[2];
  return;
}
