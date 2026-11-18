// Name: core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00440760
// Address: 00440760
// Address Range: [[00440760, 004407ee]]
// Convention: __cdecl
// Signature: int __cdecl core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00440760(CDemonCamera *this_ptr)

#include "nocturne.h"

int __cdecl core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00440760(CDemonCamera *this_ptr)

{
  int iVar1;
  
  if (g_INT_006141bc < 0x1e1) {
    engine_special_cpp_lockFrame_FUN_0055f500();
  }
  else {
    iVar1 = engine_special_cpp_lockHoldBuffer_FUN_00560120();
    if (iVar1 == 0) {
      g_CHAR_PTR_01d046a0 = "..\\core\\dcamera.cpp";
      g_INT_01d046a4 = 0xe80;
      core_main_c_displayErrorAndQuit_FUN_004e4500("Unable to lock hold buffer.   Please set 640x480 as your resolution.");
    }
  }
  core_dcamera_cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00442820(this_ptr);
  if (g_INT_006141bc < 0x1e1) {
    iVar1 = engine_special_cpp_unlockFrame_FUN_0055f550(0);
    if (g_INT_0264bba0 == 0) {
      return iVar1;
    }
  }
  else {
    iVar1 = engine_special_cpp_unlockHoldBuffer_FUN_00560140();
    if (g_INT_0264bba0 == 0) {
      return iVar1;
    }
  }
  iVar1 = engine_special_cpp_beginScene_FUN_0055f590();
  return iVar1;
}
