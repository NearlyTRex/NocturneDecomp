// Name: core_stranger.cpp_CStranger_dtor_FUN_00591e60
// Address: 00591e60
// Address Range: [[00591e60, 00591ead]]
// Convention: __cdecl
// Signature: CStranger * __cdecl core_stranger_cpp_CStranger_dtor_FUN_00591e60(CStranger *this_ptr,uint flags)

#include "nocturne.h"

CStranger * __cdecl core_stranger_cpp_CStranger_dtor_FUN_00591e60(CStranger *this_ptr,uint flags)

{
  CStranger *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CStrangerTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CStranger *)core_hero_cpp_FUN_004ea980(this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
