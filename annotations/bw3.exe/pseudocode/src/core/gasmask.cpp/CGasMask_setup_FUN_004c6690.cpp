// Name: core_gasmask.cpp_CGasMask_setup_FUN_004c6690
// Address: 004c6690
// Address Range: [[004c6690, 004c66af]]
// Convention: __cdecl
// Signature: void __cdecl core_gasmask_cpp_CGasMask_setup_FUN_004c6690(CGasMask *this_ptr)

#include "nocturne.h"

void __cdecl core_gasmask_cpp_CGasMask_setup_FUN_004c6690(CGasMask *this_ptr)

{
  core_actor_cpp_FUN_00408890((CDemonActor *)this_ptr);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
            ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
  return;
}
