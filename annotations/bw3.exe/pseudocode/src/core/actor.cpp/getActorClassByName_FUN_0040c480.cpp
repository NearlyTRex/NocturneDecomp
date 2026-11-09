// Name: core_actor.cpp_getActorClassByName_FUN_0040c480
// Address: 0040c480
// Address Range: [[0040c480, 0040c4ec]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_getActorClassByName_FUN_0040c480(byte *param_1)

#include "nocturne.h"

int __cdecl core_actor_cpp_getActorClassByName_FUN_0040c480(byte *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  while( true ) {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    if (bVar1 == 0) break;
    if (((&DAT_006074b8)[(byte)(bVar1 + 1)] & 0xe0) != 0) {
      iVar2 = tolower((uint)bVar1);
      uVar3 = iVar2 * 0x20001 + uVar3 * 0x80 + (uVar3 >> 0x19);
    }
  }
  if (0 < DAT_007df9c4) {
    iVar2 = 0;
    do {
      if (uVar3 == *(uint *)(*(int *)((int)&DAT_007df9c8 + iVar2) + 0x38)) {
        return *(int *)((int)&DAT_007df9c8 + iVar2);
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 < DAT_007df9c4 * 4);
  }
  return 0;
}
