// Name: FUN_00538480
// Address: 00538480
// Address Range: [[00538480, 00538521]]
// Convention: unknown
// Signature: void FUN_00538480(undefined4 param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00538480(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  byte auStack_6c [100];
  
  FUN_00537550(param_1);
  FUN_005375c0(param_1,param_2);
  iVar1 = FUN_00479180(0x5ecfbe,param_1,0x5ecfbb);
  if (iVar1 == 0) {
    FUN_005bfb40(auStack_6c,"Unable to open PBM file %s",param_1);
    _DAT_01d1d404 = 0x51c;
    _DAT_01d1d400 = "..\\cockpit\\pkbitmap.cpp";
    FUN_005030e0(auStack_6c);
  }
  FUN_00538280(param_1,iVar1,0);
  FUN_005c0d10(iVar1);
  if (param_3 == 0) {
    return;
  }
  FUN_005380b0(param_1);
  return;
}
