// Name: core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_00449ff0
// Address: 00449ff0
// Address Range: [[00449ff0, 0044a012]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_00449ff0(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_00449ff0(CDemonLight *this_ptr)

{
  if (*(int *)&this_ptr->field_0x2f9c == 0) {
    return;
  }
  *(uint *)&this_ptr->field_0x164 = 0;
  *(uint *)&this_ptr->field_0x2f9c = 0;
  return;
}
