// Name: core_actor.cpp_crc32ProcessString_FUN_0040e120
// Address: 0040e120
// Address Range: [[0040e120, 0040e152]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_crc32ProcessString_FUN_0040e120(uint *crc_state,char *string)

#include "nocturne.h"

void __cdecl core_actor_cpp_crc32ProcessString_FUN_0040e120(uint *crc_state,char *string)

{
  char cVar1;
  
  cVar1 = *string;
  while (cVar1 != '\0') {
    cVar1 = *string;
    string = string + 1;
    core_actor_cpp_crc32ProcessByte_FUN_0040dfc0(crc_state,cVar1);
    cVar1 = *string;
  }
  return;
}
