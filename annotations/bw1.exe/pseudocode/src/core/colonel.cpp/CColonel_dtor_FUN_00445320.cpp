// Name: core_colonel.cpp_CColonel_dtor_FUN_00445320
// Address: 00445320
// Address Range: [[00445320, 0044536d]]
// Convention: __cdecl
// Signature: CColonel * __cdecl core_colonel_cpp_CColonel_dtor_FUN_00445320(CColonel *this_ptr,uint flags)

#include "nocturne.h"

CColonel * __cdecl core_colonel_cpp_CColonel_dtor_FUN_00445320(CColonel *this_ptr,uint flags)

{
  CColonel *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CColonelTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CColonel *)core_hero_cpp_FUN_004ea980(this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
