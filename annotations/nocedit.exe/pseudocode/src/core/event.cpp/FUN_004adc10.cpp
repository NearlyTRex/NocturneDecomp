// Name: core_event.cpp_FUN_004adc10
// Address: 004adc10
// Address Range: [[004adc10, 004adc96]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004adc10()
// Cross-references:
//   core_event.cpp_CEvent_EventReadingFromFile_FUN_004ae140 (004ae140) at 004ae31e [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_TRUE_006252a9
// Function calls:
//   core_event.cpp_FUN_004b0860
//   core_event.cpp_FUN_004b08b0
//   core_event.cpp_FUN_004b0900
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

/* Signature: undefined1 core_event.cpp_FUN_004adc10(undefined4 param_1, undefined4 param_2) */

undefined4 core_event_cpp_FUN_004adc10(void)

{
  int iVar1;
  int iVar2;
  char *str1;
  int in_stack_00000004;
  char *in_stack_00000008;
  
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000008,"TRUE");
  if (iVar1 != 0) {
    iVar1 = 0;
    if (0 < *(int *)(in_stack_00000004 + 0xc84)) {
      str1 = (char *)(in_stack_00000004 + 0xc88);
      do {
        iVar2 = crt_string_c_stricmp_FUN_005fe7f0(str1,in_stack_00000008);
        if (iVar2 == 0) {
          return 1;
        }
        iVar1 = iVar1 + 1;
        str1 = str1 + 0x20;
      } while (iVar1 < *(int *)(in_stack_00000004 + 0xc84));
    }
    iVar1 = core_event_cpp_FUN_004b0860();
    if (((iVar1 < 0) && (iVar1 = core_event_cpp_FUN_004b08b0(), iVar1 < 0)) &&
       (iVar1 = core_event_cpp_FUN_004b0900(), iVar1 < 0)) {
      return 0;
    }
  }
  return 1;
}


// Assembly code:
// 004adc10: PUSH EBX
//   Label: core_event.cpp_FUN_004adc10
// 004adc11: PUSH ESI
// 004adc12: PUSH EDI
// 004adc13: PUSH EBP
// 004adc14: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004adc18: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004adc1c: PUSH 0x6252a9
//   XREF to: 006252a9 (DATA)
// 004adc21: PUSH EBP
// 004adc22: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004adc27: ADD ESP,0x8
// 004adc2a: TEST EAX,EAX
// 004adc2c: JZ 0x004adc6a
//   XREF to: 004adc6a (CONDITIONAL_JUMP)
// 004adc2e: MOV EDX,dword ptr [EDI + 0xc84]
// 004adc34: XOR ESI,ESI
// 004adc36: TEST EDX,EDX
// 004adc38: JLE 0x004adc5c
//   XREF to: 004adc5c (CONDITIONAL_JUMP)
// 004adc3a: LEA EBX,[EDI + 0xc88]
// 004adc40: PUSH EBP
//   Label: LAB_004adc40
// 004adc41: PUSH EBX
// 004adc42: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004adc47: ADD ESP,0x8
// 004adc4a: TEST EAX,EAX
// 004adc4c: JZ 0x004adc6a
//   XREF to: 004adc6a (CONDITIONAL_JUMP)
// 004adc4e: INC ESI
// 004adc4f: MOV ECX,dword ptr [EDI + 0xc84]
// 004adc55: ADD EBX,0x20
// 004adc58: CMP ESI,ECX
// 004adc5a: JL 0x004adc40
//   XREF to: 004adc40 (CONDITIONAL_JUMP)
// 004adc5c: PUSH EBP
//   Label: LAB_004adc5c
// 004adc5d: PUSH EDI
// 004adc5e: CALL core_event.cpp_FUN_004b0860
//   XREF to: 004b0860 (UNCONDITIONAL_CALL)
// 004adc63: ADD ESP,0x8
// 004adc66: TEST EAX,EAX
// 004adc68: JL 0x004adc74
//   XREF to: 004adc74 (CONDITIONAL_JUMP)
// 004adc6a: MOV EAX,0x1
//   Label: LAB_004adc6a
// 004adc6f: POP EBP
// 004adc70: POP EDI
// 004adc71: POP ESI
// 004adc72: POP EBX
// 004adc73: RET
// 004adc74: PUSH EBP
//   Label: LAB_004adc74
// 004adc75: PUSH EDI
// 004adc76: CALL core_event.cpp_FUN_004b08b0
//   XREF to: 004b08b0 (UNCONDITIONAL_CALL)
// 004adc7b: ADD ESP,0x8
// 004adc7e: TEST EAX,EAX
// 004adc80: JGE 0x004adc6a
//   XREF to: 004adc6a (CONDITIONAL_JUMP)
// 004adc82: PUSH EBP
// 004adc83: PUSH EDI
// 004adc84: CALL core_event.cpp_FUN_004b0900
//   XREF to: 004b0900 (UNCONDITIONAL_CALL)
// 004adc89: ADD ESP,0x8
// 004adc8c: TEST EAX,EAX
// 004adc8e: JGE 0x004adc6a
//   XREF to: 004adc6a (CONDITIONAL_JUMP)
// 004adc90: XOR EAX,EAX
// 004adc92: POP EBP
// 004adc93: POP EDI
// 004adc94: POP ESI
// 004adc95: POP EBX
// 004adc96: RET
