// Name: core_fire.cpp_CCrater_ctor_FUN_004c9580
// Address: 004c9580
// Address Range: [[004c9580, 004c959a]]
// Convention: __cdecl
// Signature: CCrater * core_fire.cpp_CCrater_ctor_FUN_004c9580(CCrater * this_ptr)

#include "nocturne.h"

CCrater * __cdecl core_fire_cpp_CCrater_ctor_FUN_004c9580(CCrater *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (this_ptr->field0_0x0 + 0x1c,3,&g_CVectorTypeInfo);
  return (CCrater *)((int)pvVar1 + -0x1c);
}
