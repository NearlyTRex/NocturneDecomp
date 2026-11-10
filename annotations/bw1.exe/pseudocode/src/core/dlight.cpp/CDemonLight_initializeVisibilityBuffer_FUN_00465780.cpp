// Name: core_dlight.cpp_CDemonLight_initializeVisibilityBuffer_FUN_00465780
// Address: 00465780
// Address Range: [[00465780, 004657b0]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_initializeVisibilityBuffer_FUN_00465780(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_initializeVisibilityBuffer_FUN_00465780(CDemonLight *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = this_ptr->shadow_map_width * this_ptr->shadow_map_height;
  iVar2 = iVar1 >> 0x1f;
  _memset((int)((iVar1 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3);
  return;
}
