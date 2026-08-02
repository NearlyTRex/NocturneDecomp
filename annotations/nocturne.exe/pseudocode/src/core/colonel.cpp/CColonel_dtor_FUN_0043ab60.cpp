// Name: core_colonel.cpp_CColonel_dtor_FUN_0043ab60
// Address: 0043ab60
// Address Range: [[0043ab60, 0043abad]]
// Convention: __cdecl
// Signature: CColonel * __cdecl core_colonel_cpp_CColonel_dtor_FUN_0043ab60(CColonel *this_ptr,uint flags)

#include "nocturne.h"

CColonel * __cdecl core_colonel_cpp_CColonel_dtor_FUN_0043ab60(CColonel *this_ptr,uint flags)

{
  CColonel *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CColonelTypeInfo_0059b6c0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = (CColonel *)core_hero_cpp_CHero_dtor_FUN_004b4800(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
