// Name: FUN_00451e20
// Address: 00451e20
// Address Range: [[00451e20, 00451eae]]
// Convention: unknown
// Signature: undefined4 FUN_00451e20(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00451e20(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_0061b49c < 0x1e1) {
    FUN_00581f50();
  }
  else {
    iVar2 = FUN_00582b70();
    if (iVar2 == 0) {
      _DAT_01d1d400 = "..\\core\\dcamera.cpp";
      _DAT_01d1d404 = 0xe84;
      FUN_005030e0("Unable to lock hold buffer.   Please set 640x480 as your resolution.");
    }
  }
  FUN_00453ed0(param_1);
  if (DAT_0061b49c < 0x1e1) {
    uVar1 = FUN_00581fa0(0);
    if (_DAT_02c83370 == 0) {
      return uVar1;
    }
  }
  else {
    uVar1 = FUN_00582b90();
    if (_DAT_02c83370 == 0) {
      return uVar1;
    }
  }
  uVar1 = FUN_00581fe0();
  return uVar1;
}
