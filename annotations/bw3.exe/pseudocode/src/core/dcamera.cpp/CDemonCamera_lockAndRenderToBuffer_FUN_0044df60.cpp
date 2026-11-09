// Name: core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_0044df60
// Address: 0044df60
// Address Range: [[0044df60, 0044dfee]]
// Convention: __cdecl
// Signature: int __cdecl core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_0044df60(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_0044df60(CDemonCamera *this_ptr)

{
  int iVar1;
  
  if (DAT_005fba1c < 0x1e1) {
    engine_special_cpp_FUN_00565820();
  }
  else {
    iVar1 = engine_special_cpp_FUN_00566440();
    if (iVar1 == 0) {
      _DAT_01d71de0 = "..\\core\\dcamera.cpp";
      _DAT_01d71de4 = 0xe84;
      core_main_c_FUN_004e4330("Unable to lock hold buffer.   Please set 640x480 as your resolution.");
    }
  }
  core_dcamera_cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00450020(this_ptr);
  if (DAT_005fba1c < 0x1e1) {
    iVar1 = engine_special_cpp_unlockFrame_FUN_00565870(0);
    if (_DAT_02cf5fcc == 0) {
      return iVar1;
    }
  }
  else {
    iVar1 = engine_special_cpp_FUN_00566460();
    if (_DAT_02cf5fcc == 0) {
      return iVar1;
    }
  }
  iVar1 = engine_special_cpp_FUN_005658b0();
  return iVar1;
}
