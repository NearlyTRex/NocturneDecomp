// Name: core_event.cpp_FUN_004b08b0
// Address: 004b08b0
// Address Range: [[004b08b0, 004b08fa]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004b08b0()
// Cross-references:
//   core_event.cpp_EventChecker2_FUN_004b0470 (004b0470) at 004b048a [UNCONDITIONAL_CALL]
//   core_event.cpp_FUN_004adc10 (004adc10) at 004adc76 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

/* Signature: undefined1 core_event.cpp_FUN_004b08b0(undefined4 param_1, undefined4 param_2) */

int core_event_cpp_FUN_004b08b0(void)

{
  int iVar1;
  int iVar2;
  char *str1;
  int in_stack_00000004;
  char *in_stack_00000008;
  
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x1908)) {
    str1 = (char *)(in_stack_00000004 + 0x190c);
    do {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1,in_stack_00000008);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x20;
    } while (iVar2 < *(int *)(in_stack_00000004 + 0x1908));
  }
  return -1;
}


// Assembly code:
// 004b08b0: PUSH EBX
//   Label: core_event.cpp_FUN_004b08b0
// 004b08b1: PUSH ESI
// 004b08b2: PUSH EDI
// 004b08b3: PUSH EBP
// 004b08b4: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004b08b8: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004b08bc: MOV EDX,dword ptr [EDI + 0x1908]
// 004b08c2: XOR EBX,EBX
// 004b08c4: TEST EDX,EDX
// 004b08c6: JLE 0x004b08ea
//   XREF to: 004b08ea (CONDITIONAL_JUMP)
// 004b08c8: LEA ESI,[EDI + 0x190c]
// 004b08ce: PUSH EBP
//   Label: LAB_004b08ce
// 004b08cf: PUSH ESI
// 004b08d0: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004b08d5: ADD ESP,0x8
// 004b08d8: TEST EAX,EAX
// 004b08da: JZ 0x004b08f4
//   XREF to: 004b08f4 (CONDITIONAL_JUMP)
// 004b08dc: INC EBX
// 004b08dd: MOV ECX,dword ptr [EDI + 0x1908]
// 004b08e3: ADD ESI,0x20
// 004b08e6: CMP EBX,ECX
// 004b08e8: JL 0x004b08ce
//   XREF to: 004b08ce (CONDITIONAL_JUMP)
// 004b08ea: MOV EAX,0xffffffff
//   Label: LAB_004b08ea
// 004b08ef: POP EBP
// 004b08f0: POP EDI
// 004b08f1: POP ESI
// 004b08f2: POP EBX
// 004b08f3: RET
// 004b08f4: MOV EAX,EBX
//   Label: LAB_004b08f4
// 004b08f6: POP EBP
// 004b08f7: POP EDI
// 004b08f8: POP ESI
// 004b08f9: POP EBX
// 004b08fa: RET
