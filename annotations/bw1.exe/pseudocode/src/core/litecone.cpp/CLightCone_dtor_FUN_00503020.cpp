// Name: core_litecone.cpp_CLightCone_dtor_FUN_00503020
// Address: 00503020
// Address Range: [[00503020, 0050306d]]
// Convention: __cdecl
// Signature: CLightCone * __cdecl core_litecone_cpp_CLightCone_dtor_FUN_00503020(CLightCone *this_ptr,uint flags)

#include "nocturne.h"

CLightCone * __cdecl core_litecone_cpp_CLightCone_dtor_FUN_00503020(CLightCone *this_ptr,uint flags)

{
  CLightCone *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CLightConeTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CLightCone *)core_actor_cpp_CDemonActor_dtor_FUN_00408730(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
