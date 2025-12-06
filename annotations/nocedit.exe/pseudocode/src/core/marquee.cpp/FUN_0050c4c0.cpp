// Name: core_marquee.cpp_FUN_0050c4c0
// Address: 0050c4c0
// Address Range: [[0050c4c0, 0050c524]]
// Convention: __cdecl
// Signature: CMarquee * core_marquee.cpp_FUN_0050c4c0(CMarquee * this_ptr, uint d1, uint d2, uint d3)

#include "nocturne.h"

CMarquee * __cdecl core_marquee_cpp_FUN_0050c4c0(CMarquee *this_ptr,uint d1,uint d2,uint d3)

{
  CCourse *pCVar1;
  CMarquee *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CMarqueeTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_004424e0((CCourse *)this_ptr->field8_0x1a4);
  ptr = (CMarquee *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)(pCVar1 + -0x23),1);
  if ((d3 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
