// Name: FUN_005ca282
// Address: 005ca282
// Address Range: [[005ca282, 005ca367]]
// Convention: unknown
// Signature: double FUN_005ca282(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

double FUN_005ca282(uint param_1,uint param_2)

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
  
  iVar4 = FUN_005ca0c0(param_1,&local_34,param_2);
  if (iVar4 == 0) {
    uVar5 = 0;
    uVar1 = 0;
LAB_005ca2a8:
    local_28 = __BITCAST_DOUBLE(CONCAT44(uVar5,uVar1));
    return local_28;
  }
  uVar6 = (uint)(CONCAT11(bStack_2b,uStack_2c) & 0x7fff);
  if (0x43fe < uVar6) {
    FUN_005c646c();
    uVar5 = 0x7FF00000;
    uVar1 = DAT_00608560;
    if ((bStack_2b & 0x80) != 0) {
      return -__BITCAST_DOUBLE(CONCAT44(0x7FF00000,DAT_00608560));
    }
    goto LAB_005ca2a8;
  }
  if (uVar6 < 0x3bcd) {
    if ((int)uVar6 < -0x34) {
      FUN_005c646c();
      return 0.0;
    }
    local_28 = (double)(float10)CONCAT19(bStack_2b,CONCAT18(uStack_2c,local_34));
    dVar2 = __BITCAST_DOUBLE(CONCAT44(local_18._4_4_,(uint)local_18));
    dVar3 = local_28;
    if ((((ulonglong)local_28 & 0x7fffffff00000000) == 0) &&
       (local_20 = local_28, local_18 = __BITCAST_DOUBLE(CONCAT44(local_18._4_4_,(uint)local_18)),
       dVar3 = local_28, (int)local_28 == 0)) goto LAB_005ca358;
  }
  else {
    local_28 = (double)(float10)CONCAT19(bStack_2b,CONCAT18(uStack_2c,local_34));
    dVar2 = local_28;
    dVar3 = __BITCAST_DOUBLE(CONCAT44(local_20._4_4_,(uint)local_20));
    if (iVar4 == 3) goto LAB_005ca358;
  }
  local_20 = dVar3;
  local_18 = dVar2;
  if (((ulonglong)local_28 & 0x7ff0000000000000) != 0) {
    return local_28;
  }
LAB_005ca358:
  FUN_005c646c();
  return local_28;
}
