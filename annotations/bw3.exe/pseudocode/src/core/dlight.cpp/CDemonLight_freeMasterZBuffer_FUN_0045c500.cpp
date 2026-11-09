// Name: core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_0045c500
// Address: 0045c500
// Address Range: [[0045c500, 0045c522]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_0045c500(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_0045c500(CDemonLight *this_ptr)

{
  if (*(int *)&this_ptr->field_0x2f9c == 0) {
    return;
  }
  *(uint *)&this_ptr->field_0x164 = 0;
  *(uint *)&this_ptr->field_0x2f9c = 0;
  return;
}
