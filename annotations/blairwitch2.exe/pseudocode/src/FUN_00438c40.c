// Name: FUN_00438c40
// Address: 00438c40
// Address Range: [[00438c40, 00438ce8]]
// Convention: unknown
// Signature: void FUN_00438c40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

#include "nocturne.h"

void FUN_00438c40(uint param_1,uint param_2,uint param_3,uint *param_4)

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
  FUN_00438cf0(param_1,param_2,param_3,local_34);
  FUN_00593a10(local_34);
  puVar2 = (uint *)&stack0xffffff6c;
  puVar3 = (uint *)&stack0xffffff9c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  FUN_00591de0(&stack0xffffff9c);
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
