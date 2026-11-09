// Name: core_actor.cpp_crc32ProcessString_FUN_0040d1c0
// Address: 0040d1c0
// Address Range: [[0040d1c0, 0040d1f2]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_crc32ProcessString_FUN_0040d1c0(uint *crc_state,char *string)

#include "nocturne.h"

void __cdecl core_actor_cpp_crc32ProcessString_FUN_0040d1c0(uint *crc_state,char *string)

{
  char cVar1;
  
  cVar1 = *string;
  while (cVar1 != '\0') {
    cVar1 = *string;
    string = string + 1;
    core_actor_cpp_FUN_0040d060(crc_state,cVar1);
    cVar1 = *string;
  }
  return;
}
