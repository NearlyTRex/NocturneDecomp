// Name: core_flies.cpp_FUN_004cbe60
// Address: 004cbe60
// Address Range: [[004cbe60, 004cbef4]]
// Convention: unknown
// Signature: void core_flies_cpp_FUN_004cbe60(void)

#include "nocturne.h"

void core_flies_cpp_FUN_004cbe60(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004[1].actor_name + 0xc),"count");
  if (g_CFliesClassVersion < 2) {
    if (g_CFliesClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)&in_stack_00000004[0x1f].runtime_state,"followActor");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              (&in_stack_00000004[0x1f].health,"gatherCount");
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)&in_stack_00000004[0x1f].unk1,"gatherTime");
    if (g_CFliesClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_serializeVector_FUN_0040b340
            ((CVector3f *)(in_stack_00000004 + 1),"boxSize");
  return;
}
