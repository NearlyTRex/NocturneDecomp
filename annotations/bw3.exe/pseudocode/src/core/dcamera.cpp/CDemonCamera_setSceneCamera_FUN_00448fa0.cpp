// Name: core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_00448fa0
// Address: 00448fa0
// Address Range: [[00448fa0, 00448fc1]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_00448fa0(CDemonCamera *this_ptr,int skip_clear_buffers)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_00448fa0(CDemonCamera *this_ptr,int skip_clear_buffers)

{
  g_CDemonCamera_PTR_007e2a54 = this_ptr;
  if (skip_clear_buffers != 0) {
    g_CDemonCamera_PTR_00874584 = this_ptr;
    return;
  }
  g_CDemonCamera_PTR_00874584 = (CDemonCamera *)0x0;
  return;
}
