// Name: core_dcamera.cpp_CDemonCamera_free_FUN_00448f30
// Address: 00448f30
// Address Range: [[00448f30, 00448f94]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_free_FUN_00448f30(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_free_FUN_00448f30(CDemonCamera *this_ptr)

{
  if (this_ptr->framebuffer_raw != (void *)0x0) {
    FUN_005a3770(this_ptr->framebuffer_raw);
  }
  this_ptr->framebuffer_raw = (void *)0x0;
  this_ptr->framebuffer_aligned = (void *)0x0;
  if (this_ptr->zbuffer_raw != (void *)0x0) {
    FUN_005a3770(this_ptr->zbuffer_raw);
  }
  this_ptr->zbuffer_raw = (void *)0x0;
  this_ptr->rect_array_count = 0;
  this_ptr->zbuffer_aligned = (void *)0x0;
  return;
}
