// Name: core_anvil.cpp_CAnvil_archive_FUN_0040f7d0
// Address: 0040f7d0
// Address Range: [[0040f7d0, 0040f843]]
// Convention: __cdecl
// Signature: void __cdecl core_anvil_cpp_CAnvil_archive_FUN_0040f7d0(CAnvil *this_ptr)

#include "nocturne.h"

void __cdecl core_anvil_cpp_CAnvil_archive_FUN_0040f7d0(CAnvil *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(&this_ptr->model,"modelName");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->drop_condition,"dropCondition");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->drop_height,"dropHeight");
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->triggered,"triggered");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->yvel,"yvel");
  return;
}
