// Name: core_event.cpp_CEventList_setTimerEvent_FUN_004b05a0
// Address: 004b05a0
// Address Range: [[004b05a0, 004b0712]]
// Convention: unknown
// Signature: undefined core_event.cpp_CEventList_setTimerEvent_FUN_004b05a0()
// Cross-references:
//   core_event.cpp_LargeEventHandler_FUN_004aacc0 (004aacc0) at 004ad13e [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_event_cpp_00625b32
//   TerminatedCString s_CEventList_setTimerEvent_00625b44
//   TerminatedCString s_core_event_cpp_00625b7c
//   TerminatedCString s_CEventList_setTimerEvent_00625b8e
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_event.cpp_FUN_004b0900
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

/* Signature: undefined1 core_event.cpp_CEventList_setTimerEvent(CEventList* param_1, undefined4
   param_2, undefined4 param_3) */

void core_event_cpp_CEventList_setTimerEvent_FUN_004b05a0(void)

{
  int iVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int in_stack_00000004;
  char *in_stack_00000008;
  float in_stack_0000000c;
  
  dVar2 = (double)in_stack_0000000c;
  if (dVar2 < 0.0) {
    g_CurrentFilename = "..\\core\\event.cpp";
    g_CurrentLineNumber = 0xa5d;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CEventList::setTimerEvent - invalid duration for %s: %f",in_stack_00000008,SUB84(dVar2,0),
               (int)((ulonglong)dVar2 >> 0x20));
  }
  iVar4 = core_event_cpp_FUN_004b0900();
  if (iVar4 < 0) {
    if (0.0 < in_stack_0000000c) {
      if (9 < *(int *)(in_stack_00000004 + 0x3210)) {
        g_CurrentFilename = "..\\core\\event.cpp";
        g_CurrentLineNumber = 0xa7e;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CEventList::setTimerEvent - too many timers!");
      }
      pcVar6 = (char *)(*(int *)(in_stack_00000004 + 0x3210) * 0x20 + in_stack_00000004 + 0x3214);
      do {
        cVar3 = *in_stack_00000008;
        *pcVar6 = cVar3;
        if (cVar3 == '\0') break;
        cVar3 = in_stack_00000008[1];
        in_stack_00000008 = in_stack_00000008 + 2;
        pcVar6[1] = cVar3;
        pcVar6 = pcVar6 + 2;
      } while (cVar3 != '\0');
      *(float *)(in_stack_00000004 + 0x3354 + *(int *)(in_stack_00000004 + 0x3210) * 4) =
           in_stack_0000000c;
      *(int *)(in_stack_00000004 + 0x3210) = *(int *)(in_stack_00000004 + 0x3210) + 1;
      return;
    }
  }
  else {
    iVar1 = iVar4 * 4;
    if (in_stack_0000000c <= 0.0) {
      iVar5 = *(int *)(in_stack_00000004 + 0x3210) + -1;
      *(int *)(in_stack_00000004 + 0x3210) = iVar5;
      crt_string_c_memmove_FUN_005fe5e0
                ((void *)(in_stack_00000004 + 0x3214 + iVar4 * 0x20),
                 (void *)(iVar4 * 0x20 + 0x20 + in_stack_00000004 + 0x3214),(iVar5 - iVar4) * 0x20);
      crt_string_c_memmove_FUN_005fe5e0
                ((void *)(in_stack_00000004 + 0x3354 + iVar1),
                 (void *)(iVar1 + 4 + in_stack_00000004 + 0x3354),
                 (*(int *)(in_stack_00000004 + 0x3210) - iVar4) * 4);
      return;
    }
    *(float *)(iVar1 + 0x3354 + in_stack_00000004) = in_stack_0000000c;
  }
  return;
}


// Assembly code:
// 004b05a0: PUSH EBX
//   Label: core_event.cpp_CEventList_setTimerEvent_FUN_004b05a0
// 004b05a1: PUSH ESI
// 004b05a2: PUSH EDI
// 004b05a3: PUSH EBP
// 004b05a4: MOV EBP,ESP
// 004b05a6: SUB ESP,0xc
// 004b05a9: AND ESP,0xfffffff8
// 004b05ac: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004b05af: FLD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004b05b2: FLDZ
// 004b05b4: FXCH
// 004b05b6: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004b05b9: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004b05bc: FNSTSW AX
// 004b05be: SAHF
// 004b05bf: JBE 0x004b05f2
//   XREF to: 004b05f2 (CONDITIONAL_JUMP)
// 004b05c1: MOV ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 004b05c5: PUSH ESI
// 004b05c6: MOV EDI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 004b05ca: PUSH EDI
// 004b05cb: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004b05ce: PUSH EAX
// 004b05cf: MOV EDX,0x625b32
//   XREF to: 00625b32 (PARAM)
// 004b05d4: MOV ECX,0xa5d
// 004b05d9: PUSH 0x625b44
//   XREF to: 00625b44 (DATA)
// 004b05de: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004b05e4: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004b05ea: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b05ef: ADD ESP,0x10
// 004b05f2: MOV EDX,dword ptr [EBP + 0x18]
//   Label: LAB_004b05f2
//   XREF to: Stack[0x8] (READ)
// 004b05f5: PUSH EDX
// 004b05f6: PUSH EBX
// 004b05f7: CALL core_event.cpp_FUN_004b0900
//   XREF to: 004b0900 (UNCONDITIONAL_CALL)
// 004b05fc: MOV ESI,EAX
// 004b05fe: ADD ESP,0x8
// 004b0601: TEST EAX,EAX
// 004b0603: JL 0x004b0690
//   XREF to: 004b0690 (CONDITIONAL_JUMP)
// 004b0609: FLD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004b060c: FLDZ
// 004b060e: LEA EDI,[EAX*0x4 + 0x0]
// 004b0615: FCOMPP
// 004b0617: FNSTSW AX
// 004b0619: SAHF
// 004b061a: JNC 0x004b062d
//   XREF to: 004b062d (CONDITIONAL_JUMP)
// 004b061c: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004b061f: MOV dword ptr [EDI + EBX*0x1 + 0x3354],EAX
// 004b0626: MOV ESP,EBP
//   Label: LAB_004b0626
// 004b0628: POP EBP
// 004b0629: POP EDI
// 004b062a: POP ESI
// 004b062b: POP EBX
// 004b062c: RET
// 004b062d: MOV EDX,dword ptr [EBX + 0x3210]
//   Label: LAB_004b062d
// 004b0633: DEC EDX
// 004b0634: MOV EAX,EDX
// 004b0636: MOV dword ptr [EBX + 0x3210],EDX
// 004b063c: SUB EAX,ESI
// 004b063e: MOV EDX,ESI
// 004b0640: SHL EAX,0x5
// 004b0643: SHL EDX,0x5
// 004b0646: PUSH EAX
// 004b0647: LEA EAX,[EDX + 0x20]
// 004b064a: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004b064e: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 004b0652: LEA EAX,[EBX + 0x3214]
// 004b0658: ADD ECX,EAX
// 004b065a: PUSH ECX
// 004b065b: ADD EAX,EDX
// 004b065d: PUSH EAX
// 004b065e: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 004b0663: MOV EAX,dword ptr [EBX + 0x3210]
// 004b0669: SUB EAX,ESI
// 004b066b: ADD ESP,0xc
// 004b066e: SHL EAX,0x2
// 004b0671: ADD EBX,0x3354
// 004b0677: PUSH EAX
// 004b0678: LEA EAX,[EDI + 0x4]
// 004b067b: ADD EAX,EBX
// 004b067d: PUSH EAX
// 004b067e: ADD EBX,EDI
// 004b0680: PUSH EBX
// 004b0681: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 004b0686: ADD ESP,0xc
// 004b0689: MOV ESP,EBP
// 004b068b: POP EBP
// 004b068c: POP EDI
// 004b068d: POP ESI
// 004b068e: POP EBX
// 004b068f: RET
// 004b0690: FLD float ptr [EBP + 0x1c]
//   Label: LAB_004b0690
//   XREF to: Stack[0xc] (READ)
// 004b0693: FLDZ
// 004b0695: FCOMPP
// 004b0697: FNSTSW AX
// 004b0699: SAHF
// 004b069a: JNC 0x004b0626
//   XREF to: 004b0626 (CONDITIONAL_JUMP)
// 004b069c: CMP dword ptr [EBX + 0x3210],0xa
// 004b06a3: JL 0x004b06c8
//   XREF to: 004b06c8 (CONDITIONAL_JUMP)
// 004b06a5: MOV ESI,0x625b7c
//   XREF to: 00625b7c (DATA)
// 004b06aa: MOV EDI,0xa7e
// 004b06af: PUSH 0x625b8e
//   XREF to: 00625b8e (DATA)
// 004b06b4: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 004b06ba: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004b06c0: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b06c5: ADD ESP,0x4
// 004b06c8: MOV EDI,dword ptr [EBX + 0x3210]
//   Label: LAB_004b06c8
// 004b06ce: LEA EAX,[EBX + 0x3214]
// 004b06d4: SHL EDI,0x5
// 004b06d7: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004b06da: ADD EDI,EAX
// 004b06dc: PUSH EDI
// 004b06dd: MOV AL,byte ptr [ESI]
//   Label: LAB_004b06dd
// 004b06df: MOV byte ptr [EDI],AL
// 004b06e1: CMP AL,0x0
// 004b06e3: JZ 0x004b06f5
//   XREF to: 004b06f5 (CONDITIONAL_JUMP)
// 004b06e5: MOV AL,byte ptr [ESI + 0x1]
// 004b06e8: ADD ESI,0x2
// 004b06eb: MOV byte ptr [EDI + 0x1],AL
// 004b06ee: ADD EDI,0x2
// 004b06f1: CMP AL,0x0
// 004b06f3: JNZ 0x004b06dd
//   XREF to: 004b06dd (CONDITIONAL_JUMP)
// 004b06f5: POP EDI
//   Label: LAB_004b06f5
// 004b06f6: MOV EAX,dword ptr [EBX + 0x3210]
// 004b06fc: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004b06ff: MOV dword ptr [EBX + EAX*0x4 + 0x3354],EDX
// 004b0706: INC dword ptr [EBX + 0x3210]
// 004b070c: MOV ESP,EBP
// 004b070e: POP EBP
// 004b070f: POP EDI
// 004b0710: POP ESI
// 004b0711: POP EBX
// 004b0712: RET
