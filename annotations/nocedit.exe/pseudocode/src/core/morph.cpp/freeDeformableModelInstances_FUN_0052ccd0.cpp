// Name: core_morph.cpp_freeDeformableModelInstances_FUN_0052ccd0
// Address: 0052ccd0
// Address Range: [[0052ccd0, 0052cce4]]
// Convention: __cdecl
// Signature: void core_morph.cpp_freeDeformableModelInstances_FUN_0052ccd0(CDeformableModelInstance * * array)

#include "nocturne.h"

void __cdecl
core_morph_cpp_freeDeformableModelInstances_FUN_0052ccd0(CDeformableModelInstance **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,2,&g_CDeformableModelInstanceTypeInfo);
  return;
}
