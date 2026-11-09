// Name: core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0043b7a0
// Address: 0043b7a0
// Address Range: [[0043b7a0, 0043b7c1]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_0043b7a0(CDemonCamera *this_ptr,int skip_clear_buffers)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_0043b7a0(CDemonCamera *this_ptr,int skip_clear_buffers)

{
  DAT_007bda74 = this_ptr;
  if (skip_clear_buffers != 0) {
    DAT_0083c7d0 = this_ptr;
    return;
  }
  DAT_0083c7d0 = (CDemonCamera *)0x0;
  return;
}
