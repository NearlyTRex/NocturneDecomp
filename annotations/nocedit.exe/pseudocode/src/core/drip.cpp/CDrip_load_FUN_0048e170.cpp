// Name: core_drip.cpp_CDrip_load_FUN_0048e170
// Address: 0048e170
// Address Range: [[0048e170, 0048e295]]
// Convention: __cdecl
// Signature: void __cdecl core_drip_cpp_CDrip_load_FUN_0048e170(void)

#include "nocturne.h"

/* Signature: byte actors_other_drip.cpp_CDrip_load(CDrip* pDrip) */

void __cdecl core_drip_cpp_CDrip_load_FUN_0048e170(void)

{
  CDemonActor *in_stack_00000004;
  
  if (1 < g_CDripClassVersion) {
    core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  }
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),"modelName");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[2].location.position.y,"type");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[2].location.position.z,"autoDrop");
  core_actor_cpp_serializeVector_FUN_0040b340
            (in_stack_00000004[2].orient_matrix.m + 1,"homePos");
  core_actor_cpp_serializeVector_FUN_0040b340
            (in_stack_00000004[2].orient_matrix.m + 2,"vel");
  if (2 < g_CDripClassVersion) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004[2].orient.pitch,"minAutoDripTime");
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004[2].orient.bank,"maxAutoDripTime");
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004[2].orient.heading,"dripRadius");
  }
  if (3 < g_CDripClassVersion) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)&in_stack_00000004[2].runtime_state,"damage");
  }
  if (4 < g_CDripClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)&in_stack_00000004[2].health,"hitSound");
  }
  if (g_CDripClassVersion < 6) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004[2].create_event + 0xc),"noRockFlag");
  return;
}
