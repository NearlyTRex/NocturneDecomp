// Name: core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00445020
// Address: 00445020
// Address Range: [[00445020, 004450a9]]
// Convention: __cdecl
// Signature: int __cdecl core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00445020(CDemonCamera *this_ptr)

#include "nocturne.h"

int __cdecl core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00445020(CDemonCamera *this_ptr)

{
  int iVar1;
  int unaff_EDI;
  
  if (g_WindowHeight < 0x1e1) {
    engine_special_cpp_lockFrame_FUN_005322e0();
  }
  else {
    iVar1 = engine_special_cpp_lockHoldBuffer_FUN_00532d60();
    if (iVar1 == 0) {
      g_CurrentFilename = "..\\core\\dcamera.cpp";
      g_CurrentLineNumber = 3627;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to lock hold buffer.   Please set 640x480 as your resolution.");
    }
  }
  core_dcamera_cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_004470f0(this_ptr);
  if (g_WindowHeight < 0x1e1) {
    iVar1 = engine_special_cpp_unlockFrame_FUN_00532320(unaff_EDI);
    if (g_UseDirect3D == 0) {
      return iVar1;
    }
  }
  else {
    iVar1 = engine_special_cpp_unlockHoldBuffer_FUN_00532d80();
    if (g_UseDirect3D == 0) {
      return iVar1;
    }
  }
  iVar1 = engine_special_cpp_beginScene_FUN_00532340();
  return iVar1;
}
