// Name: core_wateract.cpp_CWaterActor_getCollisionType_FUN_005ab500
// Address: 005ab500
// Address Range: [[005ab500, 005ab510]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_wateract_cpp_CWaterActor_getCollisionType_FUN_005ab500(CWaterActor *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_wateract_cpp_CWaterActor_getCollisionType_FUN_005ab500(CWaterActor *this_ptr,SCollisionInfo *collision_info)

{
  if ((collision_info->ray_query).ray_type == 3) {
    return COLLISION_TYPE_CUSTOM;
  }
  return COLLISION_TYPE_NONE;
}
