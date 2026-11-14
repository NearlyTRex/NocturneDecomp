// Name: core_litecone.cpp_CLightCone_dtor_FUN_004e4270
// Address: 004e4270
// Address Range: [[004e4270, 004e42bd]]
// Convention: __cdecl
// Signature: CLightCone * __cdecl core_litecone_cpp_CLightCone_dtor_FUN_004e4270(CLightCone *this_ptr,uint flags)

#include "nocturne.h"

CLightCone * __cdecl core_litecone_cpp_CLightCone_dtor_FUN_004e4270(CLightCone *this_ptr,uint flags)

{
  CLightCone *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CLightConeTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CLightCone *)core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
