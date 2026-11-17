// Name: core_inv.cpp_getItemDisplayName_FUN_004beca0
// Address: 004beca0
// Address Range: [[004beca0, 004bed0b]]
// Convention: __cdecl
// Signature: char * __cdecl core_inv_cpp_getItemDisplayName_FUN_004beca0(CDemonActor *actor_ptr)

#include "nocturne.h"

char * __cdecl core_inv_cpp_getItemDisplayName_FUN_004beca0(CDemonActor *actor_ptr)

{
  CKeyFramedModelInstance *pCVar1;
  int iVar2;
  SInventoryItemInfo *str2;
  int iVar3;
  
  str2 = g_ItemDefinitionArray;
  iVar3 = 0;
  pCVar1 = core_inv_cpp_getItemModel_FUN_004beb40(actor_ptr);
  if (0 < g_ItemDefinitionCount) {
    do {
      iVar2 = _stricmp(pCVar1->model_name,str2->model_name);
      if (iVar2 == 0) {
        return str2->display_name;
      }
      iVar3 = iVar3 + 1;
      str2 = str2 + 1;
    } while (iVar3 < g_ItemDefinitionCount);
  }
  _sprintf(g_CHAR_ARRAY_01cae380,"Add to dict: %s",pCVar1->model_name);
  return g_CHAR_ARRAY_01cae380;
}
