// Name: core_dcamera.cpp_CDemonCamera_restoreZBufferScanlines_FUN_004544a0
// Address: 004544a0
// Address Range: [[004544a0, 004544ef]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_restoreZBufferScanlines_FUN_004544a0(CDemonCamera * this_ptr)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_restoreZBufferScanlines_FUN_004544a0(CDemonCamera *this_ptr)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < this_ptr->framebuffer_height) {
    do {
      iVar1 = iVar1 + 1;
      core_event_cpp_FUN_004b1a78();
    } while (iVar1 < this_ptr->framebuffer_height);
  }
  return;
}
