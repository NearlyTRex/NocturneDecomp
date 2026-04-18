// Name: core_marquee.cpp_CMarquee_ctor_FUN_0050bb60
// Address: 0050bb60
// MANUAL RECONSTRUCTION
// Address Range: [[0050bb60, 0050bc24]]
// Convention: __cdecl
// Signature: CMarquee * __cdecl core_marquee_cpp_CMarquee_ctor_FUN_0050bb60(CMarquee *this_ptr)

#include "nocturne.h"

CMarquee * __cdecl core_marquee_cpp_CMarquee_ctor_FUN_0050bb60(CMarquee *this_ptr)

{
  CMarquee *pCVar2;
  CMarquee_ptr_420 pCVar3;

  pCVar2 = (CMarquee *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  pCVar3 = core_course_cpp_CCourse_ctor_FUN_004424c0(&pCVar2->course);
  ADJ(pCVar3)->base.vtable._ub = &g_CMarqueeVTable;
  ADJ(pCVar3)->total_time = 10.0;
  strcpy(ADJ(pCVar3)->course_name,"menu1.pth");
  ADJ(pCVar3)->param = 0.0;
  ADJ(pCVar3)->phase = 3;
  (ADJ(pCVar3)->bounding_box).min.x = 0.0;
  (ADJ(pCVar3)->bounding_box).min.y = 0.0;
  (ADJ(pCVar3)->bounding_box).min.z = 0.0;
  (ADJ(pCVar3)->bounding_box).max.x = 0.0;
  (ADJ(pCVar3)->bounding_box).max.y = 0.0;
  (ADJ(pCVar3)->bounding_box).max.z = 0.0;
  ADJ(pCVar3)->base.is_transparent = 1;
  ADJ(pCVar3)->type = 1;
  return ADJ(pCVar3);
}
