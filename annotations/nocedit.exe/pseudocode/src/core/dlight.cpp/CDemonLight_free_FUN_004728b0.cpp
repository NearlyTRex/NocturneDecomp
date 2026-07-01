// Name: core_dlight.cpp_CDemonLight_free_FUN_004728b0
// Address: 004728b0
// Address Range: [[004728b0, 0047294d]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_free_FUN_004728b0(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_free_FUN_004728b0(CDemonLight *this_ptr)

{
  if (this_ptr->shadow_depth_buffer != (ushort *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (this_ptr->shadow_buffer_raw,"..\\core\\dlight.cpp",132);
    this_ptr->shadow_depth_buffer = (ushort *)0x0;
    this_ptr->shadow_buffer_raw = (void *)0x0;
  }
  core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_00472a50(this_ptr);
  if (this_ptr->lightmap_visibility_bits != (uchar *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (this_ptr->lightmap_visibility_bits,"..\\core\\dlight.cpp",140);
    this_ptr->lightmap_visibility_bits = (uchar *)0x0;
  }
  if (this_ptr->filter_buffer == (uchar *)0x0) {
    return;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->filter_buffer,"..\\core\\dlight.cpp",145);
  this_ptr->filter_buffer = (uchar *)0x0;
  return;
}
