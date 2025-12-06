// Name: core_actor.cpp_crc32ProcessInt_FUN_0040cf50
// Address: 0040cf50
// Address Range: [[0040cf50, 0040cf64]]
// Convention: __cdecl
// Signature: void core_actor.cpp_crc32ProcessInt_FUN_0040cf50(uint * crc_state, int value)

#include "nocturne.h"

void __cdecl core_actor_cpp_crc32ProcessInt_FUN_0040cf50(uint *crc_state,int value)

{
  BADSPACEBASE *in_ESP;
  
  core_actor_cpp_crc32ProcessBuffer_FUN_0040cf10(crc_state,(byte *)&value,4);
  return;
}
