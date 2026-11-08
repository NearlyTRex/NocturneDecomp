// Name: FUN_0049c730
// Address: 0049c730
// Address Range: [[0049c730, 0049c881]]
// Convention: unknown
// Signature: void FUN_0049c730(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int param_5)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049c730(uint *param_1,uint *param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float afStackY_1030 [1012];
  uint local_48;
  float local_44;
  float local_3c;
  float local_38;
  float local_34;
  float local_18;
  float local_c;
  
  bVar3 = 0;
  if (param_1 != param_2) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  uVar1 = 0x01ED78C8;
  param_1[3] = 0x3f800000;
  param_1[7] = param_5;
  param_1[4] = param_3;
  FUN_0053b440(uVar1,0x43480000,0,0,0x40000000);
  uVar1 = FUN_0040cf40(0x3f000000);
  param_1[6] = uVar1;
  param_1[5] = param_4;
  if (param_5 == 0) {
    iVar2 = 0;
    do {
      local_18 = (float)FUN_0040ce40(0x3f490fdb,0x3fc90fdb);
      local_c = local_18;
      local_c = (float)FUN_0040ce40(0,0x40c90fdb);
      fVar4 = (float10)fcos((float10)local_c);
      fVar5 = (float10)fcos((float10)local_18);
      fVar6 = (float10)fsin((float10)local_c);
      fVar7 = (float10)fsin((float10)local_18);
      local_38 = (float)(fVar7 * (float10)_DAT_005c068c);
      local_3c = (float)(fVar4 * (float10)_DAT_005c068c * fVar5);
      local_34 = (float)(fVar6 * (float10)_DAT_005c068c * fVar5);
      local_48 = *param_1;
      (&stack0xffffffbc)[(uint)bVar3 * 0xfffffffe] = (float)param_1[(uint)bVar3 * -2 + 1];
      *(uint *)(&stack0xffffffc0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           (param_1 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1];
      local_44 = local_44 + 1.0;
      uVar1 = FUN_004625a0((iVar2 % 5) * 0x17c + 0x1c743fc);
      iVar2 = iVar2 + 1;
      FUN_004a28e0(0x01C73654,&stack0xffffffb8,&stack0xffffffc4,uVar1);
    } while (iVar2 < 10);
  }
  return;
}
