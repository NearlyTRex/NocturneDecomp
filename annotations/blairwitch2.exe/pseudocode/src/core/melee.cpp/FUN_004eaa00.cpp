// Name: core_melee.cpp_FUN_004eaa00
// Address: 004eaa00
// Address Range: [[004eaa00, 004eab1a]]
// Convention: unknown
// Signature: void core_melee_cpp_FUN_004eaa00(CWeapon *param_1)

#include "nocturne.h"

void core_melee_cpp_FUN_004eaa00(CWeapon *param_1)

{
  core_weapon_cpp_CWeapon_archive_FUN_00589d60(param_1);
  if (1 < g_CMeleeClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)(param_1 + 1),"allowedAttackTypes");
  }
  if (2 < g_CMeleeClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x4,"strengthLo");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x8,"strengthHi");
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&param_1->field_0x44c,"canAttachLight");
  }
  if (3 < g_CMeleeClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0xc,"dismemberProb");
  }
  if (4 < g_CMeleeClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&param_1[1].field_0x10,"canGoInInventory");
  }
  if (5 < g_CMeleeClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x24,"ammoType");
  }
  if (g_CMeleeClassVersion < 7) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b730
            (&param_1[1].field_0x28,"thrustHitCharacterSound");
  core_actor_cpp_archiveString_FUN_0040b730
            (&param_1[1].field_0x8c,"swingHitCharacterSound");
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0xf0,"hitOtherSound");
  return;
}
