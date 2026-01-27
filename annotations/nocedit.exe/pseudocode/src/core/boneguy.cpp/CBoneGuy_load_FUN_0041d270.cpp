// Name: core_boneguy.cpp_CBoneGuy_load_FUN_0041d270
// Address: 0041d270
// Address Range: [[0041d270, 0041d4b2]]
// Convention: unknown
// Signature: undefined core_boneguy.cpp_CBoneGuy_load_FUN_0041d270()

#include "nocturne.h"

/* Signature: CBoneGuy* actors_enemy_boneguy.cpp_CBoneGuy_load(CBoneGuy* param_1, char* param_2) */

void core_boneguy_cpp_CBoneGuy_load_FUN_0041d270(void)

{
  CDeformableModelInstance *motion_controller;
  int iVar1;
  CVector3f *vector_ptr;
  CVector3f *vector_ptr_00;
  CQuaternion4f *quat_ptr;
  CEnemy *in_stack_00000004;
  CQuaternion4f *local_18;
  CDemonActor *local_14;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(in_stack_00000004);
  core_actor_cpp_serializeFloat_FUN_0040b770(&in_stack_00000004->speed,"speed");
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970
            (&(in_stack_00000004->base).model,"modelName");
  if (g_CBoneGuyClassVersion < 4) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004->guard_distance,"guardDistance");
  }
  motion_controller = &(in_stack_00000004->base).model;
  core_actor_cpp_serializeMotionState_FUN_0040b9f0
            (&motion_controller->motion_controller,"motion state");
  if (1 < g_CBoneGuyClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(in_stack_00000004[1].base.base.actor_name + 0x1c),"deathEvent");
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)(in_stack_00000004[1].base.base.create_event + 8),"recombineTime");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[1].base.model.transformed_vertices[0x5f].y,
               "blownUp");
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004[1].base.model.transformed_vertices[0x5f].z,"param");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004[1].base.base.create_event + 0xc),"boxCount");
    core_actor_cpp_serializePartStatus_FUN_0040bae0(motion_controller,"partStatus");
    iVar1 = 0;
    if (0 < *(int *)(in_stack_00000004[1].base.base.create_event + 0xc)) {
      local_14 = (CDemonActor *)(in_stack_00000004[1].base.base.create_event + 0x54);
      vector_ptr_00 = (CVector3f *)(in_stack_00000004[1].base.base.create_event + 0x48);
      quat_ptr = (CQuaternion4f *)(in_stack_00000004[1].base.base.create_event + 0x28);
      local_18 = (CQuaternion4f *)(in_stack_00000004[1].base.base.create_event + 0x38);
      vector_ptr = (CVector3f *)(in_stack_00000004[1].base.base.create_event + 0x1c);
      do {
        core_actor_cpp_serializeVector_FUN_0040b340
                  ((CVector3f *)(in_stack_00000004[1].base.base.create_event + iVar1 * 0x48 + 0x10),
                   "boxListPos");
        core_actor_cpp_serializeVector_FUN_0040b340(vector_ptr,"boxListOrient");
        core_actor_cpp_serializeQuaternion_FUN_0040b520(quat_ptr,"boxListDestOrient");
        core_actor_cpp_serializeQuaternion_FUN_0040b520(local_18,"boxListStartOrient");
        core_actor_cpp_serializeVector_FUN_0040b340(vector_ptr_00,"sourcePos");
        iVar1 = iVar1 + 1;
        vector_ptr = vector_ptr + 6;
        quat_ptr = (CQuaternion4f *)&quat_ptr[4].y;
        core_actor_cpp_serializeActor_FUN_0040b870(local_14,"boxListPart");
        vector_ptr_00 = vector_ptr_00 + 6;
        local_14 = (CDemonActor *)((local_14->orient_matrix).m + 1);
        local_18 = (CQuaternion4f *)&local_18[4].y;
      } while (iVar1 < *(int *)(in_stack_00000004[1].base.base.create_event + 0xc));
    }
  }
  if ((2 < g_CBoneGuyClassVersion) && (g_CBoneGuyClassVersion < 5)) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004->victim_height,"victimHeight");
    return;
  }
  return;
}
