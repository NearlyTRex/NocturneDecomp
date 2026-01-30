// Name: core_larva.cpp_CLarva_load_FUN_00503960
// Address: 00503960
// Address Range: [[00503960, 005039cc]]
// Convention: __cdecl
// Signature: void __cdecl core_larva_cpp_CLarva_load_FUN_00503960(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_larva.cpp_CLarva_load(CLarva* param_1) */

void __cdecl core_larva_cpp_CLarva_load_FUN_00503960(void)

{
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(in_stack_00000004);
  core_actor_cpp_serializeFloat_FUN_0040b770(&in_stack_00000004->speed,"speed");
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970
            (&(in_stack_00000004->base).model,"modelName");
  if (g_CLarvaClassVersion < 2) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004->guard_distance,"guardDistance");
  }
  core_actor_cpp_serializeMotionState_FUN_0040b9f0
            (&(in_stack_00000004->base).model.motion_controller,"motion state");
  return;
}
