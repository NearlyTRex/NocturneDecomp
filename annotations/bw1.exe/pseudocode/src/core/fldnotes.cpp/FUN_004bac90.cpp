// Name: FUN_004bac90
// Address: 004bac90
// Address Range: [[004bac90, 004bad37]]
// Convention: unknown
// Signature: int FUN_004bac90(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004bac90(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_004ba730(param_1);
  iVar3 = FUN_005c0357(iVar2 + 0xdc,3,&DAT_005fca10);
  iVar2 = iVar3 + -0xdc;
  *(byte ***)(iVar3 + -200) = &PTR_FUN_00600964;
  FUN_005bfb70(iVar3 + -0xc4,0,0x60);
  FUN_005bfb70(iVar3 + -0x60,0,0x60);
  *(uint *)(iVar3 + -100) = 0;
  iVar1 = _DAT_01cc4200;
  *(uint *)(iVar3 + -0xd4) = 0x69;
  *(uint *)(iVar3 + -0xd0) = 0x2f;
  if (iVar1 == 0) {
    _DAT_01cc4200 = iVar2;
    return iVar2;
  }
  _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
  _DAT_01d1d404 = 0x40b;
  FUN_005030e0("Can't have more than one twana entry right now");
  _DAT_01cc4200 = iVar2;
  return iVar2;
}
