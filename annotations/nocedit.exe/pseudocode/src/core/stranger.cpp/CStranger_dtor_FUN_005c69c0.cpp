// Name: core_stranger.cpp_CStranger_dtor_FUN_005c69c0
// Address: 005c69c0
// Address Range: [[005c69c0, 005c6a0d]]
// Convention: __cdecl
// Signature: CStranger * core_stranger.cpp_CStranger_dtor_FUN_005c69c0(CStranger * this_ptr, uint d1, uint d2, uint d3, uint d4)

#include "nocturne.h"

CStranger * __cdecl
core_stranger_cpp_CStranger_dtor_FUN_005c69c0(CStranger *this_ptr,uint d1,uint d2,uint d3,uint d4)

{
  CStranger *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CStrangerTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  core_hero_cpp_CHero_dtor_FUN_004f2470
            (&this_ptr->base_hero,1,unaff_EBX,unaff_retaddr,(uint)this_ptr,d1,d2,d3,d4);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
