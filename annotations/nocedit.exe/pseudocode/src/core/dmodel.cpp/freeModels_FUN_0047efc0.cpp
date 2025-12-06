// Name: core_dmodel.cpp_freeModels_FUN_0047efc0
// Address: 0047efc0
// Address Range: [[0047efc0, 0047efd7]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_freeModels_FUN_0047efc0(CKeyFramedModel * * array)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_freeModels_FUN_0047efc0(CKeyFramedModel **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x100,&g_CKeyFramedModelTypeInfo);
  return;
}
