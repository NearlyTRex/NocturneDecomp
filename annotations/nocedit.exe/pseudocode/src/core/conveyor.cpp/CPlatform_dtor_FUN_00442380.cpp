// Name: core_conveyor.cpp_CPlatform_dtor_FUN_00442380
// Address: 00442380
// Address Range: [[00442380, 004423e4]]
// Convention: __cdecl
// Signature: CPlatform * __cdecl core_conveyor_cpp_CPlatform_dtor_FUN_00442380(CPlatform *this_ptr,uint d1,uint d2,uint d3)

#include "nocturne.h"

CPlatform * __cdecl
core_conveyor_cpp_CPlatform_dtor_FUN_00442380(CPlatform *this_ptr,uint d1,uint d2,uint d3)

{
  CCourse *pCVar1;
  CPlatform *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CPlatformTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_004424e0(&this_ptr->course);
  ptr = (CPlatform *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)&pCVar1[-0x42].loop,1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
