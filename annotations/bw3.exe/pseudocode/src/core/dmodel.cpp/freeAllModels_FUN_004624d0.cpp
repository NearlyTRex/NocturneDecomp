// Name: core_dmodel.cpp_freeAllModels_FUN_004624d0
// Address: 004624d0
// Address Range: [[004624d0, 004624fa]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_freeAllModels_FUN_004624d0(void)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_freeAllModels_FUN_004624d0(void)

{
  CKeyFramedModel *this_ptr;
  
  this_ptr = g_CKeyFramedModelPool;
  do {
    core_dmodel_cpp_CKeyFramedModel_free_FUN_00460e10(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != g_CKeyFramedModelPool + sizeof(g_CKeyFramedModelPool) / sizeof(g_CKeyFramedModelPool[0]));
  g_KeyframeModelCount = 0;
  return;
}
