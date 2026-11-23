// Name: core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_0044df60
// Address: 0044df60
// Address Range: [[0044df60, 0044dfee]]
// Convention: __cdecl
// Signature: int __cdecl core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_0044df60(CDemonCamera *this_ptr)

#include "nocturne.h"

int __cdecl core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_0044df60(CDemonCamera *this_ptr)

{
  int iVar1;
  
  if (g_INT_005fba1c < 0x1e1) {
    engine_special_cpp_lockFrame_FUN_00565820();
  }
  else {
    iVar1 = engine_special_cpp_lockHoldBuffer_FUN_00566440();
    if (iVar1 == 0) {
      g_CurrentFilename = "..\\core\\dcamera.cpp";
      g_CurrentLineNumber = 3716;
      core_main_c_displayErrorAndQuit_FUN_004e4330("Unable to lock hold buffer.   Please set 640x480 as your resolution.");
    }
  }
  core_dcamera_cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00450020(this_ptr);
  if (g_INT_005fba1c < 0x1e1) {
    iVar1 = engine_special_cpp_unlockFrame_FUN_00565870(0);
    if (g_INT_02cf5fcc == 0) {
      return iVar1;
    }
  }
  else {
    iVar1 = engine_special_cpp_unlockHoldBuffer_FUN_00566460();
    if (g_INT_02cf5fcc == 0) {
      return iVar1;
    }
  }
  iVar1 = engine_special_cpp_beginScene_FUN_005658b0();
  return iVar1;
}
