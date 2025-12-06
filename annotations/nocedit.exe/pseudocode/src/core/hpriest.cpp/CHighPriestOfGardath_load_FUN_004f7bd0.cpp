// Name: core_hpriest.cpp_CHighPriestOfGardath_load_FUN_004f7bd0
// Address: 004f7bd0
// Address Range: [[004f7bd0, 004f7bf4]]
// Convention: unknown
// Signature: undefined core_hpriest.cpp_CHighPriestOfGardath_load_FUN_004f7bd0()

#include "nocturne.h"

/* Signature: byte actors_npc_highpriestg.cpp_CHighPriestOfGardath_load(CHighPriestOfGardath*
   param_1) */

void core_hpriest_cpp_CHighPriestOfGardath_load_FUN_004f7bd0(void)

{
  CNPC *in_stack_00000004;
  int in_stack_00000008;
  
  core_npc_cpp_CNPC_serialize_FUN_00544ba0(in_stack_00000004);
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000008 + 0x1f708),"killEvent");
  return;
}
