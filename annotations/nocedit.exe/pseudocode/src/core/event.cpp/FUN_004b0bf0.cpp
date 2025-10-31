// Name: core_event.cpp_FUN_004b0bf0
// Address: 004b0bf0
// Address Range: [[004b0bf0, 004b0c3a]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004b0bf0()
// Cross-references:
//   core_event.cpp_CEventList_setActorVariable_FUN_004b09a0 (004b09a0) at 004b09ed [UNCONDITIONAL_CALL]
//   core_event.cpp_FUN_004b0b80 (004b0b80) at 004b0b8e [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

/* Signature: undefined1 core_event.cpp_FUN_004b0bf0(undefined4 param_1, undefined4 param_2) */

int core_event_cpp_FUN_004b0bf0(void)

{
  int iVar1;
  int iVar2;
  char *str1;
  int in_stack_00000004;
  char *in_stack_00000008;
  
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x34e8)) {
    str1 = (char *)(in_stack_00000004 + 0x34ec);
    do {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1,in_stack_00000008);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x1e;
    } while (iVar2 < *(int *)(in_stack_00000004 + 0x34e8));
  }
  return -1;
}


// Assembly code:
// 004b0bf0: PUSH EBX
//   Label: core_event.cpp_FUN_004b0bf0
// 004b0bf1: PUSH ESI
// 004b0bf2: PUSH EDI
// 004b0bf3: PUSH EBP
// 004b0bf4: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004b0bf8: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004b0bfc: MOV EDX,dword ptr [EDI + 0x34e8]
// 004b0c02: XOR EBX,EBX
// 004b0c04: TEST EDX,EDX
// 004b0c06: JLE 0x004b0c2a
//   XREF to: 004b0c2a (CONDITIONAL_JUMP)
// 004b0c08: LEA ESI,[EDI + 0x34ec]
// 004b0c0e: PUSH EBP
//   Label: LAB_004b0c0e
// 004b0c0f: PUSH ESI
// 004b0c10: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004b0c15: ADD ESP,0x8
// 004b0c18: TEST EAX,EAX
// 004b0c1a: JZ 0x004b0c34
//   XREF to: 004b0c34 (CONDITIONAL_JUMP)
// 004b0c1c: INC EBX
// 004b0c1d: MOV ECX,dword ptr [EDI + 0x34e8]
// 004b0c23: ADD ESI,0x1e
// 004b0c26: CMP EBX,ECX
// 004b0c28: JL 0x004b0c0e
//   XREF to: 004b0c0e (CONDITIONAL_JUMP)
// 004b0c2a: MOV EAX,0xffffffff
//   Label: LAB_004b0c2a
// 004b0c2f: POP EBP
// 004b0c30: POP EDI
// 004b0c31: POP ESI
// 004b0c32: POP EBX
// 004b0c33: RET
// 004b0c34: MOV EAX,EBX
//   Label: LAB_004b0c34
// 004b0c36: POP EBP
// 004b0c37: POP EDI
// 004b0c38: POP ESI
// 004b0c39: POP EBX
// 004b0c3a: RET
