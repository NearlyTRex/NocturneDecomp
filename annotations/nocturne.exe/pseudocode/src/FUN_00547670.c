// Name: FUN_00547670
// Address: 00547670
// Address Range: [[00547670, 0054772d]]
// Convention: unknown
// Signature: int FUN_00547670(int param_1)

#include "nocturne.h"

int FUN_00547670(int param_1)

{
  uint uVar1;
  int iVar2;
  byte local_3c [24];
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  byte auStack_18 [12];
  
  FUN_00409f20(param_1);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_3c,0);
  iVar2 = FUN_0041ceb0(uVar1);
  if (iVar2 == 0) {
    FUN_00409f60(param_1);
    return 0;
  }
  uStack_20 = *(uint *)(param_1 + 0x308);
  uStack_24 = 0;
  uStack_1c = 0;
  FUN_0040a220(param_1,auStack_18,&uStack_24);
  FUN_00460aa0(DAT_005ae704,&DAT_02dd1184,auStack_18);
  FUN_004544d0(param_1 + 0x150,0,0xffffffff);
  thunk_FUN_004cdbc0(DAT_005ae704);
  FUN_00409f60(param_1);
  return iVar2;
}
