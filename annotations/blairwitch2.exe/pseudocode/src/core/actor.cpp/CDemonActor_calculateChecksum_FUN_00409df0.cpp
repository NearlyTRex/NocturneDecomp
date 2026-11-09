// Name: core_actor.cpp_CDemonActor_calculateChecksum_FUN_00409df0
// Address: 00409df0
// Address Range: [[00409df0, 00409e2d]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409df0(CDemonActor *this_ptr,uint *out_crc)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409df0(CDemonActor *this_ptr,uint *out_crc)

{
  core_actor_cpp_crc32ProcessString_FUN_0040d2e0(out_crc,(char *)this_ptr);
  core_actor_cpp_crc32ProcessVector_FUN_0040d2c0(out_crc,&this_ptr->field_0x20);
  core_actor_cpp_crc32ProcessVector_FUN_0040d2c0(out_crc,&this_ptr->field_0x30);
  core_actor_cpp_crc32ProcessInt_FUN_0040d2a0(out_crc,*(int *)&this_ptr->field_0x70);
  return;
}
