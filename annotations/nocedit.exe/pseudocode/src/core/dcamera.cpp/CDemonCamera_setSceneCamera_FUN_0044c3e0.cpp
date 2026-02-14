// Name: core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0044c3e0
// Address: 0044c3e0
// Address Range: [[0044c3e0, 0044c401]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_0044c3e0(CDemonCamera *this_ptr,int skip_clear_buffers)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_0044c3e0(CDemonCamera *this_ptr,int skip_clear_buffers)

{
  g_CurrentSceneCamera = this_ptr;
  if (skip_clear_buffers != 0) {
    g_SkipClearBuffersSceneCamera = this_ptr;
    return;
  }
  g_SkipClearBuffersSceneCamera = (CDemonCamera *)0x0;
  return;
}
