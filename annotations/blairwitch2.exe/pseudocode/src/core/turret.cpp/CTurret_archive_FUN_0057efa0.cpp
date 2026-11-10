// Name: core_turret.cpp_CTurret_archive_FUN_0057efa0
// Address: 0057efa0
// Address Range: [[0057efa0, 0057f0ac]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_archive_FUN_0057efa0(CTurret *this_ptr)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_archive_FUN_0057efa0(CTurret *this_ptr)

{
  core_weapon_cpp_CWeapon_archive_FUN_00589d60(&this_ptr->base);
  core_actor_cpp_archiveOrientation_FUN_0040b550(&this_ptr->home_orient,"homeOrient");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->state,"state");
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->activate_event,"activateEvent");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->charge_time,"chargeTime");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->patrol_time,"patrolTime");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->power_down_time,"powerDownTime");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->fire_delay_time,"fireDelayTime");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->timer,"timer");
  core_actor_cpp_archiveActor_FUN_0040b9e0
            (&this_ptr->guard_zone_box_trigger,"guardZoneTriggerPtr");
  core_actor_cpp_archiveString_FUN_0040b730
            (this_ptr->allowed_victim_types,"allowedVictimTypes");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->rotate_deg_per_sec,"rotateDegPerSec")
  ;
  if (g_CTurretClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->can_manual_aim,"canManualAim");
  return;
}
