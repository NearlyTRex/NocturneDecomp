// Name: core_cloth.cpp_freeVectors_FUN_0043e460
// Address: 0043e460
// Address Range: [[0043e460, 0043e474]]
// Convention: __cdecl
// Signature: int core_cloth.cpp_freeVectors_FUN_0043e460(CVector3f * * array)

#include "nocturne.h"

int __cdecl core_cloth_cpp_freeVectors_FUN_0043e460(CVector3f **array)

{
  int iVar1;
  
  iVar1 = crt_memory_c_freeTypeArray_FUN_005feee9(array,3,&g_CVectorTypeInfo);
  return iVar1;
}
