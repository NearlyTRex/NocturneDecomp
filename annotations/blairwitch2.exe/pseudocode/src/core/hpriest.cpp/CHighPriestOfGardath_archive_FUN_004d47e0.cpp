// Name: core_hpriest.cpp_CHighPriestOfGardath_archive_FUN_004d47e0
// Address: 004d47e0
// Address Range: [[004d47e0, 004d4804]]
// Convention: __cdecl
// Signature: void __cdecl core_hpriest_cpp_CHighPriestOfGardath_archive_FUN_004d47e0(CHighPriestOfGardath *this_ptr)

#include "nocturne.h"

void __cdecl core_hpriest_cpp_CHighPriestOfGardath_archive_FUN_004d47e0(CHighPriestOfGardath *this_ptr)

{
  core_npc_cpp_CNPC_archive_FUN_005109e0(&this_ptr->base);
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->kill_event,"killEvent");
  return;
}
