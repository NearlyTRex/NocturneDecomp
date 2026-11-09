// Name: core_dlight.cpp_CDemonLight_initializeVisibilityBuffer_FUN_0045f490
// Address: 0045f490
// Address Range: [[0045f490, 0045f4c0]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_initializeVisibilityBuffer_FUN_0045f490(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_initializeVisibilityBuffer_FUN_0045f490(CDemonLight *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)&this_ptr->field_0x1cc0 * *(int *)&this_ptr->field_0x1cc4;
  iVar2 = iVar1 >> 0x1f;
  _memset((int)((iVar1 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3);
  return;
}
