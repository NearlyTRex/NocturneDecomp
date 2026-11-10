// Name: core_fire.cpp_CCrater_ctor_FUN_004b75f0
// Address: 004b75f0
// Address Range: [[004b75f0, 004b760a]]
// Convention: __cdecl
// Signature: CCrater * __cdecl core_fire_cpp_CCrater_ctor_FUN_004b75f0(CCrater *this_ptr)

#include "nocturne.h"

CCrater * __cdecl core_fire_cpp_CCrater_ctor_FUN_004b75f0(CCrater *this_ptr)

{
  int iVar1;
  
  iVar1 = __arrinit(this_ptr->smoke_positions,3,&g_CVectorTypeInfo);
  return (CCrater *)(iVar1 + -0x1c);
}
