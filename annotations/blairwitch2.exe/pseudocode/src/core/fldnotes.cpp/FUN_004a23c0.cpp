// Name: FUN_004a23c0
// Address: 004a23c0
// Address Range: [[004a23c0, 004a2460]]
// Convention: unknown
// Signature: int FUN_004a23c0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004a23c0(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_004a1e60(param_1);
  iVar3 = FUN_005b7f5f(iVar2 + 0xd8,3,&DAT_005f6f60);
  iVar2 = iVar3 + -0xd8;
  *(byte ***)(iVar3 + -0xc4) = &PTR_FUN_005f6f04;
  FUN_005b77c0(iVar3 + -0xc0,0,0x60);
  FUN_005b77c0(iVar3 + -0x60,0,0x60);
  iVar1 = _DAT_01cab780;
  *(uint *)(iVar3 + -0xd0) = 0x69;
  *(uint *)(iVar3 + -0xcc) = 0x2f;
  if (iVar1 == 0) {
    _DAT_01cab780 = iVar2;
    return iVar2;
  }
  _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
  _DAT_01d046a4 = 0x3f9;
  FUN_004e4500("Can't have more than one twana entry right now");
  _DAT_01cab780 = iVar2;
  return iVar2;
}
