// Name: core_conveyor.cpp_CConveyor_dtor_FUN_0043b420
// Address: 0043b420
// Address Range: [[0043b420, 0043b484]]
// Convention: __cdecl
// Signature: CConveyor * __cdecl core_conveyor_cpp_CConveyor_dtor_FUN_0043b420(CConveyor *this_ptr,uint flags)

#include "nocturne.h"

CConveyor * __cdecl core_conveyor_cpp_CConveyor_dtor_FUN_0043b420(CConveyor *this_ptr,uint flags)

{
  CDemonTriangle *pCVar1;
  CConveyor *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CConveyorTypeInfo_0059b810);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CDemonTriangle_arrdtor_FUN_0043b5f0
                     ((CDemonTriangle *)&(this_ptr->base).course,0);
  pCVar2 = (CConveyor *)
           core_actor_cpp_CDemonActor_dtor_FUN_00409ea0((CDemonActor *)&pCVar1[-0xe].vertex1.z,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
