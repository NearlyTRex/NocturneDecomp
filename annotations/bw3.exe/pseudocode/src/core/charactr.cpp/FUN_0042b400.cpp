// Name: core_charactr.cpp_FUN_0042b400
// Address: 0042b400
// Address Range: [[0042b400, 0042b42a]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042b400(int param_1)

#include "nocturne.h"

void core_charactr_cpp_FUN_0042b400(int param_1)

{
  core_actor_cpp_FUN_004088d0(param_1);
  if (*(char *)(param_1 + 0x24a8) == '\0') {
    return;
  }
  core_skeleton_cpp_FUN_00550450(param_1 + 0x24a8);
  return;
}
