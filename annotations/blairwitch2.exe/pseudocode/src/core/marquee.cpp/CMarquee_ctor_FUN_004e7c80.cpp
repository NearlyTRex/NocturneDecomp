// Name: core_marquee.cpp_CMarquee_ctor_FUN_004e7c80
// Address: 004e7c80
// Address Range: [[004e7c80, 004e7d44]]
// Convention: __cdecl
// Signature: CMarquee * __cdecl core_marquee_cpp_CMarquee_ctor_FUN_004e7c80(CMarquee *this_ptr)

#include "nocturne.h"

CMarquee * __cdecl core_marquee_cpp_CMarquee_ctor_FUN_004e7c80(CMarquee *this_ptr)

{
  CCourse CVar1;
  CDemonActor *pCVar2;
  CCourse *pCVar3;
  CCourse *pCVar4;
  CCourse *pCVar5;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_00408790(&this_ptr->base);
  pCVar3 = core_course_cpp_CCourse_ctor_FUN_00438a50((CCourse *)&pCVar2[1].orient_matrix.m[1].y);
  pCVar4 = (CCourse *)0x5dc74e;
  *(CDemonActor_vtable **)(pCVar3 + -0x50) = &g_CMarqueeVTable;
  pCVar5 = pCVar3 + -0x4c;
  *(uint *)(pCVar3 + -0x2c) = 0x41200000;
  do {
    CVar1 = *pCVar4;
    *pCVar5 = CVar1;
    if (CVar1 == (CCourse)0x0) break;
    CVar1 = pCVar4[1];
    pCVar4 = pCVar4 + 2;
    pCVar5[1] = CVar1;
    pCVar5 = pCVar5 + 2;
  } while (CVar1 != (CCourse)0x0);
  *(uint *)(pCVar3 + -0x28) = 0;
  *(uint *)(pCVar3 + -0x24) = 3;
  *(uint *)(pCVar3 + -0x20) = 0;
  *(uint *)(pCVar3 + -0x1c) = 0;
  *(uint *)(pCVar3 + -0x18) = 0;
  *(uint *)(pCVar3 + -0x14) = 0;
  *(uint *)(pCVar3 + -0x10) = 0;
  *(uint *)(pCVar3 + -0xc) = 0;
  *(uint *)(pCVar3 + -0x204) = 1;
  *(uint *)(pCVar3 + -4) = 1;
  return (CMarquee *)(pCVar3 + -0x300);
}
