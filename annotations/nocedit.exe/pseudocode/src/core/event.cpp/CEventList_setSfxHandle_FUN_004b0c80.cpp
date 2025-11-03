// Name: core_event.cpp_CEventList_setSfxHandle_FUN_004b0c80
// Address: 004b0c80
// Address Range: [[004b0c80, 004b0d5d]]
// Convention: __cdecl
// Signature: void core_event.cpp_CEventList_setSfxHandle_FUN_004b0c80(CEventList * this_ptr)
// Cross-references:
//   core_event.cpp_CEventList_FUN_004aacc0 (004aacc0) at 004ac5a2 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_event_cpp_00625ca8
//   TerminatedCString s_CEventList_setSfxHandle__00625cba
//   TerminatedCString s_core_event_cpp_00625ce3
//   TerminatedCString s_CEventList_setSfxHandle__00625cf5
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_event.cpp_CEventList_FUN_004b0d60
//   core_event.cpp_CEventList_FUN_004b0db0
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_setSfxHandle_FUN_004b0c80(CEventList *this_ptr)

{
  CEvent CVar1;
  int iVar2;
  uint uVar3;
  CEvent *pCVar4;
  byte bVar5;
  CEvent *in_stack_00000008;
  undefined4 in_stack_00000018;
  
  bVar5 = 0;
  core_event_cpp_CEventList_FUN_004b0db0(this_ptr);
  iVar2 = core_event_cpp_CEventList_FUN_004b0d60(this_ptr);
  if (iVar2 < 0) {
    if (0x13 < this_ptr[1].event_count) {
      g_CurrentFilename = "..\\core\\event.cpp";
      g_CurrentLineNumber = 0xba6;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CEventList::setSfxHandle - too many sfx!");
    }
    iVar2 = this_ptr[1].event_count;
    this_ptr[1].event_count = iVar2 + 1;
  }
  uVar3 = 0xffffffff;
  pCVar4 = in_stack_00000008;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    CVar1 = *pCVar4;
    pCVar4 = pCVar4 + (uint)bVar5 * -2 + 1;
  } while (CVar1 != (CEvent)0x0);
  if (0x13 < ~uVar3 - 1) {
    g_CurrentFilename = "..\\core\\event.cpp";
    g_CurrentLineNumber = 0xbae;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CEventList::setSfxHandle - sfx handle name %s is too long - max %d characters");
  }
  pCVar4 = this_ptr[1].event_list + iVar2 * 0x120 + 4;
  do {
    CVar1 = *in_stack_00000008;
    *pCVar4 = CVar1;
    if (CVar1 == (CEvent)0x0) break;
    CVar1 = in_stack_00000008[1];
    in_stack_00000008 = in_stack_00000008 + 2;
    pCVar4[1] = CVar1;
    pCVar4 = pCVar4 + 2;
  } while (CVar1 != (CEvent)0x0);
  *(undefined4 *)(this_ptr[1].event_list + iVar2 * 0x120) = in_stack_00000018;
  core_event_cpp_CEventList_FUN_004b0db0(this_ptr);
  return;
}


// Assembly code:
// 004b0c80: PUSH EBX
//   Label: core_event.cpp_CEventList_setSfxHandle_FUN_004b0c80
// 004b0c81: PUSH ESI
// 004b0c82: PUSH EDI
// 004b0c83: PUSH EBP
// 004b0c84: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004b0c88: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004b0c8c: PUSH EBX
// 004b0c8d: CALL core_event.cpp_CEventList_FUN_004b0db0
//   XREF to: 004b0db0 (UNCONDITIONAL_CALL)
// 004b0c92: ADD ESP,0x4
// 004b0c95: PUSH ESI
// 004b0c96: PUSH EBX
// 004b0c97: CALL core_event.cpp_CEventList_FUN_004b0d60
//   XREF to: 004b0d60 (UNCONDITIONAL_CALL)
// 004b0c9c: ADD ESP,0x8
// 004b0c9f: MOV EDX,EAX
// 004b0ca1: TEST EAX,EAX
// 004b0ca3: JGE 0x004b0ce0
//   XREF to: 004b0ce0 (CONDITIONAL_JUMP)
// 004b0ca5: CMP dword ptr [EBX + 0x3ac8],0x14
// 004b0cac: JL 0x004b0cd1
//   XREF to: 004b0cd1 (CONDITIONAL_JUMP)
// 004b0cae: MOV ECX,0x625ca8
//   XREF to: 00625ca8 (PARAM)
// 004b0cb3: MOV EDI,0xba6
// 004b0cb8: PUSH 0x625cba
//   XREF to: 00625cba (DATA)
// 004b0cbd: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004b0cc3: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004b0cc9: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b0cce: ADD ESP,0x4
// 004b0cd1: MOV EDX,dword ptr [EBX + 0x3ac8]
//   Label: LAB_004b0cd1
// 004b0cd7: LEA EAX,[EDX + 0x1]
// 004b0cda: MOV dword ptr [EBX + 0x3ac8],EAX
// 004b0ce0: LEA EAX,[EDX*0x8 + 0x0]
//   Label: LAB_004b0ce0
// 004b0ce7: ADD EAX,EDX
// 004b0ce9: LEA EBP,[EBX + 0x3acc]
// 004b0cef: SHL EAX,0x5
// 004b0cf2: MOV EDI,ESI
// 004b0cf4: ADD EBP,EAX
// 004b0cf6: SUB ECX,ECX
// 004b0cf8: DEC ECX
// 004b0cf9: XOR EAX,EAX
// 004b0cfb: SCASB.REPNE ES:EDI
// 004b0cfd: NOT ECX
// 004b0cff: DEC ECX
// 004b0d00: CMP ECX,0x14
// 004b0d03: JNC 0x004b0d37
//   XREF to: 004b0d37 (CONDITIONAL_JUMP)
// 004b0d05: LEA EDI,[EBP + 0x4]
//   Label: LAB_004b0d05
// 004b0d08: PUSH EDI
// 004b0d09: MOV AL,byte ptr [ESI]
//   Label: LAB_004b0d09
// 004b0d0b: MOV byte ptr [EDI],AL
// 004b0d0d: CMP AL,0x0
// 004b0d0f: JZ 0x004b0d21
//   XREF to: 004b0d21 (CONDITIONAL_JUMP)
// 004b0d11: MOV AL,byte ptr [ESI + 0x1]
// 004b0d14: ADD ESI,0x2
// 004b0d17: MOV byte ptr [EDI + 0x1],AL
// 004b0d1a: ADD EDI,0x2
// 004b0d1d: CMP AL,0x0
// 004b0d1f: JNZ 0x004b0d09
//   XREF to: 004b0d09 (CONDITIONAL_JUMP)
// 004b0d21: POP EDI
//   Label: LAB_004b0d21
// 004b0d22: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004b0d26: PUSH EBX
// 004b0d27: MOV dword ptr [EBP],EAX
// 004b0d2a: CALL core_event.cpp_CEventList_FUN_004b0db0
//   XREF to: 004b0db0 (UNCONDITIONAL_CALL)
// 004b0d2f: ADD ESP,0x4
// 004b0d32: POP EBP
// 004b0d33: POP EDI
// 004b0d34: POP ESI
// 004b0d35: POP EBX
// 004b0d36: RET
// 004b0d37: PUSH 0x13
//   Label: LAB_004b0d37
// 004b0d39: PUSH ESI
// 004b0d3a: MOV EAX,0x625ce3
//   XREF to: 00625ce3 (PARAM)
// 004b0d3f: MOV EDX,0xbae
// 004b0d44: PUSH 0x625cf5
//   XREF to: 00625cf5 (DATA)
// 004b0d49: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 004b0d4e: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 004b0d54: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b0d59: ADD ESP,0xc
// 004b0d5c: JMP 0x004b0d05
//   XREF to: 004b0d05 (UNCONDITIONAL_JUMP)
