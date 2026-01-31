// Name: core_hpriest.cpp_CHighPriestOfGardath_serialize_FUN_004f7bd0
// Address: 004f7bd0
// Address Range: [[004f7bd0, 004f7bf4]]
// Convention: __cdecl
// Signature: void __cdecl core_hpriest_cpp_CHighPriestOfGardath_serialize_FUN_004f7bd0(CHighPriestOfGardath *this_ptr)

#include "nocturne.h"

void __cdecl
core_hpriest_cpp_CHighPriestOfGardath_serialize_FUN_004f7bd0(CHighPriestOfGardath *this_ptr)

{
  core_npc_cpp_CNPC_serialize_FUN_00544ba0(&this_ptr->base);
  core_actor_cpp_serializeString_FUN_0040b5c0((char **)this_ptr->unk,"killEvent");
  return;
}
