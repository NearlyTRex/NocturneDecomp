// Name: core_actor.cpp_FUN_00409c40
// Address: 00409c40
// Address Range: [[00409c40, 00409c7d]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_FUN_00409c40(CDemonActor *this_ptr,uint *out_crc)

#include "nocturne.h"

void __cdecl core_actor_cpp_FUN_00409c40(CDemonActor *this_ptr,uint *out_crc)

{
  core_actor_cpp_crc32ProcessString_FUN_0040cf80(out_crc,(char *)this_ptr);
  core_actor_cpp_crc32ProcessVector_FUN_0040cf60(out_crc,&this_ptr->field_0x20);
  core_actor_cpp_crc32ProcessVector_FUN_0040cf60(out_crc,&this_ptr->field_0x30);
  core_actor_cpp_crc32ProcessInt_FUN_0040cf40(out_crc,*(int *)&this_ptr->field_0x70);
  return;
}
