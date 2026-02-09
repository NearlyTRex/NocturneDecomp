// Name: core_ladder.cpp_CLadder_onActorDeleted_FUN_00502e90
// Address: 00502e90
// Address Range: [[00502e90, 00502eab]]
// Convention: __cdecl
// Signature: void __cdecl core_ladder_cpp_CLadder_onActorDeleted_FUN_00502e90(CLadder *this_ptr,CDemonActor *deleted_actor)

#include "nocturne.h"

void __cdecl
core_ladder_cpp_CLadder_onActorDeleted_FUN_00502e90(CLadder *this_ptr,CDemonActor *deleted_actor)

{
  if (deleted_actor != this_ptr->master_actor) {
    return;
  }
  this_ptr->master_actor = (CDemonActor *)0x0;
  return;
}
