// Name: core_gore.cpp_CFootstep_ctor_FUN_004cf1a0
// Address: 004cf1a0
// Address Range: [[004cf1a0, 004cf1ba]]
// Convention: __cdecl
// Signature: CFootstep * __cdecl core_gore_cpp_CFootstep_ctor_FUN_004cf1a0(CFootstep *this_ptr)

#include "nocturne.h"

CFootstep * __cdecl core_gore_cpp_CFootstep_ctor_FUN_004cf1a0(CFootstep *this_ptr)

{
  int iVar1;
  
  iVar1 = __arrinit(this_ptr->corners,4,&g_CVectorTypeInfo);
  return (CFootstep *)(iVar1 + -0xc);
}
