// Name: core_gasmask.cpp_CGasMask_dtor_FUN_004e5f40
// Address: 004e5f40
// Address Range: [[004e5f40, 004e5f8d]]
// Convention: __cdecl
// Signature: CGasMask * __cdecl core_gasmask_cpp_CGasMask_dtor_FUN_004e5f40(CGasMask *this_ptr,uint d1,uint d2)

#include "nocturne.h"

CGasMask * __cdecl core_gasmask_cpp_CGasMask_dtor_FUN_004e5f40(CGasMask *this_ptr,uint d1,uint d2)

{
  CGasMask *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CGasMaskTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CGasMask *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base,1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
