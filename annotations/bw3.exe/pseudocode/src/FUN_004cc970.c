// Name: FUN_004cc970
// Address: 004cc970
// Address Range: [[004cc970, 004ccab1]]
// Convention: unknown
// Signature: void FUN_004cc970(undefined4 param_1,undefined4 *param_2,int *param_3,int *param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cc970(uint param_1,uint *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  byte bVar2;
  float10 fVar3;
  float10 fVar4;
  float afStackY_1018 [1011];
  uint local_3c;
  uint local_38;
  uint local_34;
  float local_30;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  uint local_c;
  
  bVar2 = 0;
  switch(param_1) {
  default:
    *param_2 = 0x2000;
    *param_3 = 0;
    *param_4 = 0;
    return;
  case 1:
    *param_2 = 0;
    *param_3 = 0x7f80;
    *param_4 = 0;
    return;
  case 2:
    *param_2 = 0;
    *param_3 = 0;
    *param_4 = 0;
    return;
  case 3:
    break;
  }
  local_3c = FUN_0040ce40(0,0x437f0000);
  local_c = local_3c;
  local_38 = FUN_0040ce40(0,0x42200000);
  local_c = local_38;
  local_34 = FUN_0040ce40(0x42d40000,0x43800000);
  local_c = local_34;
  FUN_00417240(&stack0xffffffc4);
  local_24 = local_30;
  (&stack0xffffffe0)[(uint)bVar2 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffd4 + (uint)bVar2 * 0xfffffffe * 4);
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffd8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if (&stack0xffffffe8 != &stack0xffffffdc) {
    local_18 = local_24;
    local_14 = local_20;
    local_10 = local_1c;
  }
  fVar3 = (float10)_DAT_005c4621;
  fVar4 = (float10)local_18 * fVar3;
  piVar1 = (int *)FUN_005a3120();
  *piVar1 = (int)ROUND(fVar4);
  fVar4 = (float10)local_14 * fVar3;
  FUN_005a3120();
  *param_3 = (int)ROUND(fVar4);
  fVar3 = fVar3 * (float10)local_10;
  FUN_005a3120();
  *param_4 = (int)ROUND(fVar3);
  return;
}
