// Name: core_hpriest.cpp_CHighPriestOfGardath_archive_FUN_004f09f0
// Address: 004f09f0
// Address Range: [[004f09f0, 004f0a14]]
// Convention: __cdecl
// Signature: void __cdecl core_hpriest_cpp_CHighPriestOfGardath_archive_FUN_004f09f0(CHighPriestOfGardath *this_ptr)

#include "nocturne.h"

void __cdecl core_hpriest_cpp_CHighPriestOfGardath_archive_FUN_004f09f0(CHighPriestOfGardath *this_ptr)

{
  core_npc_cpp_CNPC_archive_FUN_00531bf0(&this_ptr->base);
  core_actor_cpp_archiveString_FUN_0040b440(this_ptr->kill_event,"killEvent");
  return;
}
