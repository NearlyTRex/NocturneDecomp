// Name: core_event.cpp_FUN_004b19d0
// Address: 004b19d0
// Address Range: [[004b19d0, 004b1a29] [004b1a2c, 004b1a36] [004b1a38, 004b1a3e]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_FUN_004b19d0(void)

#include "nocturne.h"

void __cdecl core_event_cpp_FUN_004b19d0(void)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  longlong *plVar4;
  byte uVar5;
  uint in_EDX;
  uint unaff_EBX;
  uint uVar6;
  bool bVar7;
  uint in_stack_00000004;
  
  lVar1 = *(longlong *)(&g_CharacterSet + (in_EDX & 0xff) * 8);
  uVar2 = *(uint *)(&g_CharacterSet + (in_EDX & 0xff) * 8);
  uVar3 = in_stack_00000004 - 8;
  if (in_stack_00000004 < 8 || uVar3 == 0) goto LAB_004b1a18;
  uVar6 = -in_ECX & 7;
  plVar4 = (longlong *)(in_ECX + uVar6);
  bVar7 = uVar3 < uVar6;
  uVar3 = uVar3 - uVar6;
  uVar5 = (byte)uVar2;
  switch(uVar6) {
  case 0:
    goto switchD_004b19f9_caseD_0;
  case 1:
    *(byte *)((int)plVar4 + -1) = uVar5;
    break;
  case 3:
    *(byte *)((int)plVar4 + -3) = uVar5;
  case 2:
    *(short *)((int)plVar4 + -2) = (short)uVar2;
    break;
  case 5:
    *(byte *)((int)plVar4 + -5) = uVar5;
    *(uint *)((int)plVar4 + -4) = uVar2;
joined_r0x004b1a26:
    if (bVar7 || uVar3 == 0) goto LAB_004b1a18;
    goto switchD_004b19f9_caseD_0;
  case 7:
    *(byte *)((int)plVar4 + -7) = uVar5;
  case 6:
    *(short *)((int)plVar4 + -6) = (short)uVar2;
  case 4:
    *(uint *)((int)plVar4 + -4) = uVar2;
    goto joined_r0x004b1a26;
  }
  if (!bVar7 && uVar3 != 0) {
switchD_004b19f9_caseD_0:
    do {
      *plVar4 = (longlong)ROUND((float10)lVar1);
      plVar4 = plVar4 + 1;
      bVar7 = 7 < uVar3;
      uVar3 = uVar3 - 8;
    } while (bVar7 && uVar3 != 0);
  }
LAB_004b1a18:
                    /* WARNING: Could not recover jumptable at 0x004b1a19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_00679d50 + uVar3 * 4))(uVar3,uVar2,unaff_EBX);
  return;
}
