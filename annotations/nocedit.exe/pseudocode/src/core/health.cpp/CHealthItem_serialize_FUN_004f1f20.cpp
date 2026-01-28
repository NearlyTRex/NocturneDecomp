// Name: core_health.cpp_CHealthItem_serialize_FUN_004f1f20
// Address: 004f1f20
// Address Range: [[004f1f20, 004f1f9f]]
// Convention: unknown
// Signature: void core_health_cpp_CHealthItem_serialize_FUN_004f1f20(void)

#include "nocturne.h"

void core_health_cpp_CHealthItem_serialize_FUN_004f1f20(void)

{
  CDemonActor *in_stack_00000004;
  char *local_104 [64];
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),"modelName");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[2].location.position.y,"useCount");
  core_actor_cpp_serializeFloat_FUN_0040b770
            (&in_stack_00000004[2].location.position.z,"hpRestored");
  if (g_CHealthItemClassVersion != 2) {
    return;
  }
  core_actor_cpp_serializeLocalizedString_FUN_0040b6e0(local_104,"descriptiveName");
  return;
}
