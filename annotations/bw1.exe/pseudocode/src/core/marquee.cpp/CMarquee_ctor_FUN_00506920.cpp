// Name: core_marquee.cpp_CMarquee_ctor_FUN_00506920
// Address: 00506920
// Address Range: [[00506920, 005069e4]]
// Convention: __cdecl
// Signature: CMarquee * __cdecl core_marquee_cpp_CMarquee_ctor_FUN_00506920(CMarquee *this_ptr)

#include "nocturne.h"

CMarquee * __cdecl core_marquee_cpp_CMarquee_ctor_FUN_00506920(CMarquee *this_ptr)

{
  CCourse CVar1;
  CDemonActor *pCVar2;
  CCourse *pCVar3;
  CCourse *pCVar4;
  CCourse *pCVar5;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004085c0((CDemonActor *)this_ptr);
  pCVar3 = core_course_cpp_CCourse_ctor_FUN_00447d10((CCourse *)&pCVar2[1].field_0x4c);
  pCVar4 = (CCourse *)0x5e769e;
  *(byte **)(pCVar3 + -0x50) = &g_CMarqueeVTable;
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
  *(uint *)(pCVar3 + -0xa8) = 1;
  *(uint *)(pCVar3 + -4) = 1;
  return (CMarquee *)(pCVar3 + -0x1a4);
}
