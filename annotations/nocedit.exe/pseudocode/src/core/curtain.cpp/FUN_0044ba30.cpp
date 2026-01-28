// Name: core_curtain.cpp_FUN_0044ba30
// Address: 0044ba30
// Address Range: [[0044ba30, 0044ba94]]
// Convention: __cdecl
// Signature: CCurtain * __cdecl core_curtain_cpp_FUN_0044ba30(CCurtain *this_ptr,uint d1,uint d2,uint d3)

#include "nocturne.h"

CCurtain * __cdecl core_curtain_cpp_FUN_0044ba30(CCurtain *this_ptr,uint d1,uint d2,uint d3)

{
  int iVar1;
  CCurtain *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CCurtainTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  iVar1 = core_curtain_cpp_FUN_0044bad0();
  ptr = (CCurtain *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)(iVar1 + -0x208),1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
