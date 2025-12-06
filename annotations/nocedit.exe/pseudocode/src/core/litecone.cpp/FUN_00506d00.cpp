// Name: core_litecone.cpp_FUN_00506d00
// Address: 00506d00
// Address Range: [[00506d00, 00506d80]]
// Convention: unknown
// Signature: undefined core_litecone.cpp_FUN_00506d00()

#include "nocturne.h"

void core_litecone_cpp_FUN_00506d00(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeFloat_FUN_0040b770((float *)(in_stack_00000004 + 1),"fov");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)(in_stack_00000004[1].actor_name + 4),"falloff");
  if (g_CLightConeClassVersion < 2) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004[1].actor_name + 8),"state");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[1].actor_name + 0xc),"onEvent");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[1].was_created,"offEvent");
  return;
}
