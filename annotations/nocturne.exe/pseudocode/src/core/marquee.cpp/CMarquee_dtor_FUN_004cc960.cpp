// Name: core_marquee.cpp_CMarquee_dtor_FUN_004cc960
// Address: 004cc960
// Address Range: [[004cc960, 004cc9c4]]
// Convention: __cdecl
// Signature: CMarquee * __cdecl core_marquee_cpp_CMarquee_dtor_FUN_004cc960(CMarquee *this_ptr,uint flags)

#include "nocturne.h"

CMarquee * __cdecl core_marquee_cpp_CMarquee_dtor_FUN_004cc960(CMarquee *this_ptr,uint flags)

{
  CDemonTriangle *pCVar1;
  CMarquee *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CMarqueeTypeInfo_005a03b0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CDemonTriangle_arrdtor_FUN_0043b5f0
                     ((CDemonTriangle *)&this_ptr->course,0);
  pCVar2 = (CMarquee *)
           core_actor_cpp_CDemonActor_dtor_FUN_00409ea0((CDemonActor *)&pCVar1[-8].normal,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
