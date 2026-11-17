// Name: core_inv.cpp_getItemDescription_FUN_004bed10
// Address: 004bed10
// Address Range: [[004bed10, 004bed7b]]
// Convention: __cdecl
// Signature: char * __cdecl core_inv_cpp_getItemDescription_FUN_004bed10(CDemonActor *actor_ptr)

#include "nocturne.h"

char * __cdecl core_inv_cpp_getItemDescription_FUN_004bed10(CDemonActor *actor_ptr)

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
        return str2->description;
      }
      iVar3 = iVar3 + 1;
      str2 = str2 + 1;
    } while (iVar3 < g_ItemDefinitionCount);
  }
  _sprintf(g_CHAR_ARRAY_01cae480,"Add to dict: %s",pCVar1->model_name);
  return g_CHAR_ARRAY_01cae480;
}
