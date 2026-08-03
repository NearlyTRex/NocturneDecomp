// Name: core_frankgen.cpp_CFrankenstienMachine_archive_FUN_004948f0
// Address: 004948f0
// Address Range: [[004948f0, 00494927]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_CFrankenstienMachine_archive_FUN_004948f0(CFrankenstienMachine *this_ptr)

#include "nocturne.h"

void __cdecl core_frankgen_cpp_CFrankenstienMachine_archive_FUN_004948f0(CFrankenstienMachine *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->which_part,"whichPart");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->master_frame,"masterFrame");
  return;
}
