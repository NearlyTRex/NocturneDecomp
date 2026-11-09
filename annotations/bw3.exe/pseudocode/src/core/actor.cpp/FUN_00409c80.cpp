// Name: core_actor.cpp_FUN_00409c80
// Address: 00409c80
// Address Range: [[00409c80, 00409cbd]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_FUN_00409c80(CDemonActor *this_ptr,uint *out_crc)

#include "nocturne.h"

void __cdecl core_actor_cpp_FUN_00409c80(CDemonActor *this_ptr,uint *out_crc)

{
  core_actor_cpp_crc32ProcessString_FUN_0040d1c0(out_crc,(char *)this_ptr);
  core_actor_cpp_crc32ProcessVector_FUN_0040d1a0(out_crc,&this_ptr->field_0x20);
  core_actor_cpp_crc32ProcessVector_FUN_0040d1a0(out_crc,&this_ptr->field_0x30);
  core_actor_cpp_crc32ProcessInt_FUN_0040d180(out_crc,*(int *)&this_ptr->field_0x70);
  return;
}
