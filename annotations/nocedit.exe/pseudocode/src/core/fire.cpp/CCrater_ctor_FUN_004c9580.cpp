// Name: core_fire.cpp_CCrater_ctor_FUN_004c9580
// Address: 004c9580
// Address Range: [[004c9580, 004c959a]]
// Convention: __cdecl
// Signature: CCrater * __cdecl core_fire_cpp_CCrater_ctor_FUN_004c9580(CCrater *this_ptr)

#include "nocturne.h"

CCrater * __cdecl core_fire_cpp_CCrater_ctor_FUN_004c9580(CCrater *this_ptr)

{
  CCrater_ptr_28 pvVar1;
  
  pvVar1 = __arrinit(this_ptr->smoke_positions,3,&g_CVectorTypeInfo);
  return ADJ(pvVar1);
}
