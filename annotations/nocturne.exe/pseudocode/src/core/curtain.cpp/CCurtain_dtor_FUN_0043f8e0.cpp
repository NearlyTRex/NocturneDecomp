// Name: core_curtain.cpp_CCurtain_dtor_FUN_0043f8e0
// Address: 0043f8e0
// Address Range: [[0043f8e0, 0043f944]]
// Convention: __cdecl
// Signature: CCurtain * __cdecl core_curtain_cpp_CCurtain_dtor_FUN_0043f8e0(CCurtain *this_ptr,uint flags)

#include "nocturne.h"

CCurtain * __cdecl core_curtain_cpp_CCurtain_dtor_FUN_0043f8e0(CCurtain *this_ptr,uint flags)

{
  SCurtainVertex *pSVar1;
  CCurtain *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CCurtainTypeInfo_0059bdb0);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  pSVar1 = core_curtain_cpp_SCurtainVertex_arrdtor1000_FUN_0043f980(this_ptr->vertices,0);
  ptr = (CCurtain *)
        core_actor_cpp_CDemonActor_dtor_FUN_00409ea0((CDemonActor *)&pSVar1[-5].neighbor_count,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
