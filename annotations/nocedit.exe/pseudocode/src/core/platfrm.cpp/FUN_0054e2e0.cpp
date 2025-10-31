// Name: core_platfrm.cpp_FUN_0054e2e0
// Address: 0054e2e0
// Address Range: [[0054e2e0, 0054e311]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054e2e0()

#include "nocturne.h"

void core_platfrm_cpp_FUN_0054e2e0(void)

{
  int iVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar1 = in_stack_00000004 + 0x208;
  do {
    while (in_stack_00000008 == *(int *)(in_stack_00000004 + 0x51c)) {
      *(undefined4 *)(in_stack_00000004 + 0x51c) = 0;
      in_stack_00000004 = in_stack_00000004 + 0x34;
      if (in_stack_00000004 == iVar1) {
        return;
      }
    }
    in_stack_00000004 = in_stack_00000004 + 0x34;
  } while (in_stack_00000004 != iVar1);
  return;
}


// Assembly code:
// 0054e2e0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_platfrm.cpp_FUN_0054e2e0
//   XREF to: Stack[0x4] (READ)
// 0054e2e4: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0054e2e8: MOV EAX,EDX
// 0054e2ea: ADD EDX,0x208
// 0054e2f0: CMP ECX,dword ptr [EAX + 0x51c]
//   Label: LAB_0054e2f0
// 0054e2f6: JZ 0x0054e300
//   XREF to: 0054e300 (CONDITIONAL_JUMP)
// 0054e2f8: ADD EAX,0x34
// 0054e2fb: CMP EAX,EDX
// 0054e2fd: JNZ 0x0054e2f0
//   XREF to: 0054e2f0 (CONDITIONAL_JUMP)
// 0054e2ff: RET
// 0054e300: MOV dword ptr [EAX + 0x51c],0x0
//   Label: LAB_0054e300
// 0054e30a: ADD EAX,0x34
// 0054e30d: CMP EAX,EDX
// 0054e30f: JNZ 0x0054e2f0
//   XREF to: 0054e2f0 (CONDITIONAL_JUMP)
// 0054e311: RET
