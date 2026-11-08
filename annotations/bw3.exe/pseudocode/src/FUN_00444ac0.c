// Name: FUN_00444ac0
// Address: 00444ac0
// Address Range: [[00444ac0, 00444b68]]
// Convention: unknown
// Signature: void FUN_00444ac0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

#include "nocturne.h"

void FUN_00444ac0(uint param_1,uint param_2,uint param_3,uint *param_4)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_100c [986];
  byte local_34 [16];
  uint local_24;
  uint auStack_20 [4];
  uint local_10;
  
  bVar4 = 0;
  FUN_00444b70(param_1,param_2,param_3,local_34);
  FUN_00585740(local_34);
  puVar2 = (uint *)&stack0xffffff6c;
  puVar3 = (uint *)&stack0xffffff9c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  FUN_00583b10(&stack0xffffff9c);
  auStack_20[2] = local_24;
  auStack_20[(uint)bVar4 * -2 + 3] = auStack_20[(uint)bVar4 * -2];
  auStack_20[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       auStack_20[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  if (param_4 == auStack_20 + 2) {
    return;
  }
  *param_4 = auStack_20[2];
  param_4[1] = auStack_20[3];
  param_4[2] = local_10;
  return;
}
