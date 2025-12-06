// Name: core_morph.cpp_freeMorphModels_FUN_0052cd10
// Address: 0052cd10
// Address Range: [[0052cd10, 0052cd24]]
// Convention: __cdecl
// Signature: void core_morph.cpp_freeMorphModels_FUN_0052cd10(CMorphModel * * array)

#include "nocturne.h"

void __cdecl core_morph_cpp_freeMorphModels_FUN_0052cd10(CMorphModel **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,2,&g_CMorphModelTypeInfo);
  return;
}
