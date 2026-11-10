// Name: core_dmodel.cpp_freeAllModels_FUN_004624d0
// Address: 004624d0
// Address Range: [[004624d0, 004624fa]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_freeAllModels_FUN_004624d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dmodel_cpp_freeAllModels_FUN_004624d0(void)

{
  CKeyFramedModel *pCVar1;
  
  pCVar1 = g_CKeyFramedModelPool;
  do {
    core_dmodel_cpp_FUN_00460e10(pCVar1);
    pCVar1 = pCVar1 + 1;
  } while (pCVar1 != g_CKeyFramedModelPool + sizeof(g_CKeyFramedModelPool) / sizeof(g_CKeyFramedModelPool[0]));
  _DAT_01b4b848 = 0;
  return;
}
