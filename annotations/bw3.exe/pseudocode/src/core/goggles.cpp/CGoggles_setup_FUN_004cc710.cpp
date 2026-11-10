// Name: core_goggles.cpp_CGoggles_setup_FUN_004cc710
// Address: 004cc710
// Address Range: [[004cc710, 004cc72f]]
// Convention: __cdecl
// Signature: void __cdecl core_goggles_cpp_CGoggles_setup_FUN_004cc710(CGoggles *this_ptr)

#include "nocturne.h"

void __cdecl core_goggles_cpp_CGoggles_setup_FUN_004cc710(CGoggles *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408890((CDemonActor *)this_ptr);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
            ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
  return;
}
