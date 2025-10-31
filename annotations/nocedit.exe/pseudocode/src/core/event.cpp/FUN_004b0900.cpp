// Name: core_event.cpp_FUN_004b0900
// Address: 004b0900
// Address Range: [[004b0900, 004b094a]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004b0900()
// Cross-references:
//   core_event.cpp_CEventList_setTimerEvent_FUN_004b05a0 (004b05a0) at 004b05f7 [UNCONDITIONAL_CALL]
//   core_event.cpp_FUN_004adc10 (004adc10) at 004adc84 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

/* Signature: undefined1 core_event.cpp_FUN_004b0900(undefined4 param_1, undefined4 param_2) */

int core_event_cpp_FUN_004b0900(void)

{
  int iVar1;
  int iVar2;
  char *str1;
  int in_stack_00000004;
  char *in_stack_00000008;
  
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x3210)) {
    str1 = (char *)(in_stack_00000004 + 0x3214);
    do {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1,in_stack_00000008);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x20;
    } while (iVar2 < *(int *)(in_stack_00000004 + 0x3210));
  }
  return -1;
}


// Assembly code:
// 004b0900: PUSH EBX
//   Label: core_event.cpp_FUN_004b0900
// 004b0901: PUSH ESI
// 004b0902: PUSH EDI
// 004b0903: PUSH EBP
// 004b0904: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004b0908: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004b090c: MOV EDX,dword ptr [EDI + 0x3210]
// 004b0912: XOR EBX,EBX
// 004b0914: TEST EDX,EDX
// 004b0916: JLE 0x004b093a
//   XREF to: 004b093a (CONDITIONAL_JUMP)
// 004b0918: LEA ESI,[EDI + 0x3214]
// 004b091e: PUSH EBP
//   Label: LAB_004b091e
// 004b091f: PUSH ESI
// 004b0920: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004b0925: ADD ESP,0x8
// 004b0928: TEST EAX,EAX
// 004b092a: JZ 0x004b0944
//   XREF to: 004b0944 (CONDITIONAL_JUMP)
// 004b092c: INC EBX
// 004b092d: MOV ECX,dword ptr [EDI + 0x3210]
// 004b0933: ADD ESI,0x20
// 004b0936: CMP EBX,ECX
// 004b0938: JL 0x004b091e
//   XREF to: 004b091e (CONDITIONAL_JUMP)
// 004b093a: MOV EAX,0xffffffff
//   Label: LAB_004b093a
// 004b093f: POP EBP
// 004b0940: POP EDI
// 004b0941: POP ESI
// 004b0942: POP EBX
// 004b0943: RET
// 004b0944: MOV EAX,EBX
//   Label: LAB_004b0944
// 004b0946: POP EBP
// 004b0947: POP EDI
// 004b0948: POP ESI
// 004b0949: POP EBX
// 004b094a: RET
