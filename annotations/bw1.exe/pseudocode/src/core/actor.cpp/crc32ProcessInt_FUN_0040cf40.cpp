// Name: core_actor.cpp_crc32ProcessInt_FUN_0040cf40
// Address: 0040cf40
// Address Range: [[0040cf40, 0040cf54]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_crc32ProcessInt_FUN_0040cf40(uint *crc_state,int value)

#include "nocturne.h"

void __cdecl core_actor_cpp_crc32ProcessInt_FUN_0040cf40(uint *crc_state,int value)

{
  core_actor_cpp_crc32ProcessBuffer_FUN_0040cf00(crc_state,(byte *)&value,4);
  return;
}
