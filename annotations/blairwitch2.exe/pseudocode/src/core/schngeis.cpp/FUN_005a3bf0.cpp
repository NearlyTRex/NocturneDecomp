// Name: core_schngeis.cpp_FUN_005a3bf0
// Address: 005a3bf0
// Address Range: [[005a3bf0, 005a3c20]]
// Convention: unknown
// Signature: void core_schngeis_cpp_FUN_005a3bf0(int param_1)

#include "nocturne.h"

void core_schngeis_cpp_FUN_005a3bf0(int param_1)

{
  unkafter_basicene_cpp_FUN_0059fc10(param_1);
  if (g_CSchnellGeistClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)(param_1 + 0x11864),"$@BreathState" + 2);
  return;
}
