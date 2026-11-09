// Name: core_marquee.cpp_CMarquee_dtor_FUN_00507250
// Address: 00507250
// Address Range: [[00507250, 005072b4]]
// Convention: __cdecl
// Signature: CMarquee * __cdecl core_marquee_cpp_CMarquee_dtor_FUN_00507250(CMarquee *this_ptr,uint flags)

#include "nocturne.h"

CMarquee * __cdecl core_marquee_cpp_CMarquee_dtor_FUN_00507250(CMarquee *this_ptr,uint flags)

{
  CCourse *pCVar1;
  CMarquee *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CMarqueeTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_00447d30((CCourse *)&this_ptr->field_0x1a4,0);
  pCVar2 = (CMarquee *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408730((CDemonActor *)(pCVar1 + -0x1a4),1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005c0344(pCVar2);
  return pCVar2;
}
