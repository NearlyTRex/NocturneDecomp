// Name: FUN_004a88d0
// Address: 004a88d0
// Address Range: [[004a88d0, 004a8977]]
// Convention: unknown
// Signature: int FUN_004a88d0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004a88d0(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_004a8370(param_1);
  iVar3 = FUN_005a30d7(iVar2 + 0xdc,3,&DAT_005dbf20);
  iVar2 = iVar3 + -0xdc;
  *(byte ***)(iVar3 + -200) = &PTR_FUN_005e02c4;
  FUN_005a28f0(iVar3 + -0xc4,0,0x60);
  FUN_005a28f0(iVar3 + -0x60,0,0x60);
  *(uint *)(iVar3 + -100) = 0;
  iVar1 = _DAT_01d0cfa0;
  *(uint *)(iVar3 + -0xd4) = 0x69;
  *(uint *)(iVar3 + -0xd0) = 0x2f;
  if (iVar1 == 0) {
    _DAT_01d0cfa0 = iVar2;
    return iVar2;
  }
  _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
  _DAT_01d71de4 = 0x406;
  FUN_004e4330("Can't have more than one twana entry right now");
  _DAT_01d0cfa0 = iVar2;
  return iVar2;
}
