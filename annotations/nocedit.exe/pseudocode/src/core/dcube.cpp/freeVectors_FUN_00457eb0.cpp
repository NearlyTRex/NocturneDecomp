// Name: core_dcube.cpp_freeVectors_FUN_00457eb0
// Address: 00457eb0
// Address Range: [[00457eb0, 00457ec4]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_freeVectors_FUN_00457eb0(CVector3f **array)

#include "nocturne.h"

void __cdecl core_dcube_cpp_freeVectors_FUN_00457eb0(CVector3f **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x10,&g_CVectorTypeInfo);
  return;
}
