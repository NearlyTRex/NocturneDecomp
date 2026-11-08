// Name: FUN_00510e00
// Address: 00510e00
// Address Range: [[00510e00, 00510eeb]]
// Convention: unknown
// Signature: void FUN_00510e00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00510e00(uint *param_1,uint *param_2,uint *param_3)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  param_1[7] = 0xc2000000;
  param_1[8] = 0;
  param_1[6] = 0;
  if (param_1 != param_2) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  if (param_3 != (uint *)0x0) {
    if (param_1 + 3 != param_3) {
      param_1[3] = *param_3;
      param_1[4] = param_3[1];
      param_1[5] = param_3[2];
    }
    param_1[9] = 0x40a00000;
    param_1[0xe] = 0;
    return;
  }
  fVar1 = (float)FUN_0040cf60(0x3f490fdb,0x3fc90fdb);
  fVar2 = (float)FUN_0040cf60(0,0x40c90fdb);
  fVar3 = (float10)fcos((float10)fVar2);
  fVar4 = (float10)fcos((float10)fVar1);
  fVar5 = (float10)fsin((float10)fVar2);
  fVar6 = (float10)fsin((float10)fVar1);
  fVar7 = (float10)_DAT_005e1596;
  param_1[4] = (float)(fVar6 * fVar7);
  param_1[3] = (float)(fVar3 * fVar7 * fVar4);
  param_1[5] = (float)(fVar5 * fVar7 * fVar4);
  param_1[9] = 0x40a00000;
  param_1[0xe] = 0;
  return;
}
