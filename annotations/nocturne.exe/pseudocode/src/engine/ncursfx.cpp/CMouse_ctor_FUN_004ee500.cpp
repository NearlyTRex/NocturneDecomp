// Name: engine_ncursfx.cpp_CMouse_ctor_FUN_004ee500
// Address: 004ee500
// Address Range: [[004ee500, 004ee557]]
// Convention: __cdecl
// Signature: CMouse * __cdecl engine_ncursfx_cpp_CMouse_ctor_FUN_004ee500(CMouse *this_ptr)

#include "nocturne.h"

CMouse * __cdecl engine_ncursfx_cpp_CMouse_ctor_FUN_004ee500(CMouse *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = __arrinit(this_ptr,8,&g_CAlphaBitmapTypeInfo_0059df00);
  pvVar1 = __arrinit
                     ((void *)((int)pvVar1 + 0xa0),7,&g_CAlphaBitmapTypeInfo_0059df00);
  pvVar1 = __arrinit
                     ((void *)((int)pvVar1 + 0x8c),0xf,&g_CAlphaBitmapTypeInfo_0059df00);
  *(uint *)((int)pvVar1 + 300) = 0;
  *(uint *)((int)pvVar1 + 0x130) = 0;
  return (CMouse *)((int)pvVar1 + -300);
}
