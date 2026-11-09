// Name: core_actor.cpp_crc32ProcessInt_FUN_0040d180
// Address: 0040d180
// Address Range: [[0040d180, 0040d194]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_crc32ProcessInt_FUN_0040d180(uint *crc_state,int value)

#include "nocturne.h"

void __cdecl core_actor_cpp_crc32ProcessInt_FUN_0040d180(uint *crc_state,int value)

{
  core_actor_cpp_crc32ProcessBuffer_FUN_0040d140(crc_state,(byte *)&value,4);
  return;
}
