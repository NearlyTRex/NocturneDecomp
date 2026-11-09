// Name: core_baron.cpp_FUN_00410600
// Address: 00410600
// Address Range: [[00410600, 00410658]]
// Convention: unknown
// Signature: void core_baron_cpp_FUN_00410600(int param_1)

#include "nocturne.h"

void core_baron_cpp_FUN_00410600(int param_1)

{
  core_hero_cpp_FUN_004ce590(param_1);
  if (g_CBaronClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b730((char *)(param_1 + 0x25640),"summonEvent");
  core_actor_cpp_archiveString_FUN_0040b730((char *)(param_1 + 0x256a4),"goAwayEvent");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)(param_1 + 0x25738),"summoned");
  return;
}
