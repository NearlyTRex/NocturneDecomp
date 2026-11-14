// Name: core_charactr.cpp_FUN_00422be0
// Address: 00422be0
// Address Range: [[00422be0, 00422c0a]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00422be0(int param_1)

#include "nocturne.h"

void core_charactr_cpp_FUN_00422be0(int param_1)

{
  core_actor_cpp_FUN_00408ac0(param_1);
  if (*(char *)(param_1 + 0x2514) == '\0') {
    return;
  }
  core_skeleton_cpp_markModelInUse_FUN_00549210((char *)(param_1 + 0x2514));
  return;
}
