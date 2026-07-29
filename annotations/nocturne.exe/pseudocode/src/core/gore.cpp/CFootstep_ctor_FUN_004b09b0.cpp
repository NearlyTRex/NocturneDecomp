// Name: core_gore.cpp_CFootstep_ctor_FUN_004b09b0
// Address: 004b09b0
// Address Range: [[004b09b0, 004b09ca]]
// Convention: __cdecl
// Signature: CFootstep * __cdecl core_gore_cpp_CFootstep_ctor_FUN_004b09b0(CFootstep *this_ptr)

#include "nocturne.h"

CFootstep * __cdecl core_gore_cpp_CFootstep_ctor_FUN_004b09b0(CFootstep *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = __arrinit(this_ptr->corners,4,&g_CVectorTypeInfo_005993b0);
  return (CFootstep *)((int)pvVar1 + -8);
}
