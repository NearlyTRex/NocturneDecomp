// Name: core_marquee.cpp_CMarquee_dtor_FUN_0050c4c0
// Address: 0050c4c0
// Address Range: [[0050c4c0, 0050c524]]
// Convention: __cdecl
// Signature: CMarquee * __cdecl core_marquee_cpp_CMarquee_dtor_FUN_0050c4c0(CMarquee *this_ptr,uint flags)

#include "nocturne.h"

CMarquee * __cdecl core_marquee_cpp_CMarquee_dtor_FUN_0050c4c0(CMarquee *this_ptr,uint flags)

{
  CMarquee_ptr_420 pCVar1;
  CMarquee *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    __vec_delete(this_ptr,&g_CMarqueeTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_004424e0(&this_ptr->course,0);
  ptr = (CMarquee *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&ADJ(pCVar1)->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
  return ptr;
}
