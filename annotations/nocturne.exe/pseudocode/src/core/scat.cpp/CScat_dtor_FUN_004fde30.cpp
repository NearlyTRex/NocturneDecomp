// Name: core_scat.cpp_CScat_dtor_FUN_004fde30
// Address: 004fde30
// Address Range: [[004fde30, 004fde7d]]
// Convention: __cdecl
// Signature: CScat * __cdecl core_scat_cpp_CScat_dtor_FUN_004fde30(CScat *this_ptr,uint flags)

#include "nocturne.h"

CScat * __cdecl core_scat_cpp_CScat_dtor_FUN_004fde30(CScat *this_ptr,uint flags)

{
  CScat *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CScatTypeInfo_005a16a0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = (CScat *)core_hero_cpp_CHero_dtor_FUN_004b4800(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
