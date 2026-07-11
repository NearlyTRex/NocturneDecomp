// Name: FUN_00486e40
// Address: 00486e40
// Address Range: [[00486e40, 00486f8c]]
// Convention: unknown
// Signature: void FUN_00486e40(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00486e40(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float local_50;
  float local_4c;
  float local_48;
  uint local_44;
  float local_40;
  uint local_3c;
  float local_28;
  float local_14;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  uVar1 = 0x01E57284;
  param_1[3] = 0x3f800000;
  param_1[4] = param_3;
  FUN_0050e660(uVar1,0x43480000,0,0,0x40000000);
  iVar2 = 0;
  uVar1 = FUN_0040dea0(0x3f000000);
  param_1[6] = uVar1;
  param_1[5] = param_4;
  do {
    local_28 = (float)FUN_0040dda0(0x3f490fdb,0x3fc90fdb);
    local_14 = local_28;
    local_14 = (float)FUN_0040dda0(0,0x40c90fdb);
    fVar3 = (float10)fcos((float10)local_14);
    fVar4 = (float10)fcos((float10)local_28);
    fVar5 = (float10)fsin((float10)local_14);
    fVar6 = (float10)fsin((float10)local_28);
    local_4c = (float)(fVar6 * (float10)_DAT_00581210);
    local_50 = (float)(fVar3 * (float10)_DAT_00581210 * fVar4);
    local_48 = (float)(fVar5 * (float10)_DAT_00581210 * fVar4);
    local_44 = *param_1;
    local_3c = param_1[2];
    local_40 = (float)param_1[1] + 1.0;
    uVar1 = FUN_00454530((iVar2 % 5) * 0x17c + 0x1c094bc);
    iVar2 = iVar2 + 1;
    FUN_0048b320(0x01C08D04,&local_44,&local_50,uVar1);
  } while (iVar2 < 10);
  return;
}
