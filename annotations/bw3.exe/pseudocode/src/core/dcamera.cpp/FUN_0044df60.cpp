// Name: FUN_0044df60
// Address: 0044df60
// Address Range: [[0044df60, 0044dfee]]
// Convention: unknown
// Signature: undefined4 FUN_0044df60(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0044df60(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_005fba1c < 0x1e1) {
    FUN_00565820();
  }
  else {
    iVar2 = FUN_00566440();
    if (iVar2 == 0) {
      _DAT_01d71de0 = "..\\core\\dcamera.cpp";
      _DAT_01d71de4 = 0xe84;
      FUN_004e4330("Unable to lock hold buffer.   Please set 640x480 as your resolution.");
    }
  }
  FUN_00450020(param_1);
  if (DAT_005fba1c < 0x1e1) {
    uVar1 = FUN_00565870(0);
    if (_DAT_02cf5fcc == 0) {
      return uVar1;
    }
  }
  else {
    uVar1 = FUN_00566460();
    if (_DAT_02cf5fcc == 0) {
      return uVar1;
    }
  }
  uVar1 = FUN_005658b0();
  return uVar1;
}
