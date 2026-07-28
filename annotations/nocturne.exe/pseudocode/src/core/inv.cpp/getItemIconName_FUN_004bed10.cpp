// Name: core_inv.cpp_getItemIconName_FUN_004bed10
// Address: 004bed10
// Address Range: [[004bed10, 004bed7b]]
// Convention: __cdecl
// Signature: char * __cdecl core_inv_cpp_getItemIconName_FUN_004bed10(CDemonActor *actor_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl core_inv_cpp_getItemIconName_FUN_004bed10(CDemonActor *actor_ptr)

{
  int iVar1;
  int iVar2;
  char *str2;
  int iVar3;
  
  str2 = (char *)0x1cb03d8;
  iVar3 = 0;
  iVar1 = core_inv_cpp_getItemModel_FUN_004beb40(actor_ptr);
  if (0 < _DAT_01cb03d0) {
    do {
      iVar2 = _stricmp((char *)(iVar1 + 0x78),str2);
      if (iVar2 == 0) {
        return str2 + 0x200;
      }
      iVar3 = iVar3 + 1;
      str2 = str2 + 0x300;
    } while (iVar3 < _DAT_01cb03d0);
  }
  _sprintf(0x1cae480,"Add to dict: %s",(char *)(iVar1 + 0x78));
  return (char *)0x1cae480;
}
