// Name: core_flame.cpp_CFlame_load_FUN_004cac60
// Address: 004cac60
// Address Range: [[004cac60, 004cad7a]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_CFlame_load_FUN_004cac60(void)

#include "nocturne.h"

/* Signature: byte actors_other_flame.cpp_CFlame_load(CFlame* pFlame) */

void __cdecl core_flame_cpp_CFlame_load_FUN_004cac60(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeVector_FUN_0040b340
            ((CVector3f *)(in_stack_00000004 + 1),"flameSize");
  if (1 < g_CFlameClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[1].orient_matrix.m[1].z,"whichFlame");
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004[1].orient_matrix.m[2].x,"globeScalar");
  }
  if (2 < g_CFlameClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)&in_stack_00000004[1].runtime_state,"onEvent");
  }
  if (3 < g_CFlameClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(in_stack_00000004[1].create_event + 0x4c),"onEvent");
  }
  if (4 < g_CFlameClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[1].orient_matrix.m[2].z,"flameState");
  }
  if (5 < g_CFlameClassVersion) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)&in_stack_00000004[1].previous_transform_state,"intensity");
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004[1].previous_transform_state.position.y,"randomness");
  }
  if (g_CFlameClassVersion < 7) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[1].previous_transform_state.position.z,"burnHero");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[1].previous_transform_state.orientation,"burnEnemy")
  ;
  return;
}
