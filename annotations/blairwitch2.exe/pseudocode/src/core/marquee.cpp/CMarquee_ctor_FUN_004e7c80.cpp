// Name: core_marquee.cpp_CMarquee_ctor_FUN_004e7c80
// Address: 004e7c80
// Address Range: [[004e7c80, 004e7d44]]
// Convention: __cdecl
// Signature: CMarquee * __cdecl core_marquee_cpp_CMarquee_ctor_FUN_004e7c80(CMarquee *this_ptr)

#include "nocturne.h"

CMarquee * __cdecl core_marquee_cpp_CMarquee_ctor_FUN_004e7c80(CMarquee *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CCourse *pCVar3;
  char *pcVar4;
  int *piVar5;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_00408790(&this_ptr->base);
  pCVar3 = core_course_cpp_CCourse_ctor_FUN_00438a50((CCourse *)&pCVar2[1].orient_matrix.m[1].y);
  pcVar4 = (char *)0x5dc74e;
  pCVar3[-7].frames = (CCourseFrame *)&g_CMarqueeVTable;
  piVar5 = &pCVar3[-7].loop;
  pCVar3[-4].frames = (CCourseFrame *)0x41200000;
  do {
    cVar1 = *pcVar4;
    *(char *)piVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    *(char *)((int)piVar5 + 1) = cVar1;
    piVar5 = (int *)((int)piVar5 + 2);
  } while (cVar1 != '\0');
  pCVar3[-4].loop = 0;
  pCVar3[-3].len = 3;
  pCVar3[-3].frames = (CCourseFrame *)0x0;
  pCVar3[-3].loop = 0;
  pCVar3[-2].len = 0;
  pCVar3[-2].frames = (CCourseFrame *)0x0;
  pCVar3[-2].loop = 0;
  pCVar3[-1].len = 0;
  pCVar3[-0x2b].len = 1;
  pCVar3[-1].loop = 1;
  return (CMarquee *)(pCVar3 + -0x40);
}
