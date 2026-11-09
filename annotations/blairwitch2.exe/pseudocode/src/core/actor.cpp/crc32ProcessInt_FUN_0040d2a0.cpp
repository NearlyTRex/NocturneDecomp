// Name: core_actor.cpp_crc32ProcessInt_FUN_0040d2a0
// Address: 0040d2a0
// Address Range: [[0040d2a0, 0040d2b4]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_crc32ProcessInt_FUN_0040d2a0(uint *crc_state,int value)

#include "nocturne.h"

void __cdecl core_actor_cpp_crc32ProcessInt_FUN_0040d2a0(uint *crc_state,int value)

{
  core_actor_cpp_crc32ProcessBuffer_FUN_0040d260(crc_state,(byte *)&value,4);
  return;
}
