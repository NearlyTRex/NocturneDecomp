// Name: core_curtain.cpp_CCurtain_dtor_FUN_00448650
// Address: 00448650
// Address Range: [[00448650, 0044869d]]
// Convention: __cdecl
// Signature: CCurtain * __cdecl core_curtain_cpp_CCurtain_dtor_FUN_00448650(CCurtain *this_ptr,uint flags)

#include "nocturne.h"

CCurtain * __cdecl core_curtain_cpp_CCurtain_dtor_FUN_00448650(CCurtain *this_ptr,uint flags)

{
  CCurtain *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CCurtainTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CCurtain *)core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
