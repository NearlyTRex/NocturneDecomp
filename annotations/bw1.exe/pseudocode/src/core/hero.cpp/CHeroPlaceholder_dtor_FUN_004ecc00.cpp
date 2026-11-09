// Name: core_hero.cpp_CHeroPlaceholder_dtor_FUN_004ecc00
// Address: 004ecc00
// Address Range: [[004ecc00, 004ecc57]]
// Convention: __cdecl
// Signature: CHeroPlaceholder * __cdecl core_hero_cpp_CHeroPlaceholder_dtor_FUN_004ecc00(CHeroPlaceholder *this_ptr,uint flags)

#include "nocturne.h"

CHeroPlaceholder * __cdecl core_hero_cpp_CHeroPlaceholder_dtor_FUN_004ecc00(CHeroPlaceholder *this_ptr,uint flags)

{
  CHeroPlaceholder *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CHeroPlaceholderTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  *(byte ***)&this_ptr->field_0x154 = &g_CHeroPlaceholderVTable;
  pCVar1 = (CHeroPlaceholder *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408730((CDemonActor *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
