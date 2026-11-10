// Name: core_turret.cpp_CTurret_archive_FUN_005a2bf0
// Address: 005a2bf0
// Address Range: [[005a2bf0, 005a2cfc]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_archive_FUN_005a2bf0(CTurret *this_ptr)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_archive_FUN_005a2bf0(CTurret *this_ptr)

{
  core_weapon_cpp_CWeapon_archive_FUN_005ad8b0(&this_ptr->base);
  core_actor_cpp_archiveOrientation_FUN_0040b260(&this_ptr->home_orient,"homeOrient");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->state,"state");
  core_actor_cpp_archiveString_FUN_0040b440(this_ptr->activate_event,"activateEvent");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->charge_time,"chargeTime");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->patrol_time,"patrolTime");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->power_down_time,"powerDownTime");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->fire_delay_time,"fireDelayTime");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->timer,"timer");
  core_actor_cpp_archiveActor_FUN_0040b6f0
            (&this_ptr->guard_zone_box_trigger,"guardZoneTriggerPtr");
  core_actor_cpp_archiveString_FUN_0040b440
            (this_ptr->allowed_victim_types,"allowedVictimTypes");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->rotate_deg_per_sec,"rotateDegPerSec")
  ;
  if (g_CTurretClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->can_manual_aim,"canManualAim");
  return;
}
