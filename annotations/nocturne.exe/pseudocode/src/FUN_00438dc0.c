// Name: FUN_00438dc0
// Address: 00438dc0
// Address Range: [[00438dc0, 00438f17]]
// Convention: unknown
// Signature: uint FUN_00438dc0(byte *param_1,int param_2,int *param_3,int *param_4)

#include "nocturne.h"

uint FUN_00438dc0(byte *param_1,int param_2,int *param_3,int *param_4)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 < *(int *)param_1) {
    uVar4 = *(uint *)(param_1 + 4);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) >> ((byte)param_2 & 0x1f);
    *(int *)param_1 = *(int *)param_1 - param_2;
    return ~(-1 << ((byte)param_2 & 0x1f)) & uVar4;
  }
  if (param_2 == *(int *)param_1) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    uVar4 = *(uint *)(param_1 + 4);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    return uVar4;
  }
  uVar4 = *(uint *)(param_1 + 4) & ~(-1 << (*param_1 & 0x1f));
  iVar3 = *(int *)param_1;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_2 = param_2 - iVar3;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  for (; 7 < param_2; param_2 = param_2 + -8) {
    if (*param_4 < 1) goto LAB_00438f00;
    pbVar1 = (byte *)*param_3;
    *param_3 = (int)(pbVar1 + 1);
    uVar4 = uVar4 | (uint)*pbVar1 << ((byte)iVar3 & 0x1f);
    iVar3 = iVar3 + 8;
    *param_4 = *param_4 + -1;
  }
  if (0 < param_2) {
    if (*param_4 < 1) {
LAB_00438f00:
      *(uint *)(param_1 + 4) = uVar4;
      *(int *)param_1 = iVar3;
      return 0xffffffff;
    }
    pbVar1 = (byte *)*param_3;
    *param_3 = (int)(pbVar1 + 1);
    *(uint *)(param_1 + 4) = (uint)*pbVar1;
    *param_4 = *param_4 + -1;
    uVar2 = *(uint *)(param_1 + 4);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) >> ((byte)param_2 & 0x1f);
    uVar4 = uVar4 | (uVar2 & ~(-1 << ((byte)param_2 & 0x1f))) << ((byte)iVar3 & 0x1f);
    *(int *)param_1 = 8 - param_2;
  }
  return uVar4;
}
