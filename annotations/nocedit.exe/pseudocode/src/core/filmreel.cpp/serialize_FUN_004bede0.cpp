// Name: core_filmreel.cpp_serialize_FUN_004bede0
// Address: 004bede0
// Address Range: [[004bede0, 004bee24]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_serialize_FUN_004bede0(void)

#include "nocturne.h"

/* Signature: byte actors_other_filmreel.cpp_KeyReelAndEvent(uint param_1) */

void __cdecl core_filmreel_cpp_serialize_FUN_004bede0(void)

{
  int in_stack_00000004;
  
  core_dest_cpp_CActorDestination_load_FUN_0046fdb0();
  if (g_CFilmProjectorClassVersion < 2) {
    return;
  }
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)(in_stack_00000004 + 0x370),"keyReel");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004 + 0x374),"keyEvent");
  return;
}
