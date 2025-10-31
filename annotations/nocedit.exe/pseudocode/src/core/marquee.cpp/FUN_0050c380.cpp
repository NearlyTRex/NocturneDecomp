// Name: core_marquee.cpp_FUN_0050c380
// Address: 0050c380
// Address Range: [[0050c380, 0050c3d2]]
// Convention: unknown
// Signature: undefined core_marquee.cpp_FUN_0050c380()

#include "nocturne.h"

/* Signature: undefined1 actors_other_marquee.cpp_FUN_0050c380(undefined4 param_1, undefined4
   param_2) */

void core_marquee_cpp_FUN_0050c380(void)

{
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  if (in_stack_00000008 == (undefined4 *)(in_stack_00000004 + 0x184)) {
    if (in_stack_00000008 + 3 == (undefined4 *)(in_stack_00000004 + 400)) {
      return;
    }
  }
  else {
    *in_stack_00000008 = *(undefined4 *)(in_stack_00000004 + 0x184);
    in_stack_00000008[1] = *(undefined4 *)(in_stack_00000004 + 0x188);
    in_stack_00000008[2] = *(undefined4 *)(in_stack_00000004 + 0x18c);
    if (in_stack_00000008 + 3 == (undefined4 *)(in_stack_00000004 + 400)) {
      return;
    }
  }
  in_stack_00000008[3] = *(undefined4 *)(in_stack_00000004 + 400);
  in_stack_00000008[4] = *(undefined4 *)(in_stack_00000004 + 0x194);
  in_stack_00000008[5] = *(undefined4 *)(in_stack_00000004 + 0x198);
  return;
}


// Assembly code:
// 0050c380: PUSH EBX
//   Label: core_marquee.cpp_FUN_0050c380
// 0050c381: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0050c385: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0050c389: LEA EDX,[ECX + 0x184]
// 0050c38f: CMP EAX,EDX
// 0050c391: JNZ 0x0050c3a2
//   XREF to: 0050c3a2 (CONDITIONAL_JUMP)
// 0050c393: ADD ECX,0x190
// 0050c399: LEA EDX,[EAX + 0xc]
// 0050c39c: CMP EDX,ECX
// 0050c39e: JNZ 0x0050c3c1
//   XREF to: 0050c3c1 (CONDITIONAL_JUMP)
// 0050c3a0: POP EBX
// 0050c3a1: RET
// 0050c3a2: MOV EBX,dword ptr [EDX]
//   Label: LAB_0050c3a2
// 0050c3a4: MOV dword ptr [EAX],EBX
// 0050c3a6: MOV EBX,dword ptr [EDX + 0x4]
// 0050c3a9: MOV dword ptr [EAX + 0x4],EBX
// 0050c3ac: MOV EBX,dword ptr [EDX + 0x8]
// 0050c3af: MOV dword ptr [EAX + 0x8],EBX
// 0050c3b2: ADD ECX,0x190
// 0050c3b8: LEA EDX,[EAX + 0xc]
// 0050c3bb: CMP EDX,ECX
// 0050c3bd: JNZ 0x0050c3c1
//   XREF to: 0050c3c1 (CONDITIONAL_JUMP)
// 0050c3bf: POP EBX
// 0050c3c0: RET
// 0050c3c1: MOV EBX,dword ptr [ECX]
//   Label: LAB_0050c3c1
// 0050c3c3: MOV dword ptr [EDX],EBX
// 0050c3c5: MOV EBX,dword ptr [ECX + 0x4]
// 0050c3c8: MOV dword ptr [EDX + 0x4],EBX
// 0050c3cb: MOV EBX,dword ptr [ECX + 0x8]
// 0050c3ce: MOV dword ptr [EDX + 0x8],EBX
// 0050c3d1: POP EBX
// 0050c3d2: RET
