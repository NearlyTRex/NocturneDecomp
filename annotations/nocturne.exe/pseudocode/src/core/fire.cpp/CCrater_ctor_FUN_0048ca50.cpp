// Name: core_fire.cpp_CCrater_ctor_FUN_0048ca50
// Address: 0048ca50
// Address Range: [[0048ca50, 0048ca6a]]
// Convention: __cdecl
// Signature: CCrater * __cdecl core_fire_cpp_CCrater_ctor_FUN_0048ca50(CCrater *this_ptr)

#include "nocturne.h"

CCrater * __cdecl core_fire_cpp_CCrater_ctor_FUN_0048ca50(CCrater *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = __arrinit
                     (this_ptr->smoke_positions,3,&g_CVectorTypeInfo_005993b0);
  return (CCrater *)((int)pvVar1 + -0x1c);
}
