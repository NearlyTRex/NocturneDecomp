// Name: core_inv.cpp_getItemIconName_FUN_004fcf70
// Address: 004fcf70
// Address Range: [[004fcf70, 004fcfdb]]
// Convention: __cdecl
// Signature: char * core_inv.cpp_getItemIconName_FUN_004fcf70(CDemonActor * actor_ptr)

#include "nocturne.h"

char * __cdecl core_inv_cpp_getItemIconName_FUN_004fcf70(CDemonActor *actor_ptr)

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
      iVar2 = crt_string_c_stricmp_FUN_005fe7f0(pCVar1->model_name,str2->string1);
      if (iVar2 == 0) {
        return str2->string3;
      }
      iVar3 = iVar3 + 1;
      str2 = str2 + 1;
    } while (iVar3 < g_ItemDefinitionCount);
  }
  crt_stdio_c_sprintf_FUN_005fdbd0
            (g_ErrorMessageBuffer_02db8b70,"Add to dict: %s",pCVar1->model_name);
  return g_ErrorMessageBuffer_02db8b70;
}
