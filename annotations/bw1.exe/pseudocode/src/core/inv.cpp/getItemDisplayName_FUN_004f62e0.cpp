// Name: core_inv.cpp_getItemDisplayName_FUN_004f62e0
// Address: 004f62e0
// Address Range: [[004f62e0, 004f634b]]
// Convention: __cdecl
// Signature: char * __cdecl core_inv_cpp_getItemDisplayName_FUN_004f62e0(CDemonActor *actor_ptr)

#include "nocturne.h"

char * __cdecl core_inv_cpp_getItemDisplayName_FUN_004f62e0(CDemonActor *actor_ptr)

{
  CKeyFramedModelInstance *pCVar1;
  int iVar2;
  SInventoryItemInfo *str2;
  int iVar3;
  
  str2 = g_SInventoryItemInfo_ARRAY_01d08dd0;
  iVar3 = 0;
  pCVar1 = core_inv_cpp_getItemModel_FUN_004f60c0(actor_ptr);
  if (0 < g_INT_01d08dc8) {
    do {
      iVar2 = _stricmp(pCVar1->model_name,str2->model_name);
      if (iVar2 == 0) {
        return str2->display_name;
      }
      iVar3 = iVar3 + 1;
      str2 = str2 + 1;
    } while (iVar3 < g_INT_01d08dc8);
  }
  _sprintf(g_CHAR_ARRAY_01d06d70,"Add to dict: %s");
  return g_CHAR_ARRAY_01d06d70;
}
