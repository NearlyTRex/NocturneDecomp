// Name: core_morph.cpp_freeVectors_FUN_0052cc90
// Address: 0052cc90
// Address Range: [[0052cc90, 0052cca4]]
// Convention: __cdecl
// Signature: void core_morph.cpp_freeVectors_FUN_0052cc90(CVector3f * * array)

#include "nocturne.h"

void __cdecl core_morph_cpp_freeVectors_FUN_0052cc90(CVector3f **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,2,&g_CVectorTypeInfo);
  return;
}
