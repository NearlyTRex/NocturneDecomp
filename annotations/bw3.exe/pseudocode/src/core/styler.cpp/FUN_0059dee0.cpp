// Name: core_styler.cpp_FUN_0059dee0
// Address: 0059dee0
// Address Range: [[0059dee0, 0059df5d]]
// Convention: unknown
// Signature: void core_styler_cpp_FUN_0059dee0(int param_1)

#include "nocturne.h"

void core_styler_cpp_FUN_0059dee0(int param_1)

{
  core_enemy_cpp_FUN_00489120(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcdcc,"?speed" + 1);
  core_actor_cpp_FUN_0040ba30((CDeformableModelInstance *)(param_1 + 0x158),"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcddc,"guardDistance");
  core_actor_cpp_FUN_0040bab0((CMotionController *)(param_1 + 0x158),"motion state");
  if (g_CStylerClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0x487c4,"morphTime");
  return;
}
