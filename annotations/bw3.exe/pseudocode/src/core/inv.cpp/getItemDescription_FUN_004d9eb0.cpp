// Name: core_inv.cpp_getItemDescription_FUN_004d9eb0
// Address: 004d9eb0
// Address Range: [[004d9eb0, 004d9f1b]]
// Convention: __cdecl
// Signature: char * __cdecl core_inv_cpp_getItemDescription_FUN_004d9eb0(CDemonActor *actor_ptr)

#include "nocturne.h"

char * __cdecl core_inv_cpp_getItemDescription_FUN_004d9eb0(CDemonActor *actor_ptr)

{
  CKeyFramedModelInstance *pCVar1;
  int iVar2;
  SInventoryItemInfo *str2;
  int iVar3;
  
  str2 = g_ItemDefinitionArray;
  iVar3 = 0;
  pCVar1 = core_inv_cpp_getItemModel_FUN_004d9d20(actor_ptr);
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
  _sprintf(g_CHAR_ARRAY_01d5bd80,"Add to dict: %s");
  return g_CHAR_ARRAY_01d5bd80;
}
