// Name: core_bodypart.cpp_FUN_00419f60
// Address: 00419f60
// Address Range: [[00419f60, 00419f9e]]
// Convention: unknown
// Signature: undefined core_bodypart.cpp_FUN_00419f60()

#include "nocturne.h"

/* Signature: undefined1 actors_other_bodypart.cpp_FUN_00419f60(undefined4 param_1, undefined4
   param_2) */

undefined4 * core_bodypart_cpp_FUN_00419f60(void)

{
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  *in_stack_00000008 = *(undefined4 *)(in_stack_00000004 + 0x15c);
  in_stack_00000008[1] = *(undefined4 *)(in_stack_00000004 + 0x160);
  in_stack_00000008[2] = *(undefined4 *)(in_stack_00000004 + 0x164);
  in_stack_00000008[3] = *(undefined4 *)(in_stack_00000004 + 0x168);
  in_stack_00000008[4] = *(undefined4 *)(in_stack_00000004 + 0x16c);
  in_stack_00000008[5] = *(undefined4 *)(in_stack_00000004 + 0x170);
  return in_stack_00000008;
}


// Assembly code:
// 00419f60: PUSH EBX
//   Label: core_bodypart.cpp_FUN_00419f60
// 00419f61: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00419f65: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00419f69: ADD EAX,0x15c
// 00419f6e: MOV EDX,dword ptr [EAX]
// 00419f70: LEA EBX,[EAX + 0x4]
// 00419f73: MOV dword ptr [ECX],EDX
// 00419f75: LEA EDX,[ECX + 0x4]
// 00419f78: MOV EBX,dword ptr [EBX]
// 00419f7a: MOV dword ptr [EDX],EBX
// 00419f7c: LEA EBX,[EAX + 0x8]
// 00419f7f: MOV EBX,dword ptr [EBX]
// 00419f81: MOV dword ptr [EDX + 0x4],EBX
// 00419f84: MOV EBX,dword ptr [EAX + 0xc]
// 00419f87: ADD EAX,0xc
// 00419f8a: MOV dword ptr [EDX + 0x8],EBX
// 00419f8d: LEA EBX,[EAX + 0x4]
// 00419f90: MOV EBX,dword ptr [EBX]
// 00419f92: MOV dword ptr [EDX + 0xc],EBX
// 00419f95: MOV EAX,dword ptr [EAX + 0x8]
// 00419f98: MOV dword ptr [EDX + 0x10],EAX
// 00419f9b: MOV EAX,ECX
// 00419f9d: POP EBX
// 00419f9e: RET
