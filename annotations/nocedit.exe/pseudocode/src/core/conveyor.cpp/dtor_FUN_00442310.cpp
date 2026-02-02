// Name: core_conveyor.cpp_dtor_FUN_00442310
// Address: 00442310
// Address Range: [[00442310, 00442374]]
// Convention: __cdecl
// Signature: CConveyor * __cdecl core_conveyor_cpp_dtor_FUN_00442310(CConveyor *this_ptr,uint d1,uint d2,uint d3)

#include "nocturne.h"

CConveyor * __cdecl core_conveyor_cpp_dtor_FUN_00442310(CConveyor *this_ptr,uint d1,uint d2,uint d3)

{
  CCourse *pCVar1;
  CConveyor *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CConveyorTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_004424e0(&(this_ptr->base).course);
  ptr = (CConveyor *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)&pCVar1[-0x42].loop,1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
