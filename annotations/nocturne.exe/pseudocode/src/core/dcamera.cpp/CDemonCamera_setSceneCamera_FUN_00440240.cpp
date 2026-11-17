// Name: core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_00440240
// Address: 00440240
// Address Range: [[00440240, 00440261]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_00440240(CDemonCamera *this_ptr,int skip_clear_buffers)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_00440240(CDemonCamera *this_ptr,int skip_clear_buffers)

{
  g_CurrentSceneCamera = this_ptr;
  if (skip_clear_buffers != 0) {
    g_SkipClearBuffersSceneCamera = this_ptr;
    return;
  }
  g_SkipClearBuffersSceneCamera = (CDemonCamera *)0x0;
  return;
}
