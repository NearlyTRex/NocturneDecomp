// Name: FUN_00517130
// Address: 00517130
// Address Range: [[00517130, 005171d1]]
// Convention: unknown
// Signature: void FUN_00517130(undefined4 param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00517130(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  byte auStack_6c [100];
  
  FUN_00516200(param_1);
  FUN_00516270(param_1,param_2);
  iVar1 = FUN_00460c70(0x5e1d63,param_1,0x5e1d60);
  if (iVar1 == 0) {
    FUN_005b7790(auStack_6c,"Unable to open PBM file %s",param_1);
    _DAT_01d046a4 = 0x51a;
    _DAT_01d046a0 = "..\\cockpit\\pkbitmap.cpp";
    FUN_004e4500(auStack_6c);
  }
  FUN_00516f30(param_1,iVar1,0);
  FUN_005b89c0(iVar1);
  if (param_3 == 0) {
    return;
  }
  FUN_00516d60(param_1);
  return;
}
