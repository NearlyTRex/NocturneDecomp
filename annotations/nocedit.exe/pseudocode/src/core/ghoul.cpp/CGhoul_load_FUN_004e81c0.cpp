// Name: core_ghoul.cpp_CGhoul_load_FUN_004e81c0
// Address: 004e81c0
// Address Range: [[004e81c0, 004e82c4]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_load_FUN_004e81c0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_ghoul.cpp_CGhoul_load(CGhoul* pGhoul) */

void __cdecl core_ghoul_cpp_CGhoul_load_FUN_004e81c0(void)

{
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(in_stack_00000004);
  if (g_CGhoulClassVersion < 4) {
    core_actor_cpp_serializeFloat_FUN_0040b770(&in_stack_00000004->speed,"speed");
  }
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970
            (&(in_stack_00000004->base).model,"modelName");
  if ((1 < g_CGhoulClassVersion) && (g_CGhoulClassVersion < 7)) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004->guard_distance,"guardDistance");
  }
  if (2 < g_CGhoulClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[1].base.base.location.position.y,"livesLeft");
  }
  if (4 < g_CGhoulClassVersion) {
    core_actor_cpp_serializeMotionState_FUN_0040b9f0
              (&(in_stack_00000004->base).model.motion_controller,"motion state");
  }
  if (g_CGhoulClassVersion < 6) {
    return;
  }
  core_actor_cpp_serializePartStatus_FUN_0040bae0
            (&(in_stack_00000004->base).model,"partStatus");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[1].base.base.location.position.z,"spasmCount");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[1].base.base.location.position.y,"livesLeft");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004[1].base.base.actor_name + 0x14),"ariseTimer");
  return;
}
