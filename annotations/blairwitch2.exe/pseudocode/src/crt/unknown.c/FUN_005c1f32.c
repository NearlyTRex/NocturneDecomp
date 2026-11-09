// Name: crt_unknown.c_FUN_005c1f32
// Address: 005c1f32
// Address Range: [[005c1f32, 005c2017]]
// Convention: unknown
// Signature: double crt_unknown_c_FUN_005c1f32(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

double FUN_005c1f32(uint param_1,uint param_2)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong local_34;
  byte uStack_2c;
  byte bStack_2b;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  iVar4 = FUN_005c1d70(param_1,&local_34,param_2);
  if (iVar4 == 0) {
    uVar5 = 0;
    uVar1 = 0;
LAB_005c1f58:
    local_28 = __BITCAST_DOUBLE(CONCAT44(uVar5,uVar1));
    return local_28;
  }
  uVar6 = (uint)(CONCAT11(bStack_2b,uStack_2c) & 0x7fff);
  if (0x43fe < uVar6) {
    FUN_005be19c();
    uVar5 = 0x7FF00000;
    uVar1 = DAT_00601430;
    if ((bStack_2b & 0x80) != 0) {
      return -__BITCAST_DOUBLE(CONCAT44(0x7FF00000,DAT_00601430));
    }
    goto LAB_005c1f58;
  }
  if (uVar6 < 0x3bcd) {
    if ((int)uVar6 < -0x34) {
      FUN_005be19c();
      return 0.0;
    }
    local_28 = (double)(float10)CONCAT19(bStack_2b,CONCAT18(uStack_2c,local_34));
    dVar2 = __BITCAST_DOUBLE(CONCAT44(local_18._4_4_,(uint)local_18));
    dVar3 = local_28;
    if ((((ulonglong)local_28 & 0x7fffffff00000000) == 0) &&
       (local_20 = local_28, local_18 = __BITCAST_DOUBLE(CONCAT44(local_18._4_4_,(uint)local_18)),
       dVar3 = local_28, (int)local_28 == 0)) goto LAB_005c2008;
  }
  else {
    local_28 = (double)(float10)CONCAT19(bStack_2b,CONCAT18(uStack_2c,local_34));
    dVar2 = local_28;
    dVar3 = __BITCAST_DOUBLE(CONCAT44(local_20._4_4_,(uint)local_20));
    if (iVar4 == 3) goto LAB_005c2008;
  }
  local_20 = dVar3;
  local_18 = dVar2;
  if (((ulonglong)local_28 & 0x7ff0000000000000) != 0) {
    return local_28;
  }
LAB_005c2008:
  FUN_005be19c();
  return local_28;
}
