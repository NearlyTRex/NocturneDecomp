// Name: core_dynamite.cpp_CDynamite_dtor_FUN_0049d120
// Address: 0049d120
// Address Range: [[0049d120, 0049d16d]]
// Convention: __cdecl
// Signature: CDynamite * __cdecl core_dynamite_cpp_CDynamite_dtor_FUN_0049d120(CDynamite *this_ptr,uint d1,uint d2)

#include "nocturne.h"

CDynamite * __cdecl
core_dynamite_cpp_CDynamite_dtor_FUN_0049d120(CDynamite *this_ptr,uint d1,uint d2)

{
  CDynamite *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CDynamiteTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CDynamite *)
        core_weapon_cpp_CWeapon_dtor_FUN_005edf80(&this_ptr->base,1,unaff_EBX,unaff_retaddr);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
