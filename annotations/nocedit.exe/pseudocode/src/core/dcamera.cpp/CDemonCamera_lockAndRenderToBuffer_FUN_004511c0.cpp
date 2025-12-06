// Name: core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_004511c0
// Address: 004511c0
// Address Range: [[004511c0, 0045124e]]
// Convention: __cdecl
// Signature: int core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_004511c0(CDemonCamera * this_ptr)

#include "nocturne.h"

int __cdecl core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_004511c0(CDemonCamera *this_ptr)

{
  int iVar1;
  int extraout_EAX;
  CDemonCamera *in_stack_0000000c;
  
  if (g_WindowHeight < 0x1e1) {
    wincore_windll_cpp_lockFrame_FUN_005b7210();
  }
  else {
    iVar1 = wincore_windll_cpp_lockHoldBuffer_FUN_005b7df0();
    if (iVar1 == 0) {
      g_CurrentFilename = "..\\core\\dcamera.cpp";
      g_CurrentLineNumber = 0xe37;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to lock hold buffer.   Please set 640x480 as your resolution.");
    }
  }
  core_dcamera_cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270(in_stack_0000000c);
  if (g_WindowHeight < 0x1e1) {
    wincore_windll_cpp_unlockFrame_FUN_005b7250(0);
    if (g_FullscreenMode == 0) {
      return extraout_EAX;
    }
  }
  else {
    iVar1 = wincore_windll_cpp_unlockHoldBuffer_FUN_005b7e10();
    if (g_FullscreenMode == 0) {
      return iVar1;
    }
  }
  iVar1 = wincore_windll_cpp_beginScene_FUN_005b7280();
  return iVar1;
}
