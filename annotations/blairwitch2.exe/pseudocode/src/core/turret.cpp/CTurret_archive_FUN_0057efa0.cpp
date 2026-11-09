// Name: core_turret.cpp_CTurret_archive_FUN_0057efa0
// Address: 0057efa0
// Address Range: [[0057efa0, 0057f0ac]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_archive_FUN_0057efa0(CTurret *this_ptr)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_archive_FUN_0057efa0(CTurret *this_ptr)

{
  core_weapon_cpp_CWeapon_archive_FUN_00589d60((CWeapon *)this_ptr);
  core_actor_cpp_archiveOrientation_FUN_0040b550(&this_ptr->field_0x6d4,"homeOrient");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x85c,"state");
  core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x860,"activateEvent");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x8c4,"chargeTime");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x8c8,"patrolTime");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x8cc,"powerDownTime");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x8d0,"fireDelayTime");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x8d8,"timer");
  core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x8dc,"guardZoneTriggerPtr");
  core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x8e0,"allowedVictimTypes");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x8d4,"rotateDegPerSec");
  if (g_CTurretClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x9b4,"canManualAim");
  return;
}
