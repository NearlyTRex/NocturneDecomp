// Name: core_grave.cpp_CGrave_load_FUN_004ee7f0
// Address: 004ee7f0
// Address Range: [[004ee7f0, 004ee8e9]]
// Convention: unknown
// Signature: undefined core_grave.cpp_CGrave_load_FUN_004ee7f0()

#include "nocturne.h"

/* Signature: byte actors_other_grave.cpp_CGrave_load(CGrave* pGrave) */

void core_grave_cpp_CGrave_load_FUN_004ee7f0(void)

{
  CDemonActor *in_stack_00000004;
  int local_c;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),"model name");
  core_actor_cpp_serializeFloat_FUN_0040b770
            (&in_stack_00000004[2].location.position.z,"fps");
  if (g_CGraveClassVersion < 2) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&local_c,"active");
    in_stack_00000004[2].orient.pitch = 0.0;
    if (local_c != 0) {
      in_stack_00000004[2].orient.pitch = 1.4013e-45;
    }
  }
  else {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[2].orient,"graveState");
  }
  core_actor_cpp_serializeFloat_FUN_0040b770
            (&in_stack_00000004[2].location.position.y,"curFrame");
  if (2 < g_CGraveClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[2].orient.bank,"hideOnFirstFrame");
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)&in_stack_00000004[2].orient.heading,"startCondition");
  }
  if (g_CGraveClassVersion < 4) {
    return;
  }
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[2].create_event + 0x24),"startSound");
  return;
}
