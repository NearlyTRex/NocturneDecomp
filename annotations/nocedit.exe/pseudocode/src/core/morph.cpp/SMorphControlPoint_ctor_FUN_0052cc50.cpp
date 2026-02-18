// Name: core_morph.cpp_SMorphControlPoint_ctor_FUN_0052cc50
// Address: 0052cc50
// Address Range: [[0052cc50, 0052cc6a]]
// Convention: __cdecl
// Signature: SMorphControlPoint * __cdecl core_morph_cpp_SMorphControlPoint_ctor_FUN_0052cc50(SMorphControlPoint *this_ptr)

#include "nocturne.h"

SMorphControlPoint * __cdecl core_morph_cpp_SMorphControlPoint_ctor_FUN_0052cc50(SMorphControlPoint *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = __arrinit(this_ptr->position,2,&g_CVectorTypeInfo);
  return (SMorphControlPoint *)((int)pvVar1 + -8);
}
