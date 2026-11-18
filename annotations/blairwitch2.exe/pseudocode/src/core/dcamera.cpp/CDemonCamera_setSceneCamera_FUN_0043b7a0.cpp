// Name: core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0043b7a0
// Address: 0043b7a0
// Address Range: [[0043b7a0, 0043b7c1]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_0043b7a0(CDemonCamera *this_ptr,int skip_clear_buffers)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_0043b7a0(CDemonCamera *this_ptr,int skip_clear_buffers)

{
  g_CurrentSceneCamera = this_ptr;
  if (skip_clear_buffers != 0) {
    g_SkipClearBuffersSceneCamera = this_ptr;
    return;
  }
  g_SkipClearBuffersSceneCamera = (CDemonCamera *)0x0;
  return;
}
