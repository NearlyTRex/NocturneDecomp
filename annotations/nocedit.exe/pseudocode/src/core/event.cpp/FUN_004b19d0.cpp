// Name: core_event.cpp_FUN_004b19d0
// Address: 004b19d0
// Address Range: [[004b19d0, 004b1a29] [004b1a2c, 004b1a36] [004b1a38, 004b1a3e]]
// Convention: __cdecl
// Signature: void core_event.cpp_FUN_004b19d0(void)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0 (0044f3e0) at 0044fae2 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_processCorona_FUN_00451130 (00451130) at 0045116c [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80 (00472a80) at 00472c54 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_initializeVisibilityBuffer_FUN_00475fc0 (00475fc0) at 00475fea [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_CharacterSet
//   void* switchdataD_00679d10 = 004b1a0c
//   undefined4 DAT_00679d50

#include "nocturne.h"

void __cdecl core_event_cpp_FUN_004b19d0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_ECX;
  longlong *plVar4;
  undefined1 uVar5;
  uint in_EDX;
  undefined4 unaff_EBX;
  uint uVar6;
  bool bVar7;
  uint in_stack_00000004;
  
  lVar1 = *(longlong *)(&g_CharacterSet + (in_EDX & 0xff) * 8);
  uVar2 = *(undefined4 *)(&g_CharacterSet + (in_EDX & 0xff) * 8);
  uVar3 = in_stack_00000004 - 8;
  if (in_stack_00000004 < 8 || uVar3 == 0) goto LAB_004b1a18;
  uVar6 = -in_ECX & 7;
  plVar4 = (longlong *)(in_ECX + uVar6);
  bVar7 = uVar3 < uVar6;
  uVar3 = uVar3 - uVar6;
  uVar5 = (undefined1)uVar2;
  switch(uVar6) {
  case 0:
    goto switchD_004b19f9_caseD_0;
  case 1:
    *(undefined1 *)((int)plVar4 + -1) = uVar5;
    break;
  case 3:
    *(undefined1 *)((int)plVar4 + -3) = uVar5;
  case 2:
    *(short *)((int)plVar4 + -2) = (short)uVar2;
    break;
  case 5:
    *(undefined1 *)((int)plVar4 + -5) = uVar5;
    *(undefined4 *)((int)plVar4 + -4) = uVar2;
joined_r0x004b1a26:
    if (bVar7 || uVar3 == 0) goto LAB_004b1a18;
    goto switchD_004b19f9_caseD_0;
  case 7:
    *(undefined1 *)((int)plVar4 + -7) = uVar5;
  case 6:
    *(short *)((int)plVar4 + -6) = (short)uVar2;
  case 4:
    *(undefined4 *)((int)plVar4 + -4) = uVar2;
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


// Assembly code:
// 004b19d0: AND EDX,0xff
//   Label: core_event.cpp_FUN_004b19d0
// 004b19d6: MOV EAX,dword ptr [ESP + 0x4]
// 004b19da: FILD qword ptr [EDX*0x8 + 0x679510]
//   XREF to: 00679510 (DATA)
// 004b19e1: PUSH EBX
// 004b19e2: MOV EDX,dword ptr [EDX*0x8 + 0x679510]
//   XREF to: 00679510 (DATA)
// 004b19e9: SUB EAX,0x8
// 004b19ec: JBE 0x004b1a18
//   XREF to: 004b1a18 (CONDITIONAL_JUMP)
// 004b19ee: MOV EBX,ECX
// 004b19f0: NEG EBX
// 004b19f2: AND EBX,0x7
// 004b19f5: ADD ECX,EBX
// 004b19f7: SUB EAX,EBX
// 004b19f9: JMP dword ptr [EBX*0x4 + 0x679d10]
//   Label: switchD
//   XREF to: 004b1a0c (COMPUTED_JUMP)
//   XREF to: 004b1a38 (COMPUTED_JUMP)
//   XREF to: 004b1a2f (COMPUTED_JUMP)
//   XREF to: 004b1a2c (COMPUTED_JUMP)
//   XREF to: 004b1a07 (COMPUTED_JUMP)
//   XREF to: 004b1a20 (COMPUTED_JUMP)
//   XREF to: 004b1a03 (COMPUTED_JUMP)
//   XREF to: 004b1a00 (COMPUTED_JUMP)
//   XREF to: 00679d10 (DATA)
// 004b1a00: MOV byte ptr [ECX + -0x7],DL
//   Label: caseD_7
// 004b1a03: MOV word ptr [ECX + -0x6],DX
//   Label: caseD_6
// 004b1a07: MOV dword ptr [ECX + -0x4],EDX
//   Label: caseD_4
// 004b1a0a: JBE 0x004b1a18
//   XREF to: 004b1a18 (CONDITIONAL_JUMP)
// 004b1a0c: FLD ST0
//   Label: caseD_0
// 004b1a0e: FISTP qword ptr [ECX]
// 004b1a10: ADD ECX,0x8
// 004b1a13: SUB EAX,0x8
// 004b1a16: JA 0x004b1a0c
//   XREF to: 004b1a0c (CONDITIONAL_JUMP)
// 004b1a18: POP EBX
//   Label: LAB_004b1a18
// 004b1a19: JMP dword ptr [EAX*0x4 + 0x679d50]
//   XREF to: 00679d50 (DATA)
// 004b1a20: MOV byte ptr [ECX + -0x5],DL
//   Label: caseD_5
// 004b1a23: MOV dword ptr [ECX + -0x4],EDX
// 004b1a26: JA 0x004b1a0c
//   XREF to: 004b1a0c (CONDITIONAL_JUMP)
// 004b1a28: JMP 0x004b1a18
//   XREF to: 004b1a18 (UNCONDITIONAL_JUMP)
// 004b1a2c: MOV byte ptr [ECX + -0x3],DL
//   Label: caseD_3
// 004b1a2f: MOV word ptr [ECX + -0x2],DX
//   Label: caseD_2
// 004b1a33: JA 0x004b1a0c
//   XREF to: 004b1a0c (CONDITIONAL_JUMP)
// 004b1a35: JMP 0x004b1a18
//   XREF to: 004b1a18 (UNCONDITIONAL_JUMP)
// 004b1a38: MOV byte ptr [ECX + -0x1],DL
//   Label: caseD_1
// 004b1a3b: JA 0x004b1a0c
//   XREF to: 004b1a0c (CONDITIONAL_JUMP)
// 004b1a3d: JMP 0x004b1a18
//   XREF to: 004b1a18 (UNCONDITIONAL_JUMP)
