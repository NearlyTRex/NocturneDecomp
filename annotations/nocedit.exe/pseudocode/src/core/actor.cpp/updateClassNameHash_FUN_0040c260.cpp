// Name: core_actor.cpp_updateClassNameHash_FUN_0040c260
// Address: 0040c260
// Address Range: [[0040c260, 0040c286]]
// Convention: __cdecl
// Signature: uint core_actor.cpp_updateClassNameHash_FUN_0040c260(uint current_hash, int character)

#include "nocturne.h"

uint __cdecl core_actor_cpp_updateClassNameHash_FUN_0040c260(uint current_hash,int character)

{
  int iVar1;
  
  iVar1 = crt_ctype_c_tolower_FUN_005feb30(character);
  return current_hash * 0x80 + (current_hash >> 0x19) + iVar1 * 0x20001;
}
