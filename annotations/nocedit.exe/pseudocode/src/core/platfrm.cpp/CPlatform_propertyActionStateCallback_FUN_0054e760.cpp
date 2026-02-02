// Name: core_platfrm.cpp_CPlatform_propertyActionStateCallback_FUN_0054e760
// Address: 0054e760
// Address Range: [[0054e760, 0054e7c8]]
// Convention: __cdecl
// Signature: int __cdecl core_platfrm_cpp_CPlatform_propertyActionStateCallback_FUN_0054e760(CPlatform *this_ptr)

#include "nocturne.h"

int __cdecl core_platfrm_cpp_CPlatform_propertyActionStateCallback_FUN_0054e760(CPlatform *this_ptr)

{
  CPlatform *this_ptr_00;
  
  this_ptr_00 = (CPlatform *)
                core_actor_cpp_castToClassHash_FUN_0040c790
                          (&this_ptr->base,g_CPlatformClassInfo.name_hash);
  if (this_ptr_00->state == PLATFORM_STATE_TYPE_AT_START) {
    this_ptr_00->param = 1.0;
    this_ptr_00->state = PLATFORM_STATE_TYPE_AT_END;
    core_platfrm_cpp_CPlatform_FUN_0054cab0(this_ptr_00);
    return 1;
  }
  this_ptr_00->param = 0.0;
  this_ptr_00->state = PLATFORM_STATE_TYPE_AT_START;
  core_platfrm_cpp_CPlatform_FUN_0054cab0(this_ptr_00);
  return 1;
}
