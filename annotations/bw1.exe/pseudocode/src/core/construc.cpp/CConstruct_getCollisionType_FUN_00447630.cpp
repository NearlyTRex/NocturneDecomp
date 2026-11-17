// Name: core_construc.cpp_CConstruct_getCollisionType_FUN_00447630
// Address: 00447630
// Address Range: [[00447630, 00447659]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_construc_cpp_CConstruct_getCollisionType_FUN_00447630(CConstruct *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_construc_cpp_CConstruct_getCollisionType_FUN_00447630(CConstruct *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  if ((collision_info->ray_query).ray_type == 4) {
    return COLLISION_TYPE_MESH;
  }
  if (this_ptr->blown_up != 0) {
    return COLLISION_TYPE_NONE;
  }
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_004310b0
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}
