// Name: core_frankgen.cpp_CFrankenstienMachine_archive_FUN_004ac460
// Address: 004ac460
// Address Range: [[004ac460, 004ac497]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_CFrankenstienMachine_archive_FUN_004ac460(CFrankenstienMachine *this_ptr)

#include "nocturne.h"

void __cdecl core_frankgen_cpp_CFrankenstienMachine_archive_FUN_004ac460(CFrankenstienMachine *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->which_part,"whichPart");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->master_frame,"masterFrame");
  return;
}
