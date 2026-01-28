// Name: core_actor.cpp_CDemonActor_calculateChecksum_FUN_00409ec0
// Address: 00409ec0
// Address Range: [[00409ec0, 00409f10]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0(CDemonActor *this_ptr,uint *out_crc)

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0(CDemonActor *this_ptr,uint *out_crc)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x522);
  core_actor_cpp_crc32ProcessString_FUN_0040cf90(out_crc,this_ptr->actor_name);
  core_actor_cpp_crc32ProcessVector_FUN_0040cf70(out_crc,&(this_ptr->location).position);
  core_actor_cpp_crc32ProcessVector_FUN_0040cf70(out_crc,(CVector3f *)&this_ptr->orient);
  core_actor_cpp_crc32ProcessInt_FUN_0040cf50(out_crc,this_ptr->was_created);
  return;
}
