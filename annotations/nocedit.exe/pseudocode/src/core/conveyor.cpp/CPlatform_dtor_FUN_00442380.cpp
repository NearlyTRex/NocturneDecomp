// Name: core_conveyor.cpp_CPlatform_dtor_FUN_00442380
// Address: 00442380
// Address Range: [[00442380, 004423e4]]
// Convention: __cdecl
// Signature: CPlatform * __cdecl core_conveyor_cpp_CPlatform_dtor_FUN_00442380(CPlatform *this_ptr,uint flags)

#include "nocturne.h"

CPlatform * __cdecl core_conveyor_cpp_CPlatform_dtor_FUN_00442380(CPlatform *this_ptr,uint flags)

{
  CPlatform_ptr_784 pCVar1;
  CPlatform *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    __vec_delete(this_ptr,&g_CPlatformTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_004424e0(&this_ptr->course,0);
  ptr = (CPlatform *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&ADJ(pCVar1)->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
  return ptr;
}
