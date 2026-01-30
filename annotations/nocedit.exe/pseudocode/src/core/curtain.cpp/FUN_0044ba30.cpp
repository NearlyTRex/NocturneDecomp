// Name: core_curtain.cpp_FUN_0044ba30
// Address: 0044ba30
// Address Range: [[0044ba30, 0044ba94]]
// Convention: __cdecl
// Signature: CCurtain * __cdecl core_curtain_cpp_FUN_0044ba30(CCurtain *this_ptr,uint d1,uint d2,uint d3)

#include "nocturne.h"

CCurtain * __cdecl core_curtain_cpp_FUN_0044ba30(CCurtain *this_ptr,uint d1,uint d2,uint d3)

{
  int extraout_EAX;
  CCurtain *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CCurtainTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  core_curtain_cpp_FUN_0044bad0();
  ptr = (CCurtain *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)(extraout_EAX + -0x208),1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
