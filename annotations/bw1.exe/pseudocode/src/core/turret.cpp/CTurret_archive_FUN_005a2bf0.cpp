// Name: core_turret.cpp_CTurret_archive_FUN_005a2bf0
// Address: 005a2bf0
// Address Range: [[005a2bf0, 005a2cfc]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_archive_FUN_005a2bf0(CTurret *this_ptr)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_archive_FUN_005a2bf0(CTurret *this_ptr)

{
  core_weapon_cpp_CWeapon_archive_FUN_005ad8b0((CWeapon *)this_ptr);
  core_actor_cpp_archiveOrientation_FUN_0040b260(&this_ptr->field_0x578,"homeOrient");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x700,"state");
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x704,"activateEvent");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x768,"chargeTime");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x76c,"patrolTime");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x770,"powerDownTime");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x774,"fireDelayTime");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x77c,"timer");
  core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->field_0x780,"guardZoneTriggerPtr");
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x784,"allowedVictimTypes");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x778,"rotateDegPerSec");
  if (g_CTurretClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x858,"canManualAim");
  return;
}
