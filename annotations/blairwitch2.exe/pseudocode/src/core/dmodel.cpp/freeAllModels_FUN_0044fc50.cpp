// Name: core_dmodel.cpp_freeAllModels_FUN_0044fc50
// Address: 0044fc50
// Address Range: [[0044fc50, 0044fc7a]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_freeAllModels_FUN_0044fc50(void)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_freeAllModels_FUN_0044fc50(void)

{
  CKeyFramedModel *this_ptr;
  
  this_ptr = g_CKeyFramedModelPool;
  do {
    core_dmodel_cpp_CKeyFramedModel_free_FUN_0044e590(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != g_CKeyFramedModelPool + sizeof(g_CKeyFramedModelPool) / sizeof(g_CKeyFramedModelPool[0]));
  g_INT_01b13a1c = 0;
  return;
}
