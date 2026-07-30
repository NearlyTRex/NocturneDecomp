// Name: core_hpriest.cpp_CHighPriestOfGardath_archive_FUN_004b9b50
// Address: 004b9b50
// Address Range: [[004b9b50, 004b9b74]]
// Convention: __cdecl
// Signature: void __cdecl core_hpriest_cpp_CHighPriestOfGardath_archive_FUN_004b9b50(CHighPriestOfGardath *this_ptr)

#include "nocturne.h"

void __cdecl core_hpriest_cpp_CHighPriestOfGardath_archive_FUN_004b9b50(CHighPriestOfGardath *this_ptr)

{
  core_npc_cpp_CNPC_archive_FUN_004eed10(&this_ptr->base);
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->kill_event,"killEvent");
  return;
}
