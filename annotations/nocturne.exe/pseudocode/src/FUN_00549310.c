// Name: FUN_00549310
// Address: 00549310
// Address Range: [[00549310, 00549407]]
// Convention: unknown
// Signature: void FUN_00549310(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00549310(int *param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  ulonglong uVar4;
  byte local_30 [4];
  float local_2c;
  float local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  if (_DAT_02dd10cc == 0) {
    return;
  }
  FUN_00460d30(DAT_005ae704,local_30);
  local_24 = 0x40800;
  local_1c = 0;
  local_20 = FUN_004b21b0(0x01CADF80,0,0x40800);
  iVar1 = local_1c;
  fVar2 = (float10)local_2c * (float10)_DAT_00596cd5;
  fVar3 = (float10)local_28 * (float10)_DAT_00596cd5;
  FUN_00563a30();
  FUN_00563a30();
  local_18 = (int)ROUND(fVar2);
  uVar4 = FUN_00563a30();
  local_20 = (int)uVar4 + (int)((ulonglong)uVar4 >> 0x20);
  local_18 = (int)ROUND(fVar3);
  local_1c = (iVar1 + local_18) - *param_1;
  FUN_004606e0(DAT_005ae704,&local_24);
  FUN_004b2110(0x01CADF80);
  FUN_00460700(DAT_005ae704,local_30);
  return;
}
