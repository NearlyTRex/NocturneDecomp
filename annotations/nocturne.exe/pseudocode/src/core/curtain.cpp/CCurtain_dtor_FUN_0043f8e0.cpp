// Name: core_curtain.cpp_CCurtain_dtor_FUN_0043f8e0
// Address: 0043f8e0
// Address Range: [[0043f8e0, 0043f944]]
// Convention: __cdecl
// Signature: CCurtain * __cdecl core_curtain_cpp_CCurtain_dtor_FUN_0043f8e0(CCurtain *this_ptr,uint flags)

#include "nocturne.h"

CCurtain * __cdecl core_curtain_cpp_CCurtain_dtor_FUN_0043f8e0(CCurtain *this_ptr,uint flags)

{
  SCurtainVertex *pSVar1;
  CCurtain *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CCurtainTypeInfo_0059bdb0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pSVar1 = core_curtain_cpp_FUN_0043f980(this_ptr->vertices,0);
  pCVar2 = (CCurtain *)
           core_actor_cpp_CDemonActor_dtor_FUN_00409ea0((CDemonActor *)&pSVar1[-5].neighbor_count,1)
  ;
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
