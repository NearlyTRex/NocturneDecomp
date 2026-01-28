// Name: core_mobster.cpp_CMobster_load_FUN_00527230
// Address: 00527230
// Address Range: [[00527230, 00527357]]
// Convention: unknown
// Signature: void core_mobster_cpp_CMobster_load_FUN_00527230(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_mobster.cpp_CMobster_load(CMobster* param_1) */

void core_mobster_cpp_CMobster_load_FUN_00527230(void)

{
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(in_stack_00000004);
  core_actor_cpp_serializeFloat_FUN_0040b770(&in_stack_00000004->speed,"speed");
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970
            (&(in_stack_00000004->base).model,"modelName");
  if (g_CMobsterClassVersion < 4) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004->guard_distance,"guardDistance");
  }
  core_actor_cpp_serializeMotionState_FUN_0040b9f0
            (&(in_stack_00000004->base).model.motion_controller,"motion state");
  if (g_CMobsterClassVersion == 2) {
    core_actor_cpp_serializeClothList_FUN_0040be60
              ((CClothList *)&(in_stack_00000004->base).cloth_count,"clothList");
  }
  if (4 < g_CMobsterClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[1].base.base.location.position.y,"postMode");
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)&in_stack_00000004[1].base.base.location.position.z,"ourPost"
              );
  }
  if (5 < g_CMobsterClassVersion) {
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)&in_stack_00000004[1].base.base.location.area_id,"vehicle");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[1].base.base.orient,"sideOfCar");
  }
  if (g_CMobsterClassVersion < 7) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[1].base.base.orient.bank,"holdPosFlag");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[1].base.base.orient.heading,"holdPosCond");
  return;
}
