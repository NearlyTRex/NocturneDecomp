// Name: core_gargoyle.cpp_CGargoyle_load_FUN_004e5470
// Address: 004e5470
// Address Range: [[004e5470, 004e5515]]
// Convention: __cdecl
// Signature: void __cdecl core_gargoyle_cpp_CGargoyle_load_FUN_004e5470(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_gargoyle.cpp_CGargoyle_load(CGargoyle* pGargoyle) */

void __cdecl core_gargoyle_cpp_CGargoyle_load_FUN_004e5470(void)

{
  CDeformableModelInstance *model_ptr;
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(in_stack_00000004);
  core_actor_cpp_serializeFloat_FUN_0040b770(&in_stack_00000004->speed,"speed");
  model_ptr = &(in_stack_00000004->base).model;
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970(model_ptr,"modelName");
  core_actor_cpp_serializeMotionState_FUN_0040b9f0
            (&model_ptr->motion_controller,"motion state");
  if (g_CGargoyleClassVersion < 2) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[1].base.base.orient.heading,"stoneRed");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[1].base.base.orient_matrix,"stoneGreen");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[1].base.base.orient_matrix.m[0].y,"stoneBlue");
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)&in_stack_00000004[1].base.base.orient_matrix.m[0].z,"homeBase"
            );
  return;
}
