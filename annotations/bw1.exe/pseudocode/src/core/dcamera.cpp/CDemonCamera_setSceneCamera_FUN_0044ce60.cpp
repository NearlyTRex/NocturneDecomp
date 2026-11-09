// Name: core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0044ce60
// Address: 0044ce60
// Address Range: [[0044ce60, 0044ce81]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_0044ce60(CDemonCamera *this_ptr,int skip_clear_buffers)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_0044ce60(CDemonCamera *this_ptr,int skip_clear_buffers)

{
  DAT_007c6120 = this_ptr;
  if (skip_clear_buffers != 0) {
    DAT_00857cd4 = this_ptr;
    return;
  }
  DAT_00857cd4 = (CDemonCamera *)0x0;
  return;
}
