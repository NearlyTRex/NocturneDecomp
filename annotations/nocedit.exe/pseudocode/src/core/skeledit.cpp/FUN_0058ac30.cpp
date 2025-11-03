// Name: core_skeledit.cpp_FUN_0058ac30
// Address: 0058ac30
// Address Range: [[0058ac30, 0058ac7c]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058ac30()
// Cross-references:
//   core_skeledit.cpp_CBoneStructure_readBONheader_FUN_0058a4a0 (0058a4a0) at 0058a90c [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058bd00 (0058bd00) at 0058be16 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

int core_skeledit_cpp_FUN_0058ac30(void)

{
  int iVar1;
  int iVar2;
  int *str1;
  int *in_stack_0000000c;
  char *in_stack_00000010;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x1c);
  iVar2 = 0;
  if (0 < *in_stack_0000000c) {
    str1 = in_stack_0000000c + 1;
    do {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0((char *)str1,in_stack_00000010);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x21;
    } while (iVar2 < *in_stack_0000000c);
  }
  return -1;
}


// Assembly code:
// 0058ac30: PUSH 0x1c
//   Label: core_skeledit.cpp_FUN_0058ac30
// 0058ac35: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058ac3a: PUSH EBX
// 0058ac3b: PUSH ESI
// 0058ac3c: PUSH EDI
// 0058ac3d: PUSH EBP
// 0058ac3e: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0058ac42: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0058ac46: MOV EDX,dword ptr [EDI]
// 0058ac48: XOR EBX,EBX
// 0058ac4a: TEST EDX,EDX
// 0058ac4c: JLE 0x0058ac6c
//   XREF to: 0058ac6c (CONDITIONAL_JUMP)
// 0058ac4e: LEA ESI,[EDI + 0x4]
// 0058ac51: PUSH EBP
//   Label: LAB_0058ac51
// 0058ac52: PUSH ESI
// 0058ac53: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0058ac58: ADD ESP,0x8
// 0058ac5b: TEST EAX,EAX
// 0058ac5d: JZ 0x0058ac76
//   XREF to: 0058ac76 (CONDITIONAL_JUMP)
// 0058ac5f: INC EBX
// 0058ac60: MOV ECX,dword ptr [EDI]
// 0058ac62: ADD ESI,0x84
// 0058ac68: CMP EBX,ECX
// 0058ac6a: JL 0x0058ac51
//   XREF to: 0058ac51 (CONDITIONAL_JUMP)
// 0058ac6c: MOV EAX,0xffffffff
//   Label: LAB_0058ac6c
// 0058ac71: POP EBP
// 0058ac72: POP EDI
// 0058ac73: POP ESI
// 0058ac74: POP EBX
// 0058ac75: RET
// 0058ac76: MOV EAX,EBX
//   Label: LAB_0058ac76
// 0058ac78: POP EBP
// 0058ac79: POP EDI
// 0058ac7a: POP ESI
// 0058ac7b: POP EBX
// 0058ac7c: RET
