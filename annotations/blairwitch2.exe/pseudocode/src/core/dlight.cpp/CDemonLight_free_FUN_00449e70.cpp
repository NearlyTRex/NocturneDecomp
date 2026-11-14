// Name: core_dlight.cpp_CDemonLight_free_FUN_00449e70
// Address: 00449e70
// Address Range: [[00449e70, 00449eef]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_free_FUN_00449e70(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_free_FUN_00449e70(CDemonLight *this_ptr)

{
  if (this_ptr->shadow_depth_buffer != (ushort *)0x0) {
    FUN_005b86a0(this_ptr->shadow_buffer_raw);
    this_ptr->shadow_depth_buffer = (ushort *)0x0;
    this_ptr->shadow_buffer_raw = (void *)0x0;
  }
  core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_00449ff0(this_ptr);
  if (this_ptr->lightmap_visibility_bits != (uchar *)0x0) {
    FUN_005b86a0(this_ptr->lightmap_visibility_bits);
    this_ptr->lightmap_visibility_bits = (uchar *)0x0;
  }
  if (this_ptr->filter_buffer == (uchar *)0x0) {
    return;
  }
  FUN_005b86a0(this_ptr->filter_buffer);
  this_ptr->filter_buffer = (uchar *)0x0;
  return;
}
