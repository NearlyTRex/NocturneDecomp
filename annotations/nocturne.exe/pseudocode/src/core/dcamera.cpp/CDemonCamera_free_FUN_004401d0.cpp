// Name: core_dcamera.cpp_CDemonCamera_free_FUN_004401d0
// Address: 004401d0
// Address Range: [[004401d0, 00440234]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_free_FUN_004401d0(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_free_FUN_004401d0(CDemonCamera *this_ptr)

{
  if (this_ptr->framebuffer_raw != (void *)0x0) {
    FUN_005638d0(this_ptr->framebuffer_raw);
  }
  this_ptr->framebuffer_raw = (void *)0x0;
  this_ptr->framebuffer_aligned = (void *)0x0;
  if (this_ptr->zbuffer_raw != (void *)0x0) {
    FUN_005638d0(this_ptr->zbuffer_raw);
  }
  this_ptr->zbuffer_raw = (void *)0x0;
  this_ptr->rect_array_count = 0;
  this_ptr->zbuffer_aligned = (void *)0x0;
  return;
}
