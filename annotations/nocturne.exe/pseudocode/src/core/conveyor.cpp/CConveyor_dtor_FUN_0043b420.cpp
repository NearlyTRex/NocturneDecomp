// Name: core_conveyor.cpp_CConveyor_dtor_FUN_0043b420
// Address: 0043b420
// Address Range: [[0043b420, 0043b484]]
// Convention: __cdecl
// Signature: CConveyor * __cdecl core_conveyor_cpp_CConveyor_dtor_FUN_0043b420(CConveyor *this_ptr,uint flags)

#include "nocturne.h"

CConveyor * __cdecl core_conveyor_cpp_CConveyor_dtor_FUN_0043b420(CConveyor *this_ptr,uint flags)

{
  CCourse *pCVar1;
  CConveyor *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CConveyorTypeInfo_0059b810);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_0043b5f0(&(this_ptr->base).course,0);
  pCVar2 = (CConveyor *)
           core_actor_cpp_CDemonActor_dtor_FUN_00409ea0((CDemonActor *)&pCVar1[-0x41].frames,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
