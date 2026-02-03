// Name: core_frankgen.cpp_CFrankenstienMachine_archive_FUN_004d19e0
// Address: 004d19e0
// Address Range: [[004d19e0, 004d1a17]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_CFrankenstienMachine_archive_FUN_004d19e0(CFrankenstienMachine *this_ptr)

#include "nocturne.h"

void __cdecl
core_frankgen_cpp_CFrankenstienMachine_archive_FUN_004d19e0(CFrankenstienMachine *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->which_part,"whichPart");
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->master_frame,"masterFrame");
  return;
}
