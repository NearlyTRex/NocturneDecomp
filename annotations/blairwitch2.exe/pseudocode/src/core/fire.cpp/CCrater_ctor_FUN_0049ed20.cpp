// Name: core_fire.cpp_CCrater_ctor_FUN_0049ed20
// Address: 0049ed20
// Address Range: [[0049ed20, 0049ed3a]]
// Convention: __cdecl
// Signature: CCrater * __cdecl core_fire_cpp_CCrater_ctor_FUN_0049ed20(CCrater *this_ptr)

#include "nocturne.h"

CCrater * __cdecl core_fire_cpp_CCrater_ctor_FUN_0049ed20(CCrater *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = __arrinit(this_ptr->smoke_positions,3,&g_CVectorTypeInfo);
  return (CCrater *)((int)pvVar1 + -0x1c);
}
