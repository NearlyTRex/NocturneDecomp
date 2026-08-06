// Name: core_dlight.cpp_CDemonLight_FUN_0044e2c0
// Address: 0044e2c0
// Address Range: [[0044e2c0, 0044e33f]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_FUN_0044e2c0(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_FUN_0044e2c0(CDemonLight *this_ptr)

{
  if (this_ptr->shadow_depth_buffer != (ushort *)0x0) {
    free(this_ptr->shadow_buffer_raw);
    this_ptr->shadow_depth_buffer = (ushort *)0x0;
    this_ptr->shadow_buffer_raw = (void *)0x0;
  }
  core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_0044e440(this_ptr);
  if (this_ptr->lightmap_visibility_bits != (uchar *)0x0) {
    free(this_ptr->lightmap_visibility_bits);
    this_ptr->lightmap_visibility_bits = (uchar *)0x0;
  }
  if (this_ptr->filter_buffer == (uchar *)0x0) {
    return;
  }
  free(this_ptr->filter_buffer);
  this_ptr->filter_buffer = (uchar *)0x0;
  return;
}
