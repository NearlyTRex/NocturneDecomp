// Name: core_stairs.cpp_FUN_005ba4f0
// Address: 005ba4f0
// Address Range: [[005ba4f0, 005ba563]]
// Convention: __cdecl
// Signature: void __cdecl core_stairs_cpp_FUN_005ba4f0(void)

#include "nocturne.h"

void __cdecl core_stairs_cpp_FUN_005ba4f0(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeFloat_FUN_0040b770((float *)(in_stack_00000004 + 1),"rise");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)(in_stack_00000004[1].actor_name + 4),"run");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)(in_stack_00000004[1].actor_name + 8),"width");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004[1].actor_name + 0x14),"count");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004[7].create_event + 0x50),"groundType");
  return;
}
