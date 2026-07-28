// Name: core_setutil.cpp_C3DSLight_reset_FUN_00515800
// Address: 00515800
// Address Range: [[00515800, 00515886]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_reset_FUN_00515800(C3DSLight *this_ptr)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_reset_FUN_00515800(C3DSLight *this_ptr)

{
  (this_ptr->size).x = 0x100;
  (this_ptr->size).y = 0x100;
  this_ptr->on_time = 1.0;
  this_ptr->cycle_time = 1.0;
  this_ptr->cycle_elapsed = 0.0;
  this_ptr->current_filter_frame = 0;
  this_ptr->filter_frame_elapsed = 0.0;
  this_ptr->atten_start = 0.0;
  this_ptr->atten_end = 0.0;
  this_ptr->fov = 28.0;
  this_ptr->aspect = 1.0;
  this_ptr->intensity = 1.0;
  this_ptr->filter_count = 0;
  return;
}
