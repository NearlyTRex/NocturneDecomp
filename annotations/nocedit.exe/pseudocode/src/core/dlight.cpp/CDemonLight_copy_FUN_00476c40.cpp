// Name: core_dlight.cpp_CDemonLight_copy_FUN_00476c40
// Address: 00476c40
// Address Range: [[00476c40, 00476c4e]]
// Convention: __cdecl
// Signature: CDemonLight * core_dlight.cpp_CDemonLight_copy_FUN_00476c40(CDemonLight * this_ptr, CDemonLight * other)

#include "nocturne.h"

CDemonLight * __cdecl
core_dlight_cpp_CDemonLight_copy_FUN_00476c40(CDemonLight *this_ptr,CDemonLight *other)

{
  (this_ptr->base).base.unk1 = (other->base).base.unk1;
  return this_ptr;
}
