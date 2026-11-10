// Name: core_actor.cpp_crc32ProcessString_FUN_0040cf80
// Address: 0040cf80
// Address Range: [[0040cf80, 0040cfb2]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_crc32ProcessString_FUN_0040cf80(uint *crc_state,char *string)

#include "nocturne.h"

void __cdecl core_actor_cpp_crc32ProcessString_FUN_0040cf80(uint *crc_state,char *string)

{
  byte bVar1;
  
  bVar1 = *string;
  while (bVar1 != 0) {
    bVar1 = *string;
    string = string + 1;
    core_actor_cpp_crc32ProcessByte_FUN_0040ce20(crc_state,bVar1);
    bVar1 = *string;
  }
  return;
}
