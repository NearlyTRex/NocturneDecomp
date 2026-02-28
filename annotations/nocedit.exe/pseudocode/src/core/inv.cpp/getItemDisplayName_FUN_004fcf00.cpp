// Name: core_inv.cpp_getItemDisplayName_FUN_004fcf00
// Address: 004fcf00
// Address Range: [[004fcf00, 004fcf6b]]
// Convention: __cdecl
// Signature: char * __cdecl core_inv_cpp_getItemDisplayName_FUN_004fcf00(CDemonActor *actor_ptr)

#include "nocturne.h"

char * __cdecl core_inv_cpp_getItemDisplayName_FUN_004fcf00(CDemonActor *actor_ptr)

{
  CKeyFramedModelInstance *pCVar1;
  int iVar2;
  SInventoryItemInfo *str2;
  int iVar3;
  
  str2 = g_ItemDefinitionArray;
  iVar3 = 0;
  pCVar1 = core_inv_cpp_getItemModel_FUN_004fcda0(actor_ptr);
  if (0 < g_ItemDefinitionCount) {
    do {
      iVar2 = _stricmp(pCVar1->model_name,str2->string1);
      if (iVar2 == 0) {
        return str2->string2;
      }
      iVar3 = iVar3 + 1;
      str2 = str2 + 1;
    } while (iVar3 < g_ItemDefinitionCount);
  }
  _sprintf
            (g_ErrorMessageBuffer_02db8a70,"Add to dict: %s",pCVar1->model_name);
  return g_ErrorMessageBuffer_02db8a70;
}
