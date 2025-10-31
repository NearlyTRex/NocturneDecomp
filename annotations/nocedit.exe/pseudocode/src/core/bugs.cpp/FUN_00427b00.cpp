// Name: core_bugs.cpp_FUN_00427b00
// Address: 00427b00
// Address Range: [[00427b00, 00427b3c]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_00427b00()

#include "nocturne.h"

void core_bugs_cpp_FUN_00427b00(void)

{
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  if (in_stack_00000004 == in_stack_00000008) {
    if (in_stack_00000004 + 3 == in_stack_00000008) {
      return;
    }
  }
  else {
    *in_stack_00000004 = *in_stack_00000008;
    in_stack_00000004[1] = in_stack_00000008[1];
    in_stack_00000004[2] = in_stack_00000008[2];
    if (in_stack_00000004 + 3 == in_stack_00000008) {
      return;
    }
  }
  in_stack_00000004[3] = *in_stack_00000008;
  in_stack_00000004[4] = in_stack_00000008[1];
  in_stack_00000004[5] = in_stack_00000008[2];
  return;
}


// Assembly code:
// 00427b00: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_bugs.cpp_FUN_00427b00
//   XREF to: Stack[0x4] (READ)
// 00427b04: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00427b08: CMP EDX,EAX
// 00427b0a: JNZ 0x00427b14
//   XREF to: 00427b14 (CONDITIONAL_JUMP)
// 00427b0c: ADD EDX,0xc
// 00427b0f: CMP EDX,EAX
// 00427b11: JNZ 0x00427b2c
//   XREF to: 00427b2c (CONDITIONAL_JUMP)
// 00427b13: RET
// 00427b14: MOV ECX,dword ptr [EAX]
//   Label: LAB_00427b14
// 00427b16: MOV dword ptr [EDX],ECX
// 00427b18: MOV ECX,dword ptr [EAX + 0x4]
// 00427b1b: MOV dword ptr [EDX + 0x4],ECX
// 00427b1e: MOV ECX,dword ptr [EAX + 0x8]
// 00427b21: MOV dword ptr [EDX + 0x8],ECX
// 00427b24: ADD EDX,0xc
// 00427b27: CMP EDX,EAX
// 00427b29: JNZ 0x00427b2c
//   XREF to: 00427b2c (CONDITIONAL_JUMP)
// 00427b2b: RET
// 00427b2c: MOV ECX,dword ptr [EAX]
//   Label: LAB_00427b2c
// 00427b2e: MOV dword ptr [EDX],ECX
// 00427b30: MOV ECX,dword ptr [EAX + 0x4]
// 00427b33: MOV dword ptr [EDX + 0x4],ECX
// 00427b36: MOV ECX,dword ptr [EAX + 0x8]
// 00427b39: MOV dword ptr [EDX + 0x8],ECX
// 00427b3c: RET
