// Name: core_dcamera.cpp_CDemonCamera_restoreZBufferScanlines_FUN_004544a0
// Address: 004544a0
// MANUAL RECONSTRUCTION
// Address Range: [[004544a0, 004544ef]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferScanlines_FUN_004544a0(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferScanlines_FUN_004544a0(CDemonCamera *this_ptr)

{
  int iVar2;

  iVar2 = 0;
  if (0 < this_ptr->framebuffer_height) {
    do {
      _memcpy(g_ZBufferScanlineArray[iVar2],
              (uint *)this_ptr->zbuffer_aligned + this_ptr->framebuffer_width * iVar2,
              this_ptr->framebuffer_width << 2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < this_ptr->framebuffer_height);
  }
  return;
}
