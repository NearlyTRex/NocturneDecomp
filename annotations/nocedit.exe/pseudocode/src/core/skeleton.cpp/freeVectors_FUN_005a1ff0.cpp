// Name: core_skeleton.cpp_freeVectors_FUN_005a1ff0
// Address: 005a1ff0
// Address Range: [[005a1ff0, 005a2007]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_freeVectors_FUN_005a1ff0(CVector3f * * array)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_freeVectors_FUN_005a1ff0(CVector3f **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,3000,&g_CVectorTypeInfo);
  return;
}
