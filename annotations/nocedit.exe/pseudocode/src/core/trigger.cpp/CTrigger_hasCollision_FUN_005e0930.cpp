// Name: core_trigger.cpp_CTrigger_hasCollision_FUN_005e0930
// Address: 005e0930
// Address Range: [[005e0930, 005e0977]]
// Convention: __cdecl
// Signature: int __cdecl core_trigger_cpp_CTrigger_hasCollision_FUN_005e0930(CTrigger *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

int __cdecl core_trigger_cpp_CTrigger_hasCollision_FUN_005e0930(CTrigger *this_ptr,SCollisionInfo *collision_info)

{
  if ((collision_info->ray_type == 1) &&
     ((this_ptr->hero_triggers_me == 4 || (this_ptr->hero_triggers_me == 7)))) {
    return 1;
  }
  if (((collision_info->ray_type == 3) && (this_ptr->hero_triggers_me == 5)) &&
     (this_ptr->laser_type == collision_info->laser_type)) {
    return 1;
  }
  return 0;
}
