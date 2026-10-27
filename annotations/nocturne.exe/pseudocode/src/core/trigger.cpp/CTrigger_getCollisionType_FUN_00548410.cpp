// Name: core_trigger.cpp_CTrigger_getCollisionType_FUN_00548410
// Address: 00548410
// Address Range: [[00548410, 00548457]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_trigger_cpp_CTrigger_getCollisionType_FUN_00548410(CTrigger *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_trigger_cpp_CTrigger_getCollisionType_FUN_00548410(CTrigger *this_ptr,SCollisionInfo *collision_info)

{
  if (((collision_info->ray_query).ray_type == 1) &&
     ((this_ptr->trigger_cause == TRIGGER_CAUSE_BULLET ||
      (this_ptr->trigger_cause == TRIGGER_CAUSE_DAMAGE)))) {
    return COLLISION_TYPE_MESH;
  }
  if ((((collision_info->ray_query).ray_type == 3) &&
      (this_ptr->trigger_cause == TRIGGER_CAUSE_LASER)) &&
     (this_ptr->laser_type == (collision_info->ray_query).laser_type)) {
    return COLLISION_TYPE_MESH;
  }
  return COLLISION_TYPE_NONE;
}
