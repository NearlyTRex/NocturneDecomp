// Name: FUN_004c70a0
// Address: 004c70a0
// Address Range: [[004c70a0, 004c719e]]
// Convention: unknown
// Signature: undefined4 FUN_004c70a0(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004c70a0(uint param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte auStack_4c [24];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  byte auStack_28 [12];
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  FUN_005113e0(0x01E57284);
  pfVar1 = (float *)(**(code **)(*(int *)(param_2 + 0x14c) + 0x14))(param_2,auStack_4c);
  fStack_1c = *pfVar1 + pfVar1[3];
  fStack_18 = pfVar1[1] + pfVar1[4];
  fStack_34 = fStack_1c * _DAT_00587a5d;
  fStack_14 = pfVar1[2] + pfVar1[5];
  fStack_30 = fStack_18 * _DAT_00587a5d;
  fStack_2c = fStack_14 * _DAT_00587a5d;
  uVar4 = 0;
  iVar3 = 0;
  FUN_0040a240(param_2,auStack_28,&fStack_34);
  do {
    FUN_0050fb00(0x01E57284,param_1,auStack_28);
    iVar2 = *(int *)(0x01E57284 + 0x14cd5c);
    if (iVar2 == 0) break;
    if (param_2 == iVar2) {
      uVar4 = 1;
      break;
    }
    iVar2 = FUN_0040d7e0(iVar2,"CTrigger || CGlass");
    if (iVar2 == 0) break;
    iVar3 = iVar3 + 1;
    FUN_00511780(0x01E57284,*(uint *)(0x01E57284 + 0x14cd5c));
  } while (iVar3 < 3);
  FUN_00511590(0x01E57284);
  return uVar4;
}
