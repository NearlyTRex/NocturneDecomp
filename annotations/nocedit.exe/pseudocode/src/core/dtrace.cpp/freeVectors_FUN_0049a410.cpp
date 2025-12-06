// Name: core_dtrace.cpp_freeVectors_FUN_0049a410
// Address: 0049a410
// Address Range: [[0049a410, 0049a427]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_freeVectors_FUN_0049a410(CVector3f * * array)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_freeVectors_FUN_0049a410(CVector3f **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,20000,&g_CVectorTypeInfo);
  return;
}
