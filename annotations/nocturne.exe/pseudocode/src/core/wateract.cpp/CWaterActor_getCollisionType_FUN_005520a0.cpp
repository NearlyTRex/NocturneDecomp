// Name: core_wateract.cpp_CWaterActor_getCollisionType_FUN_005520a0
// Address: 005520a0
// Address Range: [[005520a0, 005520b0]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_wateract_cpp_CWaterActor_getCollisionType_FUN_005520a0(CWaterActor *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_wateract_cpp_CWaterActor_getCollisionType_FUN_005520a0(CWaterActor *this_ptr,SCollisionInfo *collision_info)

{
  if ((collision_info->ray_query).ray_type == 3) {
    return COLLISION_TYPE_CUSTOM;
  }
  return COLLISION_TYPE_NONE;
}
