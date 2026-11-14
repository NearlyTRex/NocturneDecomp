// Name: core_dcamera.cpp_CDemonCamera_restoreZBufferScanlines_FUN_00443aa0
// Address: 00443aa0
// Address Range: [[00443aa0, 00443aef]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferScanlines_FUN_00443aa0(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferScanlines_FUN_00443aa0(CDemonCamera *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < this_ptr->framebuffer_height) {
    iVar3 = 0;
    do {
      iVar1 = this_ptr->framebuffer_width * iVar2;
      iVar2 = iVar2 + 1;
      _memcpy
                (*(void **)(&DAT_01c2b64c + iVar3),
                 (void *)(iVar1 * 4 + (int)this_ptr->zbuffer_aligned),
                 this_ptr->framebuffer_width << 2);
      iVar3 = iVar3 + 4;
    } while (iVar2 < this_ptr->framebuffer_height);
  }
  return;
}
