// Name: core_dcamera.cpp_CDemonCamera_restoreZBufferScanlines_FUN_004512a0
// Address: 004512a0
// Address Range: [[004512a0, 004512ef]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferScanlines_FUN_004512a0(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferScanlines_FUN_004512a0(CDemonCamera *this_ptr)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < this_ptr->framebuffer_height) {
    do {
      iVar1 = iVar1 + 1;
      _memcpy(this_ptr->framebuffer_width << 2);
    } while (iVar1 < this_ptr->framebuffer_height);
  }
  return;
}
