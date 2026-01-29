// Name: core_actor.cpp_freeVectors_FUN_00410500
// Address: 00410500
// Address Range: [[00410500, 00410514]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_freeVectors_FUN_00410500(CVector3f **array)

#include "nocturne.h"

void __cdecl core_actor_cpp_freeVectors_FUN_00410500(CVector3f **array)

{
  __arrfini(array,10,&g_CVectorTypeInfo);
  return;
}
