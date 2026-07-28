// Name: core_marquee.cpp_CMarquee_ctor_FUN_004cc0e0
// Address: 004cc0e0
// Address Range: [[004cc0e0, 004cc1a4]]
// Convention: __cdecl
// Signature: CMarquee * __cdecl core_marquee_cpp_CMarquee_ctor_FUN_004cc0e0(CMarquee *this_ptr)

#include "nocturne.h"

CMarquee * __cdecl core_marquee_cpp_CMarquee_ctor_FUN_004cc0e0(CMarquee *this_ptr)

{
  char cVar1;
  int iVar2;
  CCourse *pCVar3;
  char *pcVar4;
  int *piVar5;
  
  iVar2 = core_actor_cpp_FUN_00409d30(this_ptr);
  pCVar3 = core_course_cpp_CCourse_ctor_FUN_0043b5d0((CCourse *)(iVar2 + 0x19c));
  pcVar4 = "menu1.pth";
  pCVar3[-7].frames = (CCourseFrame *)&PTR_core_marquee_cpp_CMarquee_setup_FUN_004cc2e0_005a02d4;
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
  pCVar3[-0xe].loop = 1;
  pCVar3[-1].loop = 1;
  return (CMarquee *)&pCVar3[-0x23].loop;
}
