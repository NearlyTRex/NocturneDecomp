// Name: core_dlight.cpp_CDemonLight_initializeVisibilityBuffer_FUN_00475fc0
// Address: 00475fc0
// MANUAL RECONSTRUCTION
// Address Range: [[00475fc0, 00475ff0]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_initializeVisibilityBuffer_FUN_00475fc0(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_initializeVisibilityBuffer_FUN_00475fc0(CDemonLight *this_ptr)

{
  int iVar1;

  iVar1 = this_ptr->shadow_map_width * this_ptr->shadow_map_height;
  _memset(this_ptr->lightmap_visibility_bits,0,iVar1 / 8);
  return;
}
