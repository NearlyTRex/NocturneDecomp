// Name: FUN_00516de0
// Address: 00516de0
// Address Range: [[00516de0, 00516e59]]
// Convention: unknown
// Signature: void FUN_00516de0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00516de0(uint param_1,uint param_2)

{
  int iVar1;
  byte auStack_6c [100];
  
  iVar1 = FUN_005b910c(param_2,0x5e1c4b);
  if (iVar1 == 0) {
    FUN_005b7790(auStack_6c,"Unable to create PBM file %s",param_2);
    _DAT_01d046a0 = "..\\cockpit\\pkbitmap.cpp";
    _DAT_01d046a4 = 0x472;
    FUN_004e4500(auStack_6c);
  }
  FUN_00516e60(param_1,iVar1);
  FUN_005b89c0(iVar1);
  return;
}
