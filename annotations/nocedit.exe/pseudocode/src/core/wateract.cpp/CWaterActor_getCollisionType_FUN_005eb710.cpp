// Name: core_wateract.cpp_CWaterActor_getCollisionType_FUN_005eb710
// Address: 005eb710
// Address Range: [[005eb710, 005eb720]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_wateract_cpp_CWaterActor_getCollisionType_FUN_005eb710(CWaterActor *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_wateract_cpp_CWaterActor_getCollisionType_FUN_005eb710(CWaterActor *this_ptr,SCollisionInfo *collision_info)

{
  if (collision_info->ray_type == 3) {
    return COLLISION_TYPE_CUSTOM;
  }
  return COLLISION_TYPE_NONE;
}
