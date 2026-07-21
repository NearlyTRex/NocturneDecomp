// Name: core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00445020
// Address: 00445020
// Address Range: [[00445020, 004450a9]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00445020(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00445020(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_005b7620 < 0x1e1) {
    wincore_windll_cpp_lockFrame_FUN_005322e0();
  }
  else {
    iVar2 = wincore_windll_cpp_lockHoldBuffer_FUN_00532d60();
    if (iVar2 == 0) {
      _DAT_01cc4800 = "\n@..\\core\\dcamera.cpp" + 2;
      _DAT_01cc4804 = 0xe2b;
      FUN_004c8440("Unable to lock hold buffer.   Please set 640x480 as your resolution.");
    }
  }
  FUN_004470f0(param_1);
  if (DAT_005b7620 < 0x1e1) {
    uVar1 = FUN_00532320();
    if (_DAT_02dc9d60 == 0) {
      return uVar1;
    }
  }
  else {
    uVar1 = wincore_windll_cpp_unlockHoldBuffer_FUN_00532d80();
    if (_DAT_02dc9d60 == 0) {
      return uVar1;
    }
  }
  uVar1 = wincore_windll_cpp_beginScene_FUN_00532340();
  return uVar1;
}
