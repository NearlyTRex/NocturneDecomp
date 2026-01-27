// Name: core_melee.cpp_CMelee_load_FUN_0050e920
// Address: 0050e920
// Address Range: [[0050e920, 0050ea3a]]
// Convention: unknown
// Signature: undefined core_melee.cpp_CMelee_load_FUN_0050e920()

#include "nocturne.h"

/* Signature: byte actors_weapon_melee.cpp_CMelee_load(CMelee* pMelee) */

void core_melee_cpp_CMelee_load_FUN_0050e920(void)

{
  CWeapon *in_stack_00000004;
  
  core_weapon_cpp_CWeapon_serialize_FUN_005ee250(in_stack_00000004);
  if (1 < g_CMeleeClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004 + 1),"allowedAttackTypes");
  }
  if (2 < g_CMeleeClassVersion) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)(in_stack_00000004[1].base.actor_name + 4),"strengthLo");
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)(in_stack_00000004[1].base.actor_name + 8),"strengthHi");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              (&in_stack_00000004->can_attach_light,"canAttachLight");
  }
  if (3 < g_CMeleeClassVersion) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)(in_stack_00000004[1].base.actor_name + 0xc),"dismemberProb");
  }
  if (4 < g_CMeleeClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004[1].base.actor_name + 0x10),"canGoInInventory");
  }
  if (5 < g_CMeleeClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[1].base.location.position.y,"ammoType");
  }
  if (g_CMeleeClassVersion < 7) {
    return;
  }
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[1].base.location.position.z,
             "thrustHitCharacterSound");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[1].base.create_event + 0x14),
             "swingHitCharacterSound");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[1].base.unk4.y,"hitOtherSound");
  return;
}
