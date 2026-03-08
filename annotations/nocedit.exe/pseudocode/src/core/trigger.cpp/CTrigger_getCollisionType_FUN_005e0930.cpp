// Name: core_trigger.cpp_CTrigger_getCollisionType_FUN_005e0930
// Address: 005e0930
// Address Range: [[005e0930, 005e0977]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_trigger_cpp_CTrigger_getCollisionType_FUN_005e0930(CTrigger *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_trigger_cpp_CTrigger_getCollisionType_FUN_005e0930(CTrigger *this_ptr,SCollisionInfo *collision_info)

{
  if ((collision_info->ray_type == 1) &&
     ((this_ptr->hero_triggers_me == 4 || (this_ptr->hero_triggers_me == 7)))) {
    return COLLISION_TYPE_MESH;
  }
  if (((collision_info->ray_type == 3) && (this_ptr->hero_triggers_me == 5)) &&
     (this_ptr->laser_type == collision_info->laser_type)) {
    return COLLISION_TYPE_MESH;
  }
  return COLLISION_TYPE_NONE;
}
