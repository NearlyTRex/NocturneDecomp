// Name: core_dcamera.cpp_CDemonCamera_saveZBufferScanlines_FUN_00448310
// Address: 00448310
// Address Range: [[00448310, 00448372]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_saveZBufferScanlines_FUN_00448310(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_saveZBufferScanlines_FUN_00448310(CDemonCamera *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < (int)this_ptr->max_distance) {
    do {
      iVar1 = this_ptr->screen_width * iVar3;
      iVar2 = this_ptr->framebuffer_height + iVar3;
      iVar3 = iVar3 + 1;
      _memcpy
                ((void *)(iVar1 * 4 + (int)this_ptr->zbuffer_aligned),
                 g_ZBufferScanlineArray[iVar2] + this_ptr->framebuffer_width,
                 this_ptr->screen_width << 2);
    } while (iVar3 < (int)this_ptr->max_distance);
  }
  return;
}
