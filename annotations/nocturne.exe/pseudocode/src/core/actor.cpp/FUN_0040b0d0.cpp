// Name: core_actor.cpp_FUN_0040b0d0
// Address: 0040b0d0
// Address Range: [[0040b0d0, 0040b10d]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_FUN_0040b0d0(CDemonActor *this_ptr,uint *out_crc)

#include "nocturne.h"

void __cdecl core_actor_cpp_FUN_0040b0d0(CDemonActor *this_ptr,uint *out_crc)

{
  core_actor_cpp_crc32ProcessString_FUN_0040e120(out_crc,this_ptr->actor_name);
  core_actor_cpp_crc32ProcessVector_FUN_0040e100(out_crc,&(this_ptr->location).position);
  core_actor_cpp_crc32ProcessVector_FUN_0040e100(out_crc,&(this_ptr->orient).vec);
  core_actor_cpp_crc32ProcessInt_FUN_0040e0e0(out_crc,this_ptr->lifecycle_state);
  return;
}
