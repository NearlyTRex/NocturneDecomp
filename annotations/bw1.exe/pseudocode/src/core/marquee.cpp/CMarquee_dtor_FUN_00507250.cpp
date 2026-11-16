// Name: core_marquee.cpp_CMarquee_dtor_FUN_00507250
// Address: 00507250
// Address Range: [[00507250, 005072b4]]
// Convention: __cdecl
// Signature: CMarquee * __cdecl core_marquee_cpp_CMarquee_dtor_FUN_00507250(CMarquee *this_ptr,uint flags)

#include "nocturne.h"

CMarquee * __cdecl core_marquee_cpp_CMarquee_dtor_FUN_00507250(CMarquee *this_ptr,uint flags)

{
  CCourse *pCVar1;
  CMarquee *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CMarqueeTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_00447d30(&this_ptr->course,0);
  ptr = (CMarquee *)core_actor_cpp_CDemonActor_dtor_FUN_00408730((CDemonActor *)(pCVar1 + -0x23),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
