// Name: core_event.cpp_FUN_004b1a78
// Address: 004b1a78
// Address Range: [[004b1a78, 004b1a95] [004b1a98, 004b1ab2] [004b1ab4, 004b1ad1] [004b1ad4, 004b1ae9] [004b1aec, 004b1b13]]
// Convention: __cdecl
// Signature: void core_event.cpp_FUN_004b1a78(void)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80 (0044cb80) at 0044cbfe [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_processCorona_FUN_00451130 (00451130) at 004511b3 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_restoreZBufferScanlines_FUN_004544a0 (004544a0) at 004544da [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_saveZBufferScanlines_FUN_00454450 (00454450) at 0045448a [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_004729d0 (004729d0) at 00472a19 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_00679d54 = 004b1a9b
//   undefined4 DAT_00679d94

#include "nocturne.h"

void __cdecl core_event_cpp_FUN_004b1a78(void)

{
  longlong lVar1;
  uint uVar2;
  int in_ECX;
  longlong *plVar3;
  int in_EDX;
  longlong *plVar4;
  undefined4 unaff_EBX;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  uint in_stack_00000004;
  
  uVar2 = in_stack_00000004 - 8;
  if (7 < in_stack_00000004 && uVar2 != 0) {
    uVar5 = -in_ECX & 7;
    plVar3 = (longlong *)(in_ECX + uVar5);
    plVar4 = (longlong *)(in_EDX + uVar5);
    bVar6 = uVar2 < uVar5;
    uVar2 = uVar2 - uVar5;
    bVar7 = uVar2 == 0;
    switch(uVar5) {
    case 1:
      *(undefined1 *)((int)plVar3 + -1) = *(undefined1 *)((int)plVar4 + -1);
      if (bVar6 || bVar7) {
                    /* WARNING: Could not recover jumptable at 0x004b1b0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(&DAT_00679d94 + uVar2 * 4))(uVar2,plVar4,unaff_EBX);
        return;
      }
      break;
    case 3:
      *(undefined1 *)((int)plVar3 + -3) = *(undefined1 *)((int)plVar4 + -3);
    case 2:
      *(undefined2 *)((int)plVar3 + -2) = *(undefined2 *)((int)plVar4 + -2);
      if (bVar6 || bVar7) {
                    /* WARNING: Could not recover jumptable at 0x004b1afd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(&DAT_00679d94 + uVar2 * 4))(uVar2,plVar4,unaff_EBX);
        return;
      }
      break;
    case 5:
      *(undefined1 *)((int)plVar3 + -5) = *(undefined1 *)((int)plVar4 + -5);
      *(undefined4 *)((int)plVar3 + -4) = *(undefined4 *)((int)plVar4 + -4);
      if (bVar6 || bVar7) {
                    /* WARNING: Could not recover jumptable at 0x004b1ae3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(&DAT_00679d94 + uVar2 * 4))(uVar2,plVar4,unaff_EBX);
        return;
      }
      break;
    case 7:
      *(undefined1 *)((int)plVar3 + -7) = *(undefined1 *)((int)plVar4 + -7);
    case 6:
      *(undefined2 *)((int)plVar3 + -6) = *(undefined2 *)((int)plVar4 + -6);
    case 4:
      *(undefined4 *)((int)plVar3 + -4) = *(undefined4 *)((int)plVar4 + -4);
      if (bVar6 || bVar7) {
                    /* WARNING: Could not recover jumptable at 0x004b1acb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(&DAT_00679d94 + uVar2 * 4))(uVar2,plVar4,unaff_EBX);
        return;
      }
    }
    while( true ) {
      lVar1 = *plVar4;
      plVar4 = plVar4 + 1;
      bVar6 = uVar2 < 8;
      uVar2 = uVar2 - 8;
      if (bVar6 || uVar2 == 0) break;
      *plVar3 = (longlong)ROUND((float10)lVar1);
      plVar3 = plVar3 + 1;
    }
    *plVar3 = (longlong)ROUND((float10)lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x004b1aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_00679d94 + uVar2 * 4))();
  return;
}


// Assembly code:
// 004b1a78: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_event.cpp_FUN_004b1a78
// 004b1a7c: PUSH EBX
// 004b1a7d: SUB EAX,0x8
// 004b1a80: JBE 0x004b1aab
//   XREF to: 004b1aab (CONDITIONAL_JUMP)
// 004b1a82: MOV EBX,ECX
// 004b1a84: NEG EBX
// 004b1a86: AND EBX,0x7
// 004b1a89: ADD ECX,EBX
// 004b1a8b: ADD EDX,EBX
// 004b1a8d: SUB EAX,EBX
// 004b1a8f: JMP dword ptr [EBX*0x4 + 0x679d54]
//   Label: switchD
//   XREF to: 004b1a9b (COMPUTED_JUMP)
//   XREF to: 004b1b04 (COMPUTED_JUMP)
//   XREF to: 004b1af2 (COMPUTED_JUMP)
//   XREF to: 004b1aec (COMPUTED_JUMP)
//   XREF to: 004b1ac2 (COMPUTED_JUMP)
//   XREF to: 004b1ad4 (COMPUTED_JUMP)
//   XREF to: 004b1aba (COMPUTED_JUMP)
//   XREF to: 004b1ab4 (COMPUTED_JUMP)
//   XREF to: 00679d54 (DATA)
// 004b1a98: FISTP qword ptr [ECX + -0x8]
//   Label: LAB_004b1a98
// 004b1a9b: FILD qword ptr [EDX]
//   Label: caseD_0
// 004b1a9d: ADD ECX,0x8
// 004b1aa0: ADD EDX,0x8
// 004b1aa3: SUB EAX,0x8
// 004b1aa6: JA 0x004b1a98
//   XREF to: 004b1a98 (CONDITIONAL_JUMP)
// 004b1aa8: FISTP qword ptr [ECX + -0x8]
// 004b1aab: POP EBX
//   Label: LAB_004b1aab
// 004b1aac: JMP dword ptr [EAX*0x4 + 0x679d94]
//   XREF to: 00679d94 (DATA)
// 004b1ab4: MOV BL,byte ptr [EDX + -0x7]
//   Label: caseD_7
// 004b1ab7: MOV byte ptr [ECX + -0x7],BL
// 004b1aba: MOV BX,word ptr [EDX + -0x6]
//   Label: caseD_6
// 004b1abe: MOV word ptr [ECX + -0x6],BX
// 004b1ac2: MOV EBX,dword ptr [EDX + -0x4]
//   Label: caseD_4
// 004b1ac5: MOV dword ptr [ECX + -0x4],EBX
// 004b1ac8: JA 0x004b1a9b
//   XREF to: 004b1a9b (CONDITIONAL_JUMP)
// 004b1aca: POP EBX
// 004b1acb: JMP dword ptr [EAX*0x4 + 0x679d94]
//   XREF to: 00679d94 (DATA)
// 004b1ad4: MOV BL,byte ptr [EDX + -0x5]
//   Label: caseD_5
// 004b1ad7: MOV byte ptr [ECX + -0x5],BL
// 004b1ada: MOV EBX,dword ptr [EDX + -0x4]
// 004b1add: MOV dword ptr [ECX + -0x4],EBX
// 004b1ae0: JA 0x004b1a9b
//   XREF to: 004b1a9b (CONDITIONAL_JUMP)
// 004b1ae2: POP EBX
// 004b1ae3: JMP dword ptr [EAX*0x4 + 0x679d94]
//   XREF to: 00679d94 (DATA)
// 004b1aec: MOV BL,byte ptr [EDX + -0x3]
//   Label: caseD_3
// 004b1aef: MOV byte ptr [ECX + -0x3],BL
// 004b1af2: MOV BX,word ptr [EDX + -0x2]
//   Label: caseD_2
// 004b1af6: MOV word ptr [ECX + -0x2],BX
// 004b1afa: JA 0x004b1a9b
//   XREF to: 004b1a9b (CONDITIONAL_JUMP)
// 004b1afc: POP EBX
// 004b1afd: JMP dword ptr [EAX*0x4 + 0x679d94]
//   XREF to: 00679d94 (DATA)
// 004b1b04: MOV BL,byte ptr [EDX + -0x1]
//   Label: caseD_1
// 004b1b07: MOV byte ptr [ECX + -0x1],BL
// 004b1b0a: JA 0x004b1a9b
//   XREF to: 004b1a9b (CONDITIONAL_JUMP)
// 004b1b0c: POP EBX
// 004b1b0d: JMP dword ptr [EAX*0x4 + 0x679d94]
//   XREF to: 00679d94 (DATA)
