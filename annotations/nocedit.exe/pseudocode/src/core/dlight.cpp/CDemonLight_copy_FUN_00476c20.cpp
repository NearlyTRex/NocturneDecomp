// Name: core_dlight.cpp_CDemonLight_copy_FUN_00476c20
// Address: 00476c20
// Address Range: [[00476c20, 00476c2e]]
// Convention: __cdecl
// Signature: CDemonLight * core_dlight.cpp_CDemonLight_copy_FUN_00476c20(CDemonLight * this_ptr, CDemonLight * other)

#include "nocturne.h"

CDemonLight * __cdecl
core_dlight_cpp_CDemonLight_copy_FUN_00476c20(CDemonLight *this_ptr,CDemonLight *other)

{
  (this_ptr->base).base.unk1 = (other->base).base.unk1;
  return this_ptr;
}
