// Name: core_colonel.cpp_CColonel_dtor_FUN_00436600
// Address: 00436600
// Address Range: [[00436600, 0043664d]]
// Convention: __cdecl
// Signature: CColonel * __cdecl core_colonel_cpp_CColonel_dtor_FUN_00436600(CColonel *this_ptr,uint flags)

#include "nocturne.h"

CColonel * __cdecl core_colonel_cpp_CColonel_dtor_FUN_00436600(CColonel *this_ptr,uint flags)

{
  CColonel *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CColonelTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CColonel *)core_hero_cpp_CHero_dtor_FUN_004ce3d0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
