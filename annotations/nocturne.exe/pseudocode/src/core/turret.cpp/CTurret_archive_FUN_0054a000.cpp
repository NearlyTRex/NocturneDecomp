// Name: core_turret.cpp_CTurret_archive_FUN_0054a000
// Address: 0054a000
// Address Range: [[0054a000, 0054a10c]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_archive_FUN_0054a000(CTurret *this_ptr)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_archive_FUN_0054a000(CTurret *this_ptr)

{
  core_weapon_cpp_CWeapon_archive_FUN_00554170(&this_ptr->base);
  core_actor_cpp_archiveOrientation_FUN_0040c4f0
            (&(this_ptr->home_orient).orient,"homeOrient");
  core_actor_cpp_archiveInteger_FUN_0040c900((int *)&this_ptr->state,"state");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->activate_event,"activateEvent");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->charge_time,"chargeTime");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->patrol_time,"patrolTime");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->power_down_time,"powerDownTime");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->fire_delay_time,"fireDelayTime");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->timer,"timer");
  core_actor_cpp_archiveActor_FUN_0040c980
            (&this_ptr->guard_zone_box_trigger,"guardZoneTriggerPtr");
  core_actor_cpp_archiveString_FUN_0040c6d0
            (this_ptr->allowed_victim_types,"allowedVictimTypes");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->rotate_deg_per_sec,"rotateDegPerSec")
  ;
  if (INT_005c1160 < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->can_manual_aim,"canManualAim");
  return;
}
