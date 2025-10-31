// Name: core_set.cpp_FUN_005714c0
// Address: 005714c0
// Address Range: [[005714c0, 00571504]]
// Convention: unknown
// Signature: undefined core_set.cpp_FUN_005714c0()

#include "nocturne.h"

void core_set_cpp_FUN_005714c0(void)

{
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  if (in_stack_00000004 == in_stack_00000008) {
    if (in_stack_00000004 + 3 == in_stack_00000008 + 3) {
      return;
    }
  }
  else {
    *in_stack_00000004 = *in_stack_00000008;
    in_stack_00000004[1] = in_stack_00000008[1];
    in_stack_00000004[2] = in_stack_00000008[2];
    if (in_stack_00000004 + 3 == in_stack_00000008 + 3) {
      return;
    }
  }
  in_stack_00000004[3] = in_stack_00000008[3];
  in_stack_00000004[4] = in_stack_00000008[4];
  in_stack_00000004[5] = in_stack_00000008[5];
  return;
}


// Assembly code:
// 005714c0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_set.cpp_FUN_005714c0
//   XREF to: Stack[0x4] (READ)
// 005714c4: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005714c8: CMP EAX,EDX
// 005714ca: JNZ 0x005714d7
//   XREF to: 005714d7 (CONDITIONAL_JUMP)
// 005714cc: ADD EDX,0xc
// 005714cf: LEA ECX,[EAX + 0xc]
// 005714d2: CMP ECX,EDX
// 005714d4: JNZ 0x005714f2
//   XREF to: 005714f2 (CONDITIONAL_JUMP)
// 005714d6: RET
// 005714d7: MOV ECX,dword ptr [EDX]
//   Label: LAB_005714d7
// 005714d9: MOV dword ptr [EAX],ECX
// 005714db: MOV ECX,dword ptr [EDX + 0x4]
// 005714de: MOV dword ptr [EAX + 0x4],ECX
// 005714e1: MOV ECX,dword ptr [EDX + 0x8]
// 005714e4: MOV dword ptr [EAX + 0x8],ECX
// 005714e7: ADD EDX,0xc
// 005714ea: LEA ECX,[EAX + 0xc]
// 005714ed: CMP ECX,EDX
// 005714ef: JNZ 0x005714f2
//   XREF to: 005714f2 (CONDITIONAL_JUMP)
// 005714f1: RET
// 005714f2: PUSH EBX
//   Label: LAB_005714f2
// 005714f3: MOV EBX,dword ptr [EDX]
// 005714f5: MOV dword ptr [ECX],EBX
// 005714f7: MOV EBX,dword ptr [EDX + 0x4]
// 005714fa: MOV dword ptr [ECX + 0x4],EBX
// 005714fd: MOV EBX,dword ptr [EDX + 0x8]
// 00571500: MOV dword ptr [ECX + 0x8],EBX
// 00571503: POP EBX
// 00571504: RET
