// Name: core_dcamera.cpp_CDemonCamera_saveZBufferScanlines_FUN_00454450
// Address: 00454450
// MANUAL RECONSTRUCTION
// Address Range: [[00454450, 0045449f]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_saveZBufferScanlines_FUN_00454450(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_saveZBufferScanlines_FUN_00454450(CDemonCamera *this_ptr)

{
  int iVar2;

  iVar2 = 0;
  if (0 < this_ptr->framebuffer_height) {
    do {
      _memcpy((uint *)this_ptr->zbuffer_aligned + this_ptr->framebuffer_width * iVar2,
              g_ZBufferScanlineArray[iVar2],
              this_ptr->framebuffer_width << 2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < this_ptr->framebuffer_height);
  }
  return;
}
