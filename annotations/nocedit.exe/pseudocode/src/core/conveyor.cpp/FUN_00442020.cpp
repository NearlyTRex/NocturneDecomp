// Name: core_conveyor.cpp_FUN_00442020
// Address: 00442020
// Address Range: [[00442020, 004420b4]]
// Convention: unknown
// Signature: undefined core_conveyor.cpp_FUN_00442020()

#include "nocturne.h"

/* Signature: byte actors_other_conveyor.cpp_FUN_00442020(uint param_1) */

void core_conveyor_cpp_FUN_00442020(void)

{
  int in_stack_00000004;
  
  core_platfrm_cpp_CPlatform_load_FUN_0054dbc0();
  core_actor_cpp_serializeVector_FUN_0040b340
            ((CVector3f *)(in_stack_00000004 + 0x72c),"size");
  core_actor_cpp_serializeVector_FUN_0040b340
            ((CVector3f *)(in_stack_00000004 + 0x738),"direction");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004 + 0x744),"startEvent");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004 + 0x7a8),"stopEvent");
  core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)(in_stack_00000004 + 0x80c),"state");
  if (g_CConveyorClassVersion < 2) {
    return;
  }
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004 + 0x810),"actorClass");
  return;
}
