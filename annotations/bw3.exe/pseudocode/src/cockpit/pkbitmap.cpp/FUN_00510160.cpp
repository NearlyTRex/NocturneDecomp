// Name: FUN_00510160
// Address: 00510160
// Address Range: [[00510160, 00510201]]
// Convention: unknown
// Signature: void FUN_00510160(undefined4 param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00510160(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  byte auStack_6c [100];
  
  FUN_0050f230(param_1);
  FUN_0050f2a0(param_1,param_2);
  iVar1 = FUN_004659c0(0x5cbe26,param_1,0x5cbe23);
  if (iVar1 == 0) {
    FUN_005a28c0(auStack_6c,"Unable to open PBM file %s",param_1);
    _DAT_01d71de4 = 0x51c;
    _DAT_01d71de0 = "..\\cockpit\\pkbitmap.cpp";
    FUN_004e4330(auStack_6c);
  }
  FUN_0050ff60(param_1,iVar1,0);
  FUN_005a3a90(iVar1);
  if (param_3 == 0) {
    return;
  }
  FUN_0050fd90(param_1);
  return;
}
