// Name: core_dlight.cpp_CDemonLight_initializeVisibilityBuffer_FUN_00451a60
// Address: 00451a60
// Address Range: [[00451a60, 00451a90]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_initializeVisibilityBuffer_FUN_00451a60(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_initializeVisibilityBuffer_FUN_00451a60(CDemonLight *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = this_ptr->shadow_map_width * this_ptr->shadow_map_height;
  iVar2 = iVar1 >> 0x1f;
  _memset
            (this_ptr->lightmap_visibility_bits,0,
             (int)((iVar1 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3);
  return;
}
