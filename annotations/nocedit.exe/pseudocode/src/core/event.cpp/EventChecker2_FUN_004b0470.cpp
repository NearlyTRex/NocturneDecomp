// Name: core_event.cpp_EventChecker2_FUN_004b0470
// Address: 004b0470
// Address Range: [[004b0470, 004b0593]]
// Convention: unknown
// Signature: undefined core_event.cpp_EventChecker2_FUN_004b0470()
// Cross-references:
//   core_event.cpp_LargeEventHandler_FUN_004aacc0 (004aacc0) at 004ab84b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_event_cpp_00625ae1
//   TerminatedCString s_Too_many_game_flags_00625af3
//   TerminatedCString s_core_event_cpp_00625b08
//   TerminatedCString s_Event_name_s_too_long_00625b1a
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_event.cpp_FUN_004b08b0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_string.c_memmove_FUN_005fe5e0
//   crt_string.c_strupr_FUN_00600770

#include "nocturne.h"

/* Signature: undefined1 core_event.cpp_EventChecker2(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void core_event_cpp_EventChecker2_FUN_004b0470(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  int in_stack_00000004;
  char *in_stack_00000008;
  int in_stack_00000010;
  
  bVar6 = 0;
  if ((in_stack_00000008 != (char *)0x0) && (*in_stack_00000008 != '\0')) {
    iVar2 = core_event_cpp_FUN_004b08b0();
    if (in_stack_00000010 == 0) {
      if (-1 < iVar2) {
        iVar4 = *(int *)(in_stack_00000004 + 0x1908) + -1;
        *(int *)(in_stack_00000004 + 0x1908) = iVar4;
        crt_string_c_memmove_FUN_005fe5e0
                  ((void *)(iVar2 * 0x20 + in_stack_00000004 + 0x190c),
                   (void *)(iVar2 * 0x20 + 0x20 + in_stack_00000004 + 0x190c),(iVar4 - iVar2) * 0x20
                  );
        return;
      }
    }
    else if (iVar2 < 0) {
      if (9 < *(int *)(in_stack_00000004 + 0x1908)) {
        g_CurrentFilename = "..\\core\\event.cpp";
        g_CurrentLineNumber = 0xa37;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Too many game flags!");
      }
      uVar3 = 0xffffffff;
      pcVar5 = in_stack_00000008;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
      } while (cVar1 != '\0');
      if (0x1f < ~uVar3 - 1) {
        g_CurrentFilename = "..\\core\\event.cpp";
        g_CurrentLineNumber = 0xa3d;
        core_main_c_displayErrorAndQuit_FUN_00506f10
                  ("Event name %s too long!",in_stack_00000008);
      }
      pcVar5 = (char *)(*(int *)(in_stack_00000004 + 0x1908) * 0x20 + in_stack_00000004 + 0x190c);
      do {
        cVar1 = *in_stack_00000008;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = in_stack_00000008[1];
        in_stack_00000008 = in_stack_00000008 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
      crt_string_c_strupr_FUN_00600770
                ((char *)(in_stack_00000004 + 0x190c + *(int *)(in_stack_00000004 + 0x1908) * 0x20))
      ;
      *(int *)(in_stack_00000004 + 0x1908) = *(int *)(in_stack_00000004 + 0x1908) + 1;
      return;
    }
  }
  return;
}


// Assembly code:
// 004b0470: PUSH EBX
//   Label: core_event.cpp_EventChecker2_FUN_004b0470
// 004b0471: PUSH ESI
// 004b0472: PUSH EBP
// 004b0473: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004b0477: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004b047b: TEST ESI,ESI
// 004b047d: JZ 0x004b0484
//   XREF to: 004b0484 (CONDITIONAL_JUMP)
// 004b047f: CMP byte ptr [ESI],0x0
// 004b0482: JNZ 0x004b0488
//   XREF to: 004b0488 (CONDITIONAL_JUMP)
// 004b0484: POP EBP
//   Label: LAB_004b0484
// 004b0485: POP ESI
// 004b0486: POP EBX
// 004b0487: RET
// 004b0488: PUSH ESI
//   Label: LAB_004b0488
// 004b0489: PUSH EBX
// 004b048a: CALL core_event.cpp_FUN_004b08b0
//   XREF to: 004b08b0 (UNCONDITIONAL_CALL)
// 004b048f: ADD ESP,0x8
// 004b0492: CMP dword ptr [ESP + 0x18],0x0
//   XREF to: Stack[0xc] (READ)
// 004b0497: JZ 0x004b055c
//   XREF to: 004b055c (CONDITIONAL_JUMP)
// 004b049d: TEST EAX,EAX
// 004b049f: JGE 0x004b0484
//   XREF to: 004b0484 (CONDITIONAL_JUMP)
// 004b04a1: CMP dword ptr [EBX + 0x1908],0xa
// 004b04a8: JGE 0x004b0535
//   XREF to: 004b0535 (CONDITIONAL_JUMP)
// 004b04ae: PUSH EDI
//   Label: LAB_004b04ae
// 004b04af: MOV EDI,ESI
// 004b04b1: SUB ECX,ECX
// 004b04b3: DEC ECX
// 004b04b4: XOR EAX,EAX
// 004b04b6: SCASB.REPNE ES:EDI
// 004b04b8: NOT ECX
// 004b04ba: DEC ECX
// 004b04bb: CMP ECX,0x20
// 004b04be: JC 0x004b04e4
//   XREF to: 004b04e4 (CONDITIONAL_JUMP)
// 004b04c0: PUSH ESI
// 004b04c1: MOV EDX,0x625b08
//   XREF to: 00625b08 (PARAM)
// 004b04c6: MOV ECX,0xa3d
// 004b04cb: PUSH 0x625b1a
//   XREF to: 00625b1a (DATA)
// 004b04d0: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004b04d6: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004b04dc: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b04e1: ADD ESP,0x8
// 004b04e4: MOV EDI,dword ptr [EBX + 0x1908]
//   Label: LAB_004b04e4
// 004b04ea: LEA EDX,[EBX + 0x190c]
// 004b04f0: SHL EDI,0x5
// 004b04f3: ADD EDI,EDX
// 004b04f5: PUSH EDI
// 004b04f6: MOV AL,byte ptr [ESI]
//   Label: LAB_004b04f6
// 004b04f8: MOV byte ptr [EDI],AL
// 004b04fa: CMP AL,0x0
// 004b04fc: JZ 0x004b050e
//   XREF to: 004b050e (CONDITIONAL_JUMP)
// 004b04fe: MOV AL,byte ptr [ESI + 0x1]
// 004b0501: ADD ESI,0x2
// 004b0504: MOV byte ptr [EDI + 0x1],AL
// 004b0507: ADD EDI,0x2
// 004b050a: CMP AL,0x0
// 004b050c: JNZ 0x004b04f6
//   XREF to: 004b04f6 (CONDITIONAL_JUMP)
// 004b050e: POP EDI
//   Label: LAB_004b050e
// 004b050f: MOV EAX,dword ptr [EBX + 0x1908]
// 004b0515: SHL EAX,0x5
// 004b0518: ADD EDX,EAX
// 004b051a: PUSH EDX
// 004b051b: CALL crt_string.c_strupr_FUN_00600770
//   XREF to: 00600770 (UNCONDITIONAL_CALL)
// 004b0520: MOV ESI,dword ptr [EBX + 0x1908]
// 004b0526: INC ESI
// 004b0527: ADD ESP,0x4
// 004b052a: MOV dword ptr [EBX + 0x1908],ESI
// 004b0530: POP EDI
// 004b0531: POP EBP
// 004b0532: POP ESI
// 004b0533: POP EBX
// 004b0534: RET
// 004b0535: MOV EBP,0x625ae1
//   Label: LAB_004b0535
//   XREF to: 00625ae1 (DATA)
// 004b053a: MOV EAX,0xa37
// 004b053f: PUSH 0x625af3
//   XREF to: 00625af3 (DATA)
// 004b0544: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 004b054a: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004b054f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b0554: ADD ESP,0x4
// 004b0557: JMP 0x004b04ae
//   XREF to: 004b04ae (UNCONDITIONAL_JUMP)
// 004b055c: TEST EAX,EAX
//   Label: LAB_004b055c
// 004b055e: JL 0x004b0484
//   XREF to: 004b0484 (CONDITIONAL_JUMP)
// 004b0564: MOV ECX,dword ptr [EBX + 0x1908]
// 004b056a: DEC ECX
// 004b056b: MOV EDX,ECX
// 004b056d: SUB EDX,EAX
// 004b056f: ADD EBX,0x190c
// 004b0575: SHL EDX,0x5
// 004b0578: SHL EAX,0x5
// 004b057b: PUSH EDX
// 004b057c: LEA EDX,[EAX + 0x20]
// 004b057f: ADD EDX,EBX
// 004b0581: PUSH EDX
// 004b0582: ADD EAX,EBX
// 004b0584: PUSH EAX
// 004b0585: MOV dword ptr [EBX + -0x4],ECX
// 004b0588: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 004b058d: ADD ESP,0xc
// 004b0590: POP EBP
// 004b0591: POP ESI
// 004b0592: POP EBX
// 004b0593: RET
