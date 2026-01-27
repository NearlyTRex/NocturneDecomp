// Name: core_passngr.cpp_CPassenger_load_FUN_00546190
// Address: 00546190
// Address Range: [[00546190, 00546269]]
// Convention: unknown
// Signature: undefined core_passngr.cpp_CPassenger_load_FUN_00546190()

#include "nocturne.h"

/* Signature: byte actors_npc_passenger.cpp_CPassenger_load(CPassenger* param_1) */

void core_passngr_cpp_CPassenger_load_FUN_00546190(void)

{
  CDeformableModelInstance *model_ptr;
  CNPC *in_stack_00000004;
  
  core_npc_cpp_CNPC_serialize_FUN_00544ba0(in_stack_00000004);
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004 + 1),"transformEvent");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[1].base.base.health,"wolfModelName");
  core_actor_cpp_serializeFloat_FUN_0040b770
            (&in_stack_00000004[1].base.model.bone_transform.bone_rotations[0x53].w,
             "morphTime");
  if ((1 < g_CPassengerClassVersion) && (g_CPassengerClassVersion < 5)) {
    model_ptr = &(in_stack_00000004->base).model;
    core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970(model_ptr,"modelName");
    core_actor_cpp_serializeMotionState_FUN_0040b9f0
              (&model_ptr->motion_controller,"motion state");
  }
  if (2 < g_CPassengerClassVersion) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004[1].base.model.bone_transform.bone_rotations[0x53].x,
               "wolfSize");
  }
  if (3 < g_CPassengerClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(in_stack_00000004[1].base.base.create_event + 0xc),"nameOfWolf");
  }
  if (g_CPassengerClassVersion < 6) {
    return;
  }
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[1].base.base.create_event + 0x2c),"transformWav");
  return;
}
