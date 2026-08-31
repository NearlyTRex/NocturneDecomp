// Name: core_weapon.cpp_CWeapon_archive_FUN_00554170
// Address: 00554170
// Address Range: [[00554170, 0055424b]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_archive_FUN_00554170(CWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_archive_FUN_00554170(CWeapon *this_ptr)

{
  char local_104 [256];
  
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(&this_ptr->model,"modelName");
  if (2 < INT_005c1590) {
    core_actor_cpp_archiveActor_FUN_0040c980(&this_ptr->carried_by_actor,"carriedByActor");
  }
  if (3 < INT_005c1590) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)&this_ptr->weapon_state,"weaponState");
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->ammo_count,"ammoCount");
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->ammo_type,"ammoType");
  }
  if (INT_005c1590 == 5) {
    core_actor_cpp_archiveLocalizedString_FUN_0040c7f0(local_104,"descriptiveName");
  }
  if (INT_005c1590 < 7) {
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->sim_timer,"simTimer");
  return;
}
