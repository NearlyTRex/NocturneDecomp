// Name: core_curtain.cpp_CCurtain_dtor_FUN_0044c510
// Address: 0044c510
// Address Range: [[0044c510, 0044c55d]]
// Convention: unknown
// Signature: CCurtain * core_curtain_cpp_CCurtain_dtor_FUN_0044c510(CCurtain *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CCurtain * core_curtain_cpp_CCurtain_dtor_FUN_0044c510(CCurtain *this_ptr,uint flags)

{
  CCurtain *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CCurtainTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CCurtain *)core_actor_cpp_CDemonActor_dtor_FUN_00408730(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
