// Name: core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00451e20
// Address: 00451e20
// Address Range: [[00451e20, 00451eae]]
// Convention: __cdecl
// Signature: int __cdecl core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00451e20(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00451e20(CDemonCamera *this_ptr)

{
  int iVar1;
  
  if (DAT_0061b49c < 0x1e1) {
    engine_special_cpp_FUN_00581f50();
  }
  else {
    iVar1 = engine_special_cpp_FUN_00582b70();
    if (iVar1 == 0) {
      _DAT_01d1d400 = "..\\core\\dcamera.cpp";
      _DAT_01d1d404 = 0xe84;
      core_main_c_FUN_005030e0("Unable to lock hold buffer.   Please set 640x480 as your resolution.");
    }
  }
  core_dcamera_cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453ed0(this_ptr);
  if (DAT_0061b49c < 0x1e1) {
    iVar1 = engine_special_cpp_unlockFrame_FUN_00581fa0(0);
    if (_DAT_02c83370 == 0) {
      return iVar1;
    }
  }
  else {
    iVar1 = engine_special_cpp_FUN_00582b90();
    if (_DAT_02c83370 == 0) {
      return iVar1;
    }
  }
  iVar1 = engine_special_cpp_FUN_00581fe0();
  return iVar1;
}
