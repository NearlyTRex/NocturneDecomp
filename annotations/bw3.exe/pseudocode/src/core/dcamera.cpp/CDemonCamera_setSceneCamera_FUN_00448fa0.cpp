// Name: core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_00448fa0
// Address: 00448fa0
// Address Range: [[00448fa0, 00448fc1]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_00448fa0(CDemonCamera *this_ptr,int skip_clear_buffers)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_00448fa0(CDemonCamera *this_ptr,int skip_clear_buffers)

{
  DAT_007e2a54 = this_ptr;
  if (skip_clear_buffers != 0) {
    _DAT_00874584 = this_ptr;
    return;
  }
  _DAT_00874584 = (CDemonCamera *)0x0;
  return;
}
