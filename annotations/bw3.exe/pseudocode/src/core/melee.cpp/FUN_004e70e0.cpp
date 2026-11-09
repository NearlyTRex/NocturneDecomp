// Name: core_melee.cpp_FUN_004e70e0
// Address: 004e70e0
// Address Range: [[004e70e0, 004e71fa]]
// Convention: unknown
// Signature: void core_melee_cpp_FUN_004e70e0(int param_1)

#include "nocturne.h"

void core_melee_cpp_FUN_004e70e0(int param_1)

{
  core_weapon_cpp_FUN_0057b2a0(param_1);
  if (1 < g_CMeleeClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)(param_1 + 0x594),"allowedAttackTypes");
  }
  if (2 < g_CMeleeClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0x598,"strengthLo");
    core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0x59c,"strengthHi");
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0x2f0),"canAttachLight");
  }
  if (3 < g_CMeleeClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0x5a0,"dismemberProb");
  }
  if (4 < g_CMeleeClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0x5a4),"canGoInInventory")
    ;
  }
  if (5 < g_CMeleeClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0x5b8),"ammoType");
  }
  if (g_CMeleeClassVersion < 7) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b680
            ((char *)(param_1 + 0x5bc),"thrustHitCharacterSound");
  core_actor_cpp_archiveString_FUN_0040b680
            ((char *)(param_1 + 0x620),"swingHitCharacterSound");
  core_actor_cpp_archiveString_FUN_0040b680((char *)(param_1 + 0x684),"hitOtherSound");
  return;
}
