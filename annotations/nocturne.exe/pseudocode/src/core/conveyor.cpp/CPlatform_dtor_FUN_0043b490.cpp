// Name: core_conveyor.cpp_CPlatform_dtor_FUN_0043b490
// Address: 0043b490
// Address Range: [[0043b490, 0043b4f4]]
// Convention: __cdecl
// Signature: CPlatform * __cdecl core_conveyor_cpp_CPlatform_dtor_FUN_0043b490(CPlatform *this_ptr,uint flags)

#include "nocturne.h"

CPlatform * __cdecl core_conveyor_cpp_CPlatform_dtor_FUN_0043b490(CPlatform *this_ptr,uint flags)

{
  CCourse *pCVar1;
  CPlatform *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CPlatformTypeInfo_0059b830);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_0043b5f0(&this_ptr->course,0);
  ptr = (CPlatform *)
        core_actor_cpp_CDemonActor_dtor_FUN_00409ea0((CDemonActor *)&pCVar1[-0x41].frames,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
