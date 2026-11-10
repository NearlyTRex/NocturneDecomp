// Name: core_trigger.cpp_CTrigger_getCollisionType_FUN_005783a0
// Address: 005783a0
// Address Range: [[005783a0, 005783e7]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_trigger_cpp_CTrigger_getCollisionType_FUN_005783a0(CTrigger *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_trigger_cpp_CTrigger_getCollisionType_FUN_005783a0(CTrigger *this_ptr,SCollisionInfo *collision_info)

{
  if ((*(int *)collision_info == 1) &&
     ((this_ptr->trigger_cause == TRIGGER_CAUSE_BULLET ||
      (this_ptr->trigger_cause == TRIGGER_CAUSE_DAMAGE)))) {
    return COLLISION_TYPE_MESH;
  }
  if (((*(int *)collision_info == 3) && (this_ptr->trigger_cause == TRIGGER_CAUSE_LASER)) &&
     (this_ptr->laser_type == *(int *)&collision_info->field_0x4)) {
    return COLLISION_TYPE_MESH;
  }
  return COLLISION_TYPE_NONE;
}
