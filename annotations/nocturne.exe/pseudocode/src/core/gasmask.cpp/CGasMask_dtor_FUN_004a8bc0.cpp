// Name: core_gasmask.cpp_CGasMask_dtor_FUN_004a8bc0
// Address: 004a8bc0
// Address Range: [[004a8bc0, 004a8c0d]]
// Convention: __cdecl
// Signature: CGasMask * __cdecl core_gasmask_cpp_CGasMask_dtor_FUN_004a8bc0(CGasMask *this_ptr,uint flags)

#include "nocturne.h"

CGasMask * __cdecl core_gasmask_cpp_CGasMask_dtor_FUN_004a8bc0(CGasMask *this_ptr,uint flags)

{
  CGasMask *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CGasMaskTypeInfo_0059e1c0);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  ptr = (CGasMask *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
