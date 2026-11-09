// Name: core_scat.cpp_CScat_dtor_FUN_00543070
// Address: 00543070
// Address Range: [[00543070, 005430bd]]
// Convention: __cdecl
// Signature: CScat * __cdecl core_scat_cpp_CScat_dtor_FUN_00543070(CScat *this_ptr,uint flags)

#include "nocturne.h"

CScat * __cdecl core_scat_cpp_CScat_dtor_FUN_00543070(CScat *this_ptr,uint flags)

{
  CScat *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CScatTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CScat *)core_hero_cpp_FUN_004ea980(this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
