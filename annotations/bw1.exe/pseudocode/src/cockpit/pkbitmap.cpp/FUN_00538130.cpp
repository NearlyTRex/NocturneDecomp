// Name: FUN_00538130
// Address: 00538130
// Address Range: [[00538130, 005381a9]]
// Convention: unknown
// Signature: void FUN_00538130(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00538130(uint param_1,uint param_2)

{
  int iVar1;
  byte auStack_6c [100];
  
  iVar1 = FUN_005c157c(param_2,"wb");
  if (iVar1 == 0) {
    FUN_005bfb40(auStack_6c,"Unable to create PBM file %s",param_2);
    _DAT_01d1d400 = "..\\cockpit\\pkbitmap.cpp";
    _DAT_01d1d404 = 0x474;
    FUN_005030e0(auStack_6c);
  }
  FUN_005381b0(param_1,iVar1);
  FUN_005c0d10(iVar1);
  return;
}
