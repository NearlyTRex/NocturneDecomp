// Name: engine_ncursfx.cpp_CMouse_ctor_FUN_00510010
// Address: 00510010
// Address Range: [[00510010, 00510067]]
// Convention: __cdecl
// Signature: CMouse * __cdecl engine_ncursfx_cpp_CMouse_ctor_FUN_00510010(CMouse *this_ptr)

#include "nocturne.h"

CMouse * __cdecl engine_ncursfx_cpp_CMouse_ctor_FUN_00510010(CMouse *this_ptr)

{
  int iVar1;
  
  iVar1 = __arrinit(this_ptr,8,&g_CAlphaBitmapTypeInfo);
  iVar1 = __arrinit(iVar1 + 0xa0,7,&g_CAlphaBitmapTypeInfo);
  iVar1 = __arrinit(iVar1 + 0x8c,0xf,&g_CAlphaBitmapTypeInfo);
  *(uint *)(iVar1 + 300) = 0;
  *(uint *)(iVar1 + 0x130) = 0;
  return (CMouse *)(iVar1 + -300);
}
