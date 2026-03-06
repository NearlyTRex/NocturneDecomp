// Name: core_glass.cpp_CGlass_dtor_FUN_004eb820
// Address: 004eb820
// Address Range: [[004eb820, 004eb894]]
// Convention: __cdecl
// Signature: CGlass * __cdecl core_glass_cpp_CGlass_dtor_FUN_004eb820(CGlass *this_ptr,uint flags)

#include "nocturne.h"

CGlass * __cdecl core_glass_cpp_CGlass_dtor_FUN_004eb820(CGlass *this_ptr,uint flags)

{
  CGlass_ptr_908 pCVar1;
  CGlass_ptr_492 pCVar2;
  CGlass *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CGlassTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = (CGlass_ptr_908)
           core_glass_cpp_CVector3f_arrdtor_FUN_004eb8a0(this_ptr->broken_vertices,0);
  pCVar2 = core_mirror_cpp_CMirror_dtor_FUN_005213e0(&ADJ(pCVar1)->mirror,0);
  ptr = (CGlass *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&ADJ(pCVar2)->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
