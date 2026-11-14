// Name: core_frankgen.cpp_CFrankenstienMachine_archive_FUN_004c5410
// Address: 004c5410
// Address Range: [[004c5410, 004c5447]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_CFrankenstienMachine_archive_FUN_004c5410(CFrankenstienMachine *this_ptr)

#include "nocturne.h"

void __cdecl core_frankgen_cpp_CFrankenstienMachine_archive_FUN_004c5410(CFrankenstienMachine *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c040(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->which_part,"whichPart");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->master_frame,"masterFrame");
  return;
}
