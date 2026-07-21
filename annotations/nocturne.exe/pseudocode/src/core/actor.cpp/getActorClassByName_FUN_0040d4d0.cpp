// Name: core_actor.cpp_getActorClassByName_FUN_0040d4d0
// Address: 0040d4d0
// Address Range: [[0040d4d0, 0040d53c]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_getActorClassByName_FUN_0040d4d0(char *param_1)

#include "nocturne.h"

int __cdecl core_actor_cpp_getActorClassByName_FUN_0040d4d0(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  while( true ) {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    if (cVar1 == '\0') break;
    if (((&DAT_005c168c)[(byte)(cVar1 + 1)] & 0xe0) != 0) {
      iVar2 = tolower(cVar1);
      uVar3 = iVar2 * 0x20001 + uVar3 * 0x80 + (uVar3 >> 0x19);
    }
  }
  if (0 < DAT_00763e94) {
    iVar2 = 0;
    do {
      if (uVar3 == *(uint *)(*(int *)((int)&DAT_00763e98 + iVar2) + 0x38)) {
        return *(int *)((int)&DAT_00763e98 + iVar2);
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 < DAT_00763e94 * 4);
  }
  return 0;
}
