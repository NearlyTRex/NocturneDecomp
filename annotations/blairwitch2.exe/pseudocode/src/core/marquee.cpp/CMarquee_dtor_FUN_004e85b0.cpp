// Name: core_marquee.cpp_CMarquee_dtor_FUN_004e85b0
// Address: 004e85b0
// Address Range: [[004e85b0, 004e8614]]
// Convention: __cdecl
// Signature: CMarquee * __cdecl core_marquee_cpp_CMarquee_dtor_FUN_004e85b0(CMarquee *this_ptr,uint flags)

#include "nocturne.h"

CMarquee * __cdecl core_marquee_cpp_CMarquee_dtor_FUN_004e85b0(CMarquee *this_ptr,uint flags)

{
  CCourse *pCVar1;
  CMarquee *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CMarqueeTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_00438a70(&this_ptr->course,0);
  pCVar2 = (CMarquee *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930((CDemonActor *)(pCVar1 + -0x40),1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005b7fdc(pCVar2);
  return pCVar2;
}
