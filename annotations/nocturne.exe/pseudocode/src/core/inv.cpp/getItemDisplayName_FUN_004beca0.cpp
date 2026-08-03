// Name: core_inv.cpp_getItemDisplayName_FUN_004beca0
// Address: 004beca0
// Address Range: [[004beca0, 004bed0b]]
// Convention: __cdecl
// Signature: char * __cdecl core_inv_cpp_getItemDisplayName_FUN_004beca0(CDemonActor *actor_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl core_inv_cpp_getItemDisplayName_FUN_004beca0(CDemonActor *actor_ptr)

{
  CKeyFramedModelInstance *pCVar1;
  int iVar2;
  char *str2;
  int iVar3;
  
  str2 = (char *)0x1cb03d8;
  iVar3 = 0;
  pCVar1 = core_inv_cpp_getItemModel_FUN_004beb40(actor_ptr);
  if (0 < _DAT_01cb03d0) {
    do {
      iVar2 = _stricmp(pCVar1->model_name,str2);
      if (iVar2 == 0) {
        return str2 + 0x100;
      }
      iVar3 = iVar3 + 1;
      str2 = str2 + 0x300;
    } while (iVar3 < _DAT_01cb03d0);
  }
  _sprintf((char *)0x1cae380,"Add to dict: %s");
  return (char *)0x1cae380;
}
