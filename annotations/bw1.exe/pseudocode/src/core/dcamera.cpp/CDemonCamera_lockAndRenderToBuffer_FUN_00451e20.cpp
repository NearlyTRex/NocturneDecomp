// Name: core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00451e20
// Address: 00451e20
// Address Range: [[00451e20, 00451eae]]
// Convention: __cdecl
// Signature: int __cdecl core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00451e20(CDemonCamera *this_ptr)

#include "nocturne.h"

int __cdecl core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00451e20(CDemonCamera *this_ptr)

{
  int iVar1;
  
  if (g_INT_0061b49c < 0x1e1) {
    engine_special_cpp_lockFrame_FUN_00581f50();
  }
  else {
    iVar1 = engine_special_cpp_lockHoldBuffer_FUN_00582b70();
    if (iVar1 == 0) {
      g_CurrentFilename = "..\\core\\dcamera.cpp";
      g_CurrentLineNumber = 3716;
      core_main_c_displayErrorAndQuit_FUN_005030e0("Unable to lock hold buffer.   Please set 640x480 as your resolution.");
    }
  }
  core_dcamera_cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453ed0(this_ptr);
  if (g_INT_0061b49c < 0x1e1) {
    iVar1 = engine_special_cpp_unlockFrame_FUN_00581fa0(0);
    if (g_INT_02c83370 == 0) {
      return iVar1;
    }
  }
  else {
    iVar1 = engine_special_cpp_unlockHoldBuffer_FUN_00582b90();
    if (g_INT_02c83370 == 0) {
      return iVar1;
    }
  }
  iVar1 = engine_special_cpp_beginScene_FUN_00581fe0();
  return iVar1;
}
