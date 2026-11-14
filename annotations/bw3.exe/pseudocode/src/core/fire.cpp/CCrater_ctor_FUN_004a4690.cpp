// Name: core_fire.cpp_CCrater_ctor_FUN_004a4690
// Address: 004a4690
// Address Range: [[004a4690, 004a46aa]]
// Convention: __cdecl
// Signature: CCrater * __cdecl core_fire_cpp_CCrater_ctor_FUN_004a4690(CCrater *this_ptr)

#include "nocturne.h"

CCrater * __cdecl core_fire_cpp_CCrater_ctor_FUN_004a4690(CCrater *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = __arrinit(this_ptr->smoke_positions,3,&g_CVectorTypeInfo);
  return (CCrater *)((int)pvVar1 + -0x1c);
}
