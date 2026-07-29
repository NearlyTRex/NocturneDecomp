// Name: core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_00440240
// Address: 00440240
// Address Range: [[00440240, 00440261]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_00440240(CDemonCamera *this_ptr,int skip_clear_buffers)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_00440240(CDemonCamera *this_ptr,int skip_clear_buffers)

{
  _DAT_007f7370 = this_ptr;
  if (skip_clear_buffers != 0) {
    _DAT_007f7374 = this_ptr;
    return;
  }
  _DAT_007f7374 = (CDemonCamera *)0x0;
  return;
}
