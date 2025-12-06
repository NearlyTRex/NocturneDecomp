// Name: core_glass.cpp_CGlass_dtor_FUN_004eb820
// Address: 004eb820
// Address Range: [[004eb820, 004eb894]]
// Convention: __cdecl
// Signature: CGlass * core_glass.cpp_CGlass_dtor_FUN_004eb820(CGlass * this_ptr, uint d1, uint d2, uint d3, uint d4)

#include "nocturne.h"

CGlass * __cdecl
core_glass_cpp_CGlass_dtor_FUN_004eb820(CGlass *this_ptr,uint d1,uint d2,uint d3,uint d4)

{
  int extraout_EAX;
  CMirror *pCVar1;
  CGlass *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CGlassTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  core_glass_cpp_freeVectors_FUN_004eb8a0((CVector3f **)this_ptr->broken_vertices);
  pCVar1 = core_mirror_cpp_CMirror_dtor_FUN_005213e0((CMirror *)(extraout_EAX + -0x1a0));
  ptr = (CGlass *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)&pCVar1[-2].reflection.mirror_transform_matrix.m[2].x,1);
  if ((d4 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
