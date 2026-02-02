// Name: core_frankgen.cpp_CFrankenstienMachine_load_FUN_004d19e0
// Address: 004d19e0
// Address Range: [[004d19e0, 004d1a17]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_CFrankenstienMachine_load_FUN_004d19e0(void)

#include "nocturne.h"

/* Signature: byte actors_other_frankgen.cpp_CFrankenstienMachine_load(CFrankenstienMachine*
   pFrankMachine) */

void __cdecl core_frankgen_cpp_CFrankenstienMachine_load_FUN_004d19e0(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_archiveInteger_FUN_0040b7f0((int *)(in_stack_00000004 + 1),"whichPart");
  core_actor_cpp_archiveFloat_FUN_0040b770
            ((float *)(in_stack_00000004[1].actor_name + 4),"masterFrame");
  return;
}
