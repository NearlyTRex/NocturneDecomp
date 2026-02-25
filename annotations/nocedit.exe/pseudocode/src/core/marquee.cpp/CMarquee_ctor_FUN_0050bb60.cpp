// Name: core_marquee.cpp_CMarquee_ctor_FUN_0050bb60
// Address: 0050bb60
// Address Range: [[0050bb60, 0050bc24]]
// Convention: __cdecl
// Signature: CMarquee * __cdecl core_marquee_cpp_CMarquee_ctor_FUN_0050bb60(CMarquee *this_ptr)

#include "nocturne.h"

CMarquee * __cdecl core_marquee_cpp_CMarquee_ctor_FUN_0050bb60(CMarquee *this_ptr)

{
  char cVar1;
  CMarquee *pCVar2;
  CCourse *pCVar3;
  char *pcVar4;
  int *piVar5;
  
  pCVar2 = (CMarquee *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  pCVar3 = core_course_cpp_CCourse_ctor_FUN_004424c0(&pCVar2->course);
  pcVar4 = "menu1.pth";
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
  pCVar3[-0xe].len = 1;
  pCVar3[-1].loop = 1;
  return (CMarquee *)(pCVar3 + -0x23);
}
