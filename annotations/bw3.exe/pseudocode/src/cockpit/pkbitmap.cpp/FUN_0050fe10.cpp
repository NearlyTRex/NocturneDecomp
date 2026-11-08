// Name: FUN_0050fe10
// Address: 0050fe10
// Address Range: [[0050fe10, 0050fe89]]
// Convention: unknown
// Signature: void FUN_0050fe10(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050fe10(uint param_1,uint param_2)

{
  int iVar1;
  byte auStack_6c [100];
  
  iVar1 = FUN_005a43ec(param_2,0x5cbd0e);
  if (iVar1 == 0) {
    FUN_005a28c0(auStack_6c,"Unable to create PBM file %s",param_2);
    _DAT_01d71de0 = "..\\cockpit\\pkbitmap.cpp";
    _DAT_01d71de4 = 0x474;
    FUN_004e4330(auStack_6c);
  }
  FUN_0050fe90(param_1,iVar1);
  FUN_005a3a90(iVar1);
  return;
}
