// Name: core_stairs.cpp_CStairs_dtor_FUN_00534c10
// Address: 00534c10
// Address Range: [[00534c10, 00534c74]]
// Convention: __cdecl
// Signature: CStairs * __cdecl core_stairs_cpp_CStairs_dtor_FUN_00534c10(CStairs *this_ptr,uint flags)

#include "nocturne.h"

CStairs * __cdecl core_stairs_cpp_CStairs_dtor_FUN_00534c10(CStairs *this_ptr,uint flags)

{
  SFly *pSVar1;
  CStairs *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CStairsTypeInfo_005a2590);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  pSVar1 = core_stairs_cpp_SFly_arrdtor40_FUN_00534c80((SFly *)this_ptr->collision_triangles,0);
  ptr = (CStairs *)
        core_actor_cpp_CDemonActor_dtor_FUN_00409ea0((CDemonActor *)pSVar1[-7].control_points,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
