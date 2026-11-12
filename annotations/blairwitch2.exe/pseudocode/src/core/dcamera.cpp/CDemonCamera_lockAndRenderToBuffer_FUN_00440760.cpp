// Name: core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00440760
// Address: 00440760
// Address Range: [[00440760, 004407ee]]
// Convention: __cdecl
// Signature: int __cdecl core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00440760(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00440760(CDemonCamera *this_ptr)

{
  int iVar1;
  
  if (DAT_006141bc < 0x1e1) {
    engine_special_cpp_FUN_0055f500();
  }
  else {
    iVar1 = engine_special_cpp_FUN_00560120();
    if (iVar1 == 0) {
      _DAT_01d046a0 = "..\\core\\dcamera.cpp";
      _DAT_01d046a4 = 0xe80;
      core_main_c_FUN_004e4500("Unable to lock hold buffer.   Please set 640x480 as your resolution.");
    }
  }
  core_dcamera_cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00442820(this_ptr);
  if (DAT_006141bc < 0x1e1) {
    iVar1 = engine_special_cpp_unlockFrame_FUN_0055f550(0);
    if (_DAT_0264bba0 == 0) {
      return iVar1;
    }
  }
  else {
    iVar1 = engine_special_cpp_FUN_00560140();
    if (_DAT_0264bba0 == 0) {
      return iVar1;
    }
  }
  iVar1 = engine_special_cpp_FUN_0055f590();
  return iVar1;
}
