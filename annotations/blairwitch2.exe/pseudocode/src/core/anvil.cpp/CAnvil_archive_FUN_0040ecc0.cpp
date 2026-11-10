// Name: core_anvil.cpp_CAnvil_archive_FUN_0040ecc0
// Address: 0040ecc0
// Address Range: [[0040ecc0, 0040ed33]]
// Convention: __cdecl
// Signature: void __cdecl core_anvil_cpp_CAnvil_archive_FUN_0040ecc0(CAnvil *this_ptr)

#include "nocturne.h"

void __cdecl core_anvil_cpp_CAnvil_archive_FUN_0040ecc0(CAnvil *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60
            (&this_ptr->model,"@modelName" + 1);
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->drop_condition,"dropCondition");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->drop_height,"dropHeight");
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->triggered,"triggered");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->yvel,&DAT_005cb351);
  return;
}
