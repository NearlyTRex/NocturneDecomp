// Name: core_dcamera.cpp_CDemonCamera_free_FUN_0044c360
// Address: 0044c360
// Address Range: [[0044c360, 0044c3d8]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_free_FUN_0044c360(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_free_FUN_0044c360(CDemonCamera *this_ptr)

{
  if (this_ptr->framebuffer_raw != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (this_ptr->framebuffer_raw,"..\\core\\dcamera.cpp",602);
  }
  this_ptr->framebuffer_raw = (void *)0x0;
  this_ptr->framebuffer_aligned = (void *)0x0;
  if (this_ptr->zbuffer_raw != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->zbuffer_raw,"..\\core\\dcamera.cpp",606)
    ;
  }
  this_ptr->zbuffer_raw = (void *)0x0;
  this_ptr->rect_array_count = 0;
  this_ptr->zbuffer_aligned = (void *)0x0;
  return;
}
