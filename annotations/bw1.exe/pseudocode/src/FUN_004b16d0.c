// Name: FUN_004b16d0
// Address: 004b16d0
// Address Range: [[004b16d0, 004b1812]]
// Convention: unknown
// Signature: void FUN_004b16d0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b16d0(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float afStackY_102c [1010];
  float local_50;
  float local_4c;
  float local_48;
  uint local_44;
  float local_40;
  float local_20;
  float local_14;
  
  bVar3 = 0;
  if (param_1 != param_2) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  uVar1 = 0x01E82168;
  param_1[3] = 0x3f800000;
  param_1[4] = param_3;
  FUN_00555ab0(uVar1,0x43480000,0,0,0x40000000);
  uVar1 = FUN_0040cd00(0x3f000000);
  param_1[6] = uVar1;
  iVar2 = 0;
  param_1[5] = param_4;
  do {
    local_20 = (float)FUN_0040cc00(0x3f490fdb,0x3fc90fdb);
    local_14 = local_20;
    local_14 = (float)FUN_0040cc00(0,0x40c90fdb);
    fVar4 = (float10)fcos((float10)local_14);
    fVar5 = (float10)fcos((float10)local_20);
    fVar6 = (float10)fsin((float10)local_14);
    fVar7 = (float10)fsin((float10)local_20);
    local_4c = (float)(fVar7 * (float10)_DAT_005df358);
    local_50 = (float)(fVar4 * (float10)_DAT_005df358 * fVar5);
    local_48 = (float)(fVar6 * (float10)_DAT_005df358 * fVar5);
    local_44 = *param_1;
    (&stack0xffffffc0)[(uint)bVar3 * 0xfffffffe] = (float)param_1[(uint)bVar3 * -2 + 1];
    *(uint *)(&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         (param_1 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1];
    local_40 = local_40 + 1.0;
    uVar1 = FUN_00468900((iVar2 % 5) * 0x17c + 0x1c57e1c);
    iVar2 = iVar2 + 1;
    FUN_004b5eb0(0x01C57074,&stack0xffffffbc,&stack0xffffffb0,uVar1);
  } while (iVar2 < 10);
  return;
}
