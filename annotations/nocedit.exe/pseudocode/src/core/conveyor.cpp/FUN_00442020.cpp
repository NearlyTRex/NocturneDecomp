// Name: core_conveyor.cpp_FUN_00442020
// Address: 00442020
// Address Range: [[00442020, 004420b4]]
// Convention: __cdecl
// Signature: void __cdecl core_conveyor_cpp_FUN_00442020(void)

#include "nocturne.h"

/* Signature: byte actors_other_conveyor.cpp_FUN_00442020(uint param_1) */

void __cdecl core_conveyor_cpp_FUN_00442020(void)

{
  CPlatform *in_stack_00000004;
  
  core_platfrm_cpp_CPlatform_archive_FUN_0054dbc0(in_stack_00000004);
  core_actor_cpp_archiveVector_FUN_0040b340((CVector3f *)(in_stack_00000004 + 1),"size");
  core_actor_cpp_archiveVector_FUN_0040b340
            ((CVector3f *)(in_stack_00000004[1].base.actor_name + 0xc),"direction");
  core_actor_cpp_archiveString_FUN_0040b5c0
            (in_stack_00000004[1].base.actor_name + 0x18,"startEvent");
  core_actor_cpp_archiveString_FUN_0040b5c0
            (in_stack_00000004[1].base.create_event + 4,"stopEvent");
  core_actor_cpp_archiveInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[1].base.unk3,"state");
  if (g_CConveyorClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b5c0
            ((char *)&in_stack_00000004[1].base.unk3.y,"actorClass");
  return;
}
