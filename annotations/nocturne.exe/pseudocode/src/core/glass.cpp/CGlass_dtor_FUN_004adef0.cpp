// Name: core_glass.cpp_CGlass_dtor_FUN_004adef0
// Address: 004adef0
// Address Range: [[004adef0, 004adf64]]
// Convention: __cdecl
// Signature: CGlass * __cdecl core_glass_cpp_CGlass_dtor_FUN_004adef0(CGlass *this_ptr,uint flags)

#include "nocturne.h"

CGlass * __cdecl core_glass_cpp_CGlass_dtor_FUN_004adef0(CGlass *this_ptr,uint flags)

{
  CVector3f *pCVar1;
  CMirror *pCVar2;
  CGlass *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CGlassTypeInfo_0059e490);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_glass_cpp_CVector3f_arrdtor25_FUN_004adf70(this_ptr->broken_vertices,0);
  pCVar2 = core_mirror_cpp_CMirror_dtor_FUN_004d6570((CMirror *)&pCVar1[-0x23].y,0);
  ptr = (CGlass *)
        core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                  ((CDemonActor *)&pCVar2[-2].reflection.mirror_transform_matrix.m[2].z,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
