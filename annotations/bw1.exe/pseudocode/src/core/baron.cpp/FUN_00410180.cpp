// Name: core_baron.cpp_FUN_00410180
// Address: 00410180
// Address Range: [[00410180, 004101d8]]
// Convention: unknown
// Signature: void core_baron_cpp_FUN_00410180(CHero *param_1)

#include "nocturne.h"

void core_baron_cpp_FUN_00410180(CHero *param_1)

{
  core_hero_cpp_FUN_004eab00(param_1);
  if (g_CBaronClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b440((char *)(param_1 + 0x1ffac),"summonEvent");
  core_actor_cpp_archiveString_FUN_0040b440((char *)(param_1 + 0x20010),"goAwayEvent");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)(param_1 + 0x200a4),"summoned");
  return;
}
