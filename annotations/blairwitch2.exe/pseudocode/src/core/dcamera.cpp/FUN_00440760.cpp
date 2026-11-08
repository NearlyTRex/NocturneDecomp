// Name: FUN_00440760
// Address: 00440760
// Address Range: [[00440760, 004407ee]]
// Convention: unknown
// Signature: undefined4 FUN_00440760(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00440760(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_006141bc < 0x1e1) {
    FUN_0055f500();
  }
  else {
    iVar2 = FUN_00560120();
    if (iVar2 == 0) {
      _DAT_01d046a0 = "..\\core\\dcamera.cpp";
      _DAT_01d046a4 = 0xe80;
      FUN_004e4500("Unable to lock hold buffer.   Please set 640x480 as your resolution.");
    }
  }
  FUN_00442820(param_1);
  if (DAT_006141bc < 0x1e1) {
    uVar1 = FUN_0055f550(0);
    if (_DAT_0264bba0 == 0) {
      return uVar1;
    }
  }
  else {
    uVar1 = FUN_00560140();
    if (_DAT_0264bba0 == 0) {
      return uVar1;
    }
  }
  uVar1 = FUN_0055f590();
  return uVar1;
}
