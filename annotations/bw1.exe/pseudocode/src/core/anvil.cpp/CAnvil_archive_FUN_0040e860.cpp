// Name: core_anvil.cpp_CAnvil_archive_FUN_0040e860
// Address: 0040e860
// Address Range: [[0040e860, 0040e8d3]]
// Convention: __cdecl
// Signature: void __cdecl core_anvil_cpp_CAnvil_archive_FUN_0040e860(CAnvil *this_ptr)

#include "nocturne.h"

void __cdecl core_anvil_cpp_CAnvil_archive_FUN_0040e860(CAnvil *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)this_ptr);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b770
            (&this_ptr->field_0x158,"@modelName" + 1);
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x2d4,"dropCondition");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x338,"dropHeight");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x33c,"triggered");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x340,&DAT_005d32bc);
  return;
}
