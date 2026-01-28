// Name: core_glass.cpp_freeVectors_FUN_004eb8a0
// Address: 004eb8a0
// Address Range: [[004eb8a0, 004eb8b4]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_freeVectors_FUN_004eb8a0(CVector3f **array)

#include "nocturne.h"

void __cdecl core_glass_cpp_freeVectors_FUN_004eb8a0(CVector3f **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x19,&g_CVectorTypeInfo);
  return;
}
