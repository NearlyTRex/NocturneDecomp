// Name: core_actor.cpp_getActorClassByName_FUN_0040c240
// Address: 0040c240
// Address Range: [[0040c240, 0040c2ac]]
// Convention: __cdecl
// Signature: CDemonActorType * __cdecl core_actor_cpp_getActorClassByName_FUN_0040c240(char *className)

#include "nocturne.h"

CDemonActorType * __cdecl core_actor_cpp_getActorClassByName_FUN_0040c240(char *className)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  while( true ) {
    bVar1 = *className;
    className = className + 1;
    if (bVar1 == 0) break;
    if (((&DAT_00626114)[(byte)(bVar1 + 1)] & 0xe0) != 0) {
      iVar2 = tolower((uint)bVar1);
      uVar3 = iVar2 * 0x20001 + uVar3 * 0x80 + (uVar3 >> 0x19);
    }
  }
  if (0 < DAT_007c3044) {
    iVar2 = 0;
    do {
      if (uVar3 == (*(CDemonActorType **)((int)&DAT_007c3048 + iVar2))->name_hash) {
        return *(CDemonActorType **)((int)&DAT_007c3048 + iVar2);
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 < DAT_007c3044 * 4);
  }
  return (CDemonActorType *)0x0;
}
