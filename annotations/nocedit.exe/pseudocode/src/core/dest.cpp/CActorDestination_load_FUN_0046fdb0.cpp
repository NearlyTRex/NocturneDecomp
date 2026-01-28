// Name: core_dest.cpp_CActorDestination_load_FUN_0046fdb0
// Address: 0046fdb0
// Address Range: [[0046fdb0, 0046fe6c]]
// Convention: unknown
// Signature: void core_dest_cpp_CActorDestination_load_FUN_0046fdb0(void)

#include "nocturne.h"

/* Signature: int actors_other_dest.cpp_CActorDestination_load(CActorDestination* pActorDestination)
    */

void core_dest_cpp_CActorDestination_load_FUN_0046fdb0(void)

{
  CDemonActor *in_stack_00000004;
  char *local_104 [64];
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  if (g_CActorDestinationClassVersion < 2) {
    core_actor_cpp_serializeString_FUN_0040b5c0(local_104,"whoGoesHere");
    in_stack_00000004[1].actor_name[0] = '\0';
    in_stack_00000004[1].actor_name[1] = '\0';
    in_stack_00000004[1].actor_name[2] = '\0';
    in_stack_00000004[1].actor_name[3] = '\0';
  }
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[1].orient,"whatEvent");
  if (1 < g_CActorDestinationClassVersion) {
    core_actor_cpp_serializeActor_FUN_0040b870(in_stack_00000004 + 1,"destActor");
  }
  if (2 < g_CActorDestinationClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(in_stack_00000004[1].actor_name + 4),"destClass");
  }
  if (g_CActorDestinationClassVersion < 4) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004[1].create_event + 0x1c),"persistantEventFlag");
  return;
}
