// Name: core_actor.cpp_hashClassName_FUN_0040c290
// Address: 0040c290
// Address Range: [[0040c290, 0040c2d6]]
// Convention: __cdecl
// Signature: uint __cdecl core_actor_cpp_hashClassName_FUN_0040c290(char *class_name)

#include "nocturne.h"

uint __cdecl core_actor_cpp_hashClassName_FUN_0040c290(char *class_name)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  while( true ) {
    bVar1 = *class_name;
    class_name = class_name + 1;
    if (bVar1 == 0) break;
    if ((g_CharacterClassificationTable[(byte)(bVar1 + 1)] & 0xe0) != 0) {
      iVar2 = tolower((uint)bVar1);
      uVar3 = (uVar3 >> 0x19) + uVar3 * 0x80 + iVar2 * 0x20001;
    }
  }
  return uVar3;
}
