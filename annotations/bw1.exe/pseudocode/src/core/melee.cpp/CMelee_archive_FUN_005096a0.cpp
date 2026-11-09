// Name: core_melee.cpp_CMelee_archive_FUN_005096a0
// Address: 005096a0
// Address Range: [[005096a0, 005097ba]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_CMelee_archive_FUN_005096a0(CMelee *this_ptr)

#include "nocturne.h"

void __cdecl core_melee_cpp_CMelee_archive_FUN_005096a0(CMelee *this_ptr)

{
  core_weapon_cpp_CWeapon_archive_FUN_005ad8b0((CWeapon *)this_ptr);
  if (1 < g_CMeleeClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&this_ptr->field_0x578,"allowedAttackTypes");
  }
  if (2 < g_CMeleeClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x57c,"strengthLo");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x580,"strengthHi");
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&this_ptr->field_0x2f0,"canAttachLight");
  }
  if (3 < g_CMeleeClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x584,"dismemberProb");
  }
  if (4 < g_CMeleeClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&this_ptr->field_0x588,"canGoInInventory");
  }
  if (5 < g_CMeleeClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x59c,"ammoType");
  }
  if (g_CMeleeClassVersion < 7) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b440
            (&this_ptr->field_0x5a0,"thrustHitCharacterSound");
  core_actor_cpp_archiveString_FUN_0040b440
            (&this_ptr->field_0x604,"swingHitCharacterSound");
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x668,"hitOtherSound");
  return;
}
