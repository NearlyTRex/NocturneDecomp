// Name: core_gasmask.cpp_CGasMask_dtor_FUN_004c1500
// Address: 004c1500
// Address Range: [[004c1500, 004c154d]]
// Convention: __cdecl
// Signature: CGasMask * __cdecl core_gasmask_cpp_CGasMask_dtor_FUN_004c1500(CGasMask *this_ptr,uint flags)

#include "nocturne.h"

CGasMask * __cdecl core_gasmask_cpp_CGasMask_dtor_FUN_004c1500(CGasMask *this_ptr,uint flags)

{
  CGasMask *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CGasMaskTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CGasMask *)core_actor_cpp_CDemonActor_dtor_FUN_00408930(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
