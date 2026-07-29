// Name: core_bat.cpp_CStairs_dtor_FUN_00412000
// Address: 00412000
// Address Range: [[00412000, 00412064]]
// Convention: __cdecl
// Signature: CStairs * __cdecl core_bat_cpp_CStairs_dtor_FUN_00412000(CStairs *this_ptr,uint flags)

#include "nocturne.h"

CStairs * __cdecl core_bat_cpp_CStairs_dtor_FUN_00412000(CStairs *this_ptr,uint flags)

{
  CDemonTriangle *pCVar1;
  CStairs *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CBatTypeInfo_00599f70);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CDemonTriangle_arrdtor_FUN_0043b5f0
                     ((CDemonTriangle *)&this_ptr->collision_triangles[0].vertex1.z,0);
  pCVar2 = (CStairs *)
           core_actor_cpp_CDemonActor_dtor_FUN_00409ea0((CDemonActor *)&pCVar1[-7].vertex3,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
