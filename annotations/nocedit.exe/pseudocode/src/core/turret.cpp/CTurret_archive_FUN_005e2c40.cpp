// Name: core_turret.cpp_CTurret_archive_FUN_005e2c40
// Address: 005e2c40
// Address Range: [[005e2c40, 005e2d4c]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_archive_FUN_005e2c40(CTurret *this_ptr)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_archive_FUN_005e2c40(CTurret *this_ptr)

{
  core_weapon_cpp_CWeapon_archive_FUN_005ee250(&this_ptr->base);
  core_actor_cpp_archiveOrientation_FUN_0040b3e0
            ((COrientation *)this_ptr->unk1,"homeOrient");
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->state,"state");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->activate_event,"activateEvent");
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->charge_time,"chargeTime");
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->patrol_time,"patrolTime");
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->power_down_time,"powerDownTime");
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->fire_delay_time,"fireDelayTime");
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->timer,"timer");
  core_actor_cpp_archiveActor_FUN_0040b870
            ((CDemonActor *)&this_ptr->unk3,"guardZoneTriggerPtr");
  core_actor_cpp_archiveString_FUN_0040b5c0
            (this_ptr->allowed_victim_types,"allowedVictimTypes");
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->rotate_deg_per_sec,"rotateDegPerSec")
  ;
  if (g_CTurretClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->can_manual_aim,"canManualAim");
  return;
}
