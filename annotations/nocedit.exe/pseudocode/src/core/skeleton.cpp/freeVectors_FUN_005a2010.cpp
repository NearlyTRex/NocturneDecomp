// Name: core_skeleton.cpp_freeVectors_FUN_005a2010
// Address: 005a2010
// Address Range: [[005a2010, 005a2027]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_freeVectors_FUN_005a2010(CVector3f **array)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_freeVectors_FUN_005a2010(CVector3f **array)

{
  __arrfini(array,5000,&g_CVectorTypeInfo);
  return;
}
