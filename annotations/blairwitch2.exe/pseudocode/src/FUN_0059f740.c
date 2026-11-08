// Name: FUN_0059f740
// Address: 0059f740
// Address Range: [[0059f740, 0059f7f1]]
// Convention: unknown
// Signature: undefined4 FUN_0059f740(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

#include "nocturne.h"

uint FUN_0059f740(int param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  uint auStackY_101c [997];
  uint *puVar3;
  byte *puVar4;
  byte local_70 [4];
  uint local_6c;
  int local_3c;
  int local_38;
  uint local_34;
  uint auStack_30 [5];
  uint local_1c;
  uint local_10 [3];
  
  bVar2 = 0;
  if (*(int *)(param_1 + 0x113d0) != 0) {
    return 0;
  }
  FUN_004222d0(local_70);
  local_6c = param_2;
  local_3c = param_1;
  local_38 = param_1;
  FUN_00591530(&DAT_0265370c,param_1 + 0x1134 + param_3 * 0x30);
  puVar3 = auStack_30 + 8;
  local_10[0] = local_1c;
  auStack_30[(uint)bVar2 * -2 + 9] = auStack_30[(uint)bVar2 * -2 + 6];
  auStack_30[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 10] =
       auStack_30[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7];
  FUN_00408d70(param_1,puVar3);
  puVar4 = local_70;
  puVar3 = &local_34;
  local_34 = auStack_30[2];
  auStack_30[(uint)bVar2 * -2] = auStack_30[(uint)bVar2 * -2 + 3];
  auStack_30[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       auStack_30[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
  uVar1 = FUN_00488110(param_1,puVar3,param_4,puVar4);
  return uVar1;
}
