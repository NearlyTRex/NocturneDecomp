// Name: core_msnedit.cpp_FUN_00538f40
// Address: 00538f40
// Address Range: [[00538f40, 00538f8d]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_00538f40()
// Cross-references:
//   core_msnedit.cpp_NotGoingtoAddToList_CantAdd_FUN_00538d60 (00538d60) at 00538d6c [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_FUN_00538f40(undefined4 param_1, undefined4 param_2) */

int core_msnedit_cpp_FUN_00538f40(void)

{
  int iVar1;
  int iVar2;
  char *str1;
  int in_stack_00000004;
  char *in_stack_00000008;
  
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x144)) {
    str1 = (char *)(in_stack_00000004 + 0x148);
    do {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1,in_stack_00000008);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x100;
    } while (iVar2 < *(int *)(in_stack_00000004 + 0x144));
  }
  return -1;
}


// Assembly code:
// 00538f40: PUSH EBX
//   Label: core_msnedit.cpp_FUN_00538f40
// 00538f41: PUSH ESI
// 00538f42: PUSH EDI
// 00538f43: PUSH EBP
// 00538f44: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00538f48: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00538f4c: MOV EDX,dword ptr [EDI + 0x144]
// 00538f52: XOR EBX,EBX
// 00538f54: TEST EDX,EDX
// 00538f56: JLE 0x00538f7d
//   XREF to: 00538f7d (CONDITIONAL_JUMP)
// 00538f58: LEA ESI,[EDI + 0x148]
// 00538f5e: PUSH EBP
//   Label: LAB_00538f5e
// 00538f5f: PUSH ESI
// 00538f60: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 00538f65: ADD ESP,0x8
// 00538f68: TEST EAX,EAX
// 00538f6a: JZ 0x00538f87
//   XREF to: 00538f87 (CONDITIONAL_JUMP)
// 00538f6c: INC EBX
// 00538f6d: MOV ECX,dword ptr [EDI + 0x144]
// 00538f73: ADD ESI,0x100
// 00538f79: CMP EBX,ECX
// 00538f7b: JL 0x00538f5e
//   XREF to: 00538f5e (CONDITIONAL_JUMP)
// 00538f7d: MOV EAX,0xffffffff
//   Label: LAB_00538f7d
// 00538f82: POP EBP
// 00538f83: POP EDI
// 00538f84: POP ESI
// 00538f85: POP EBX
// 00538f86: RET
// 00538f87: MOV EAX,EBX
//   Label: LAB_00538f87
// 00538f89: POP EBP
// 00538f8a: POP EDI
// 00538f8b: POP ESI
// 00538f8c: POP EBX
// 00538f8d: RET
