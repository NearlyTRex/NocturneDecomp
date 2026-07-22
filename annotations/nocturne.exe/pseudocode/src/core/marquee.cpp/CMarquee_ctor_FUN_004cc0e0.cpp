// Name: core_marquee.cpp_CMarquee_ctor_FUN_004cc0e0
// Address: 004cc0e0
// Address Range: [[004cc0e0, 004cc1a4]]
// Convention: unknown
// Signature: int core_marquee_cpp_CMarquee_ctor_FUN_004cc0e0(undefined4 param_1)

#include "nocturne.h"

int core_marquee_cpp_CMarquee_ctor_FUN_004cc0e0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = core_actor_cpp_FUN_00409d30(param_1);
  iVar2 = core_course_cpp_CCourse_ctor_FUN_0043b5d0(iVar2 + 0x19c);
  pcVar3 = &DAT_00588193;
  *(byte ***)(iVar2 + -0x50) = &PTR_core_marquee_cpp_CMarquee_setup_FUN_004cc2e0_005a02d4;
  pcVar4 = (char *)(iVar2 + -0x4c);
  *(uint *)(iVar2 + -0x2c) = 0x41200000;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -0x28) = 0;
  *(uint *)(iVar2 + -0x24) = 3;
  *(uint *)(iVar2 + -0x20) = 0;
  *(uint *)(iVar2 + -0x1c) = 0;
  *(uint *)(iVar2 + -0x18) = 0;
  *(uint *)(iVar2 + -0x14) = 0;
  *(uint *)(iVar2 + -0x10) = 0;
  *(uint *)(iVar2 + -0xc) = 0;
  *(uint *)(iVar2 + -0xa0) = 1;
  *(uint *)(iVar2 + -4) = 1;
  return iVar2 + -0x19c;
}
