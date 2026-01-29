// Name: core_morph.cpp_freeMorphModels_FUN_0052cd10
// Address: 0052cd10
// Address Range: [[0052cd10, 0052cd24]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_freeMorphModels_FUN_0052cd10(CMorphModel **array)

#include "nocturne.h"

void __cdecl core_morph_cpp_freeMorphModels_FUN_0052cd10(CMorphModel **array)

{
  __arrfini(array,2,&g_CMorphModelTypeInfo);
  return;
}
