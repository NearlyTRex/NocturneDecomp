// Name: core_icepick.cpp_CIcePick_dtor_FUN_004d6540
// Address: 004d6540
// Address Range: [[004d6540, 004d658d]]
// Convention: __cdecl
// Signature: CIcePick * __cdecl core_icepick_cpp_CIcePick_dtor_FUN_004d6540(CIcePick *this_ptr,uint flags)

#include "nocturne.h"

CIcePick * __cdecl core_icepick_cpp_CIcePick_dtor_FUN_004d6540(CIcePick *this_ptr,uint flags)

{
  CIcePick *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CIcePickTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CIcePick *)core_hero_cpp_CHero_dtor_FUN_004ce3d0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
