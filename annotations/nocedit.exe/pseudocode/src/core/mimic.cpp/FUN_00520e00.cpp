// Name: core_mimic.cpp_FUN_00520e00
// Address: 00520e00
// Address Range: [[00520e00, 00520e1e]]
// Convention: unknown
// Signature: undefined core_mimic.cpp_FUN_00520e00()

#include "nocturne.h"

void core_mimic_cpp_FUN_00520e00(void)

{
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000008;
  in_stack_00000004[1] = in_stack_00000008[1];
  in_stack_00000004[2] = in_stack_00000008[2];
  in_stack_00000004[3] = in_stack_00000008[3];
  return;
}


// Assembly code:
// 00520e00: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_mimic.cpp_FUN_00520e00
//   XREF to: Stack[0x4] (READ)
// 00520e04: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00520e08: MOV ECX,dword ptr [EDX]
// 00520e0a: MOV dword ptr [EAX],ECX
// 00520e0c: MOV ECX,dword ptr [EDX + 0x4]
// 00520e0f: MOV dword ptr [EAX + 0x4],ECX
// 00520e12: MOV ECX,dword ptr [EDX + 0x8]
// 00520e15: MOV dword ptr [EAX + 0x8],ECX
// 00520e18: MOV EDX,dword ptr [EDX + 0xc]
// 00520e1b: MOV dword ptr [EAX + 0xc],EDX
// 00520e1e: RET
