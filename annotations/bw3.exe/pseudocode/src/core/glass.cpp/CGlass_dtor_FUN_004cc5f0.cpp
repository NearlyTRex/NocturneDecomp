// Name: core_glass.cpp_CGlass_dtor_FUN_004cc5f0
// Address: 004cc5f0
// Address Range: [[004cc5f0, 004cc654]]
// Convention: __cdecl
// Signature: CGlass * __cdecl core_glass_cpp_CGlass_dtor_FUN_004cc5f0(CGlass *this_ptr,uint flags)

#include "nocturne.h"

CGlass * __cdecl core_glass_cpp_CGlass_dtor_FUN_004cc5f0(CGlass *this_ptr,uint flags)

{
  CMirror *pCVar1;
  CGlass *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CGlassTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_mirror_cpp_CMirror_dtor_FUN_004f3fe0(&this_ptr->mirror,0);
  ptr = (CGlass *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408770
                  ((CDemonActor *)&pCVar1[-2].reflection.corner4,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
