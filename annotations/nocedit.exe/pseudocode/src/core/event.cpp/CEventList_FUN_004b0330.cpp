// Name: core_event.cpp_CEventList_FUN_004b0330
// Address: 004b0330
// Address Range: [[004b0330, 004b0453]]
// Convention: __cdecl
// Signature: void core_event.cpp_CEventList_FUN_004b0330(CEventList * this_ptr)
// Cross-references:
//   core_event.cpp_CEventList_FUN_004aacc0 (004aacc0) at 004ab741 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f5bd9 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_event_cpp_00625a89
//   TerminatedCString s_Too_many_persistent_even_00625a9b
//   TerminatedCString s_core_event_cpp_00625ab7
//   TerminatedCString s_Event_name_s_too_long_00625ac9
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_event.cpp_CEventList_FUN_004b0860
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_string.c_memmove_FUN_005fe5e0
//   crt_string.c_strupr_FUN_00600770

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_FUN_004b0330(CEventList *this_ptr)

{
  CEvent CVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  CEvent *pCVar5;
  byte bVar6;
  CEvent *in_stack_00000008;
  int in_stack_00000010;
  
  bVar6 = 0;
  if ((in_stack_00000008 != (CEvent *)0x0) && (*in_stack_00000008 != (CEvent)0x0)) {
    iVar2 = core_event_cpp_CEventList_FUN_004b0860(this_ptr);
    if (in_stack_00000010 == 0) {
      if (-1 < iVar2) {
        iVar4 = this_ptr->persistent_event_count + -1;
        this_ptr->persistent_event_count = iVar4;
        crt_string_c_memmove_FUN_005fe5e0
                  (this_ptr->persistent_event_list + iVar2 * 0x20,
                   this_ptr->persistent_event_list + iVar2 * 0x20 + 0x20,(iVar4 - iVar2) * 0x20);
        return;
      }
    }
    else if (iVar2 < 0) {
      if (99 < this_ptr->persistent_event_count) {
        g_CurrentFilename = "..\\core\\event.cpp";
        g_CurrentLineNumber = 0x9f5;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Too many persistent events!");
      }
      uVar3 = 0xffffffff;
      pCVar5 = in_stack_00000008;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        CVar1 = *pCVar5;
        pCVar5 = pCVar5 + (uint)bVar6 * -2 + 1;
      } while (CVar1 != (CEvent)0x0);
      if (0x1f < ~uVar3 - 1) {
        g_CurrentFilename = "..\\core\\event.cpp";
        g_CurrentLineNumber = 0x9fb;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Event name %s too long!");
      }
      pCVar5 = this_ptr->persistent_event_list + this_ptr->persistent_event_count * 0x20;
      do {
        CVar1 = *in_stack_00000008;
        *pCVar5 = CVar1;
        if (CVar1 == (CEvent)0x0) break;
        CVar1 = in_stack_00000008[1];
        in_stack_00000008 = in_stack_00000008 + 2;
        pCVar5[1] = CVar1;
        pCVar5 = pCVar5 + 2;
      } while (CVar1 != (CEvent)0x0);
      crt_string_c_strupr_FUN_00600770
                ((char *)(this_ptr->persistent_event_list + this_ptr->persistent_event_count * 0x20)
                );
      this_ptr->persistent_event_count = this_ptr->persistent_event_count + 1;
      return;
    }
  }
  return;
}


// Assembly code:
// 004b0330: PUSH EBX
//   Label: core_event.cpp_CEventList_FUN_004b0330
// 004b0331: PUSH ESI
// 004b0332: PUSH EBP
// 004b0333: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004b0337: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004b033b: TEST ESI,ESI
// 004b033d: JZ 0x004b0344
//   XREF to: 004b0344 (CONDITIONAL_JUMP)
// 004b033f: CMP byte ptr [ESI],0x0
// 004b0342: JNZ 0x004b0348
//   XREF to: 004b0348 (CONDITIONAL_JUMP)
// 004b0344: POP EBP
//   Label: LAB_004b0344
// 004b0345: POP ESI
// 004b0346: POP EBX
// 004b0347: RET
// 004b0348: PUSH ESI
//   Label: LAB_004b0348
// 004b0349: PUSH EBX
// 004b034a: CALL core_event.cpp_CEventList_FUN_004b0860
//   XREF to: 004b0860 (UNCONDITIONAL_CALL)
// 004b034f: ADD ESP,0x8
// 004b0352: CMP dword ptr [ESP + 0x18],0x0
//   XREF to: Stack[0xc] (READ)
// 004b0357: JZ 0x004b041c
//   XREF to: 004b041c (CONDITIONAL_JUMP)
// 004b035d: TEST EAX,EAX
// 004b035f: JGE 0x004b0344
//   XREF to: 004b0344 (CONDITIONAL_JUMP)
// 004b0361: CMP dword ptr [EBX + 0x258c],0x64
// 004b0368: JGE 0x004b03f5
//   XREF to: 004b03f5 (CONDITIONAL_JUMP)
// 004b036e: PUSH EDI
//   Label: LAB_004b036e
// 004b036f: MOV EDI,ESI
// 004b0371: SUB ECX,ECX
// 004b0373: DEC ECX
// 004b0374: XOR EAX,EAX
// 004b0376: SCASB.REPNE ES:EDI
// 004b0378: NOT ECX
// 004b037a: DEC ECX
// 004b037b: CMP ECX,0x20
// 004b037e: JC 0x004b03a4
//   XREF to: 004b03a4 (CONDITIONAL_JUMP)
// 004b0380: PUSH ESI
// 004b0381: MOV EDX,0x625ab7
//   XREF to: 00625ab7 (PARAM)
// 004b0386: MOV ECX,0x9fb
// 004b038b: PUSH 0x625ac9
//   XREF to: 00625ac9 (DATA)
// 004b0390: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004b0396: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004b039c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b03a1: ADD ESP,0x8
// 004b03a4: MOV EDI,dword ptr [EBX + 0x258c]
//   Label: LAB_004b03a4
// 004b03aa: LEA EDX,[EBX + 0x2590]
// 004b03b0: SHL EDI,0x5
// 004b03b3: ADD EDI,EDX
// 004b03b5: PUSH EDI
// 004b03b6: MOV AL,byte ptr [ESI]
//   Label: LAB_004b03b6
// 004b03b8: MOV byte ptr [EDI],AL
// 004b03ba: CMP AL,0x0
// 004b03bc: JZ 0x004b03ce
//   XREF to: 004b03ce (CONDITIONAL_JUMP)
// 004b03be: MOV AL,byte ptr [ESI + 0x1]
// 004b03c1: ADD ESI,0x2
// 004b03c4: MOV byte ptr [EDI + 0x1],AL
// 004b03c7: ADD EDI,0x2
// 004b03ca: CMP AL,0x0
// 004b03cc: JNZ 0x004b03b6
//   XREF to: 004b03b6 (CONDITIONAL_JUMP)
// 004b03ce: POP EDI
//   Label: LAB_004b03ce
// 004b03cf: MOV EAX,dword ptr [EBX + 0x258c]
// 004b03d5: SHL EAX,0x5
// 004b03d8: ADD EDX,EAX
// 004b03da: PUSH EDX
// 004b03db: CALL crt_string.c_strupr_FUN_00600770
//   XREF to: 00600770 (UNCONDITIONAL_CALL)
// 004b03e0: MOV ESI,dword ptr [EBX + 0x258c]
// 004b03e6: INC ESI
// 004b03e7: ADD ESP,0x4
// 004b03ea: MOV dword ptr [EBX + 0x258c],ESI
// 004b03f0: POP EDI
// 004b03f1: POP EBP
// 004b03f2: POP ESI
// 004b03f3: POP EBX
// 004b03f4: RET
// 004b03f5: MOV EBP,0x625a89
//   Label: LAB_004b03f5
//   XREF to: 00625a89 (DATA)
// 004b03fa: MOV EAX,0x9f5
// 004b03ff: PUSH 0x625a9b
//   XREF to: 00625a9b (DATA)
// 004b0404: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 004b040a: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004b040f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b0414: ADD ESP,0x4
// 004b0417: JMP 0x004b036e
//   XREF to: 004b036e (UNCONDITIONAL_JUMP)
// 004b041c: TEST EAX,EAX
//   Label: LAB_004b041c
// 004b041e: JL 0x004b0344
//   XREF to: 004b0344 (CONDITIONAL_JUMP)
// 004b0424: MOV ECX,dword ptr [EBX + 0x258c]
// 004b042a: DEC ECX
// 004b042b: MOV EDX,ECX
// 004b042d: SUB EDX,EAX
// 004b042f: ADD EBX,0x2590
// 004b0435: SHL EDX,0x5
// 004b0438: SHL EAX,0x5
// 004b043b: PUSH EDX
// 004b043c: LEA EDX,[EAX + 0x20]
// 004b043f: ADD EDX,EBX
// 004b0441: PUSH EDX
// 004b0442: ADD EAX,EBX
// 004b0444: PUSH EAX
// 004b0445: MOV dword ptr [EBX + -0x4],ECX
// 004b0448: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 004b044d: ADD ESP,0xc
// 004b0450: POP EBP
// 004b0451: POP ESI
// 004b0452: POP EBX
// 004b0453: RET
