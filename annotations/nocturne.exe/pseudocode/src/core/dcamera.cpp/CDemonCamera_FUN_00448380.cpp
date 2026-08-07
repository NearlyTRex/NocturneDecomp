// Name: core_dcamera.cpp_CDemonCamera_FUN_00448380
// Address: 00448380
// Address Range: [[00448380, 004483e2]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_FUN_00448380(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_FUN_00448380(CDemonCamera *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < (int)this_ptr->max_distance) {
    do {
      iVar2 = this_ptr->screen_width * iVar3;
      iVar1 = this_ptr->framebuffer_height + iVar3;
      iVar3 = iVar3 + 1;
      _memcpy
                (g_ZBufferScanlineArray[iVar1] + this_ptr->framebuffer_width,
                 (void *)(iVar2 * 4 + (int)this_ptr->zbuffer_aligned),this_ptr->screen_width << 2);
    } while (iVar3 < (int)this_ptr->max_distance);
  }
  return;
}
