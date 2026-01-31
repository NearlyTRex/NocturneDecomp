// Name: core_melee.cpp_CMelee_serialize_FUN_0050e920
// Address: 0050e920
// Address Range: [[0050e920, 0050ea3a]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_CMelee_serialize_FUN_0050e920(CMelee *this_ptr)

#include "nocturne.h"

void __cdecl core_melee_cpp_CMelee_serialize_FUN_0050e920(CMelee *this_ptr)

{
  core_weapon_cpp_CWeapon_serialize_FUN_005ee250(&this_ptr->base);
  if (1 < g_CMeleeClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              (&this_ptr->allowed_attack_types,"allowedAttackTypes");
  }
  if (2 < g_CMeleeClassVersion) {
    core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->strength_lo,"strengthLo");
    core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->strength_hi,"strengthHi");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              (&(this_ptr->base).can_attach_light,"canAttachLight");
  }
  if (3 < g_CMeleeClassVersion) {
    core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->dismember_prob,"dismemberProb");
  }
  if (4 < g_CMeleeClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              (&this_ptr->can_go_in_inventory,"canGoInInventory");
  }
  if (5 < g_CMeleeClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->ammo_type,"ammoType");
  }
  if (g_CMeleeClassVersion < 7) {
    return;
  }
  core_actor_cpp_serializeString_FUN_0040b5c0
            (&this_ptr->thrust_hit_character_sound,"thrustHitCharacterSound");
  core_actor_cpp_serializeString_FUN_0040b5c0
            (&this_ptr->swing_hit_character_sound,"swingHitCharacterSound");
  core_actor_cpp_serializeString_FUN_0040b5c0(&this_ptr->hit_other_sound,"hitOtherSound");
  return;
}
