// Name: core_scat.cpp_CScat_dtor_FUN_00520f40
// Address: 00520f40
// Address Range: [[00520f40, 00520f8d]]
// Convention: __cdecl
// Signature: CScat * __cdecl core_scat_cpp_CScat_dtor_FUN_00520f40(CScat *this_ptr,uint flags)

#include "nocturne.h"

CScat * __cdecl core_scat_cpp_CScat_dtor_FUN_00520f40(CScat *this_ptr,uint flags)

{
  CScat *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CScatTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CScat *)core_hero_cpp_CHero_dtor_FUN_004ce3d0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
