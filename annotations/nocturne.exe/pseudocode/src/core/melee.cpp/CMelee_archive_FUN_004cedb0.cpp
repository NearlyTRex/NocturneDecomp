// Name: core_melee.cpp_CMelee_archive_FUN_004cedb0
// Address: 004cedb0
// Address Range: [[004cedb0, 004ceeca]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_CMelee_archive_FUN_004cedb0(CMelee *this_ptr)

#include "nocturne.h"

void __cdecl core_melee_cpp_CMelee_archive_FUN_004cedb0(CMelee *this_ptr)

{
  core_weapon_cpp_CWeapon_archive_FUN_00554170(&this_ptr->base);
  if (1 < INT_005bade4) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              (&this_ptr->allowed_attack_types,"allowedAttackTypes");
  }
  if (2 < INT_005bade4) {
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->strength_lo,"strengthLo");
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->strength_hi,"strengthHi");
    core_actor_cpp_archiveInteger_FUN_0040c900
              (&(this_ptr->base).can_attach_light,"canAttachLight");
  }
  if (3 < INT_005bade4) {
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->dismember_prob,"dismemberProb");
  }
  if (4 < INT_005bade4) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              (&this_ptr->can_go_in_inventory,"canGoInInventory");
  }
  if (5 < INT_005bade4) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->ammo_type,"ammoType");
  }
  if (INT_005bade4 < 7) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040c6d0
            (this_ptr->thrust_hit_character_sound,"thrustHitCharacterSound");
  core_actor_cpp_archiveString_FUN_0040c6d0
            (this_ptr->swing_hit_character_sound,"swingHitCharacterSound");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->hit_other_sound,"hitOtherSound");
  return;
}
