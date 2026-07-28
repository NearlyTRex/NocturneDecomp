// Name: core_actor.cpp_crc32ProcessInt_FUN_0040e0e0
// Address: 0040e0e0
// Address Range: [[0040e0e0, 0040e0f4]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_crc32ProcessInt_FUN_0040e0e0(uint *crc_state,int value)

#include "nocturne.h"

void __cdecl core_actor_cpp_crc32ProcessInt_FUN_0040e0e0(uint *crc_state,int value)

{
  core_actor_cpp_crc32ProcessBuffer_FUN_0040e0a0(crc_state,(byte *)&value,4);
  return;
}
