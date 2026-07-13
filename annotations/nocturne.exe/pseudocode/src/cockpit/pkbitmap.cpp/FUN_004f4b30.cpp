// Name: FUN_004f4b30
// Address: 004f4b30
// Address Range: [[004f4b30, 004f4ba9]]
// Convention: unknown
// Signature: void FUN_004f4b30(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f4b30(uint param_1,uint param_2)

{
  int iVar1;
  byte auStack_6c [100];
  
  iVar1 = FUN_0056568c(param_2,0x58d1f0);
  if (iVar1 == 0) {
    FUN_00563c90(auStack_6c,"Unable to create PBM file %s",param_2);
    _DAT_01cc4800 = "..\\cockpit\\pkbitmap.cpp";
    _DAT_01cc4804 = 0x473;
    FUN_004c8440(auStack_6c);
  }
  FUN_004f4bb0(param_1,iVar1);
  FUN_00563380(iVar1);
  return;
}
