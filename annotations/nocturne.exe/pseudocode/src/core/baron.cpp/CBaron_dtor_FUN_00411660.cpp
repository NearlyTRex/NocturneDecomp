// Name: core_baron.cpp_CBaron_dtor_FUN_00411660
// Address: 00411660
// Address Range: [[00411660, 004116ad]]
// Convention: __cdecl
// Signature: CBaron * __cdecl core_baron_cpp_CBaron_dtor_FUN_00411660(CBaron *this_ptr,uint flags)

#include "nocturne.h"

CBaron * __cdecl core_baron_cpp_CBaron_dtor_FUN_00411660(CBaron *this_ptr,uint flags)

{
  CBaron *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CBaronTypeInfo_00599d30);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = (CBaron *)core_hero_cpp_CHero_dtor_FUN_004b4800(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
