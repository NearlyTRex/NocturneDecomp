// Name: core_curtain.cpp_CCurtain_dtor_FUN_0044ba30
// Address: 0044ba30
// Address Range: [[0044ba30, 0044ba94]]
// Convention: __cdecl
// Signature: CCurtain * __cdecl core_curtain_cpp_CCurtain_dtor_FUN_0044ba30(CCurtain *this_ptr,uint flags)

#include "nocturne.h"

CCurtain * __cdecl core_curtain_cpp_CCurtain_dtor_FUN_0044ba30(CCurtain *this_ptr,uint flags)

{
  CCurtain_ptr_520 pSVar1;
  CCurtain *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CCurtainTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pSVar1 = (CCurtain_ptr_520)
           core_curtain_cpp_SCurtainVertex_arrdtor_FUN_0044bad0(this_ptr->vertices,0);
  ptr = (CCurtain *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&ADJ(pSVar1)->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
  return ptr;
}
