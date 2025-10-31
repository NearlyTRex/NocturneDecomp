// Name: shape_superopt.cpp_FUN_005d22d0
// Address: 005d22d0
// Address Range: [[005d22d0, 005d231b]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d22d0()
// Cross-references:
//   shape_superopt.cpp_FUN_005d2230 (005d2230) at 005d2250 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_TriListSomething_FUN_005d77a0 (005d77a0) at 005d789a [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d22d0(undefined4 param_1) */

undefined4 shape_superopt_cpp_FUN_005d22d0(void)

{
  int iVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  (**(code **)(*(int *)(in_stack_00000004 + 0x18) + 0x1c))();
  if (in_stack_00000008 != 0) {
    iVar1 = (**(code **)(*(int *)(in_stack_00000004 + 0x18) + 0xc))();
    if (iVar1 == 0) {
      return 0;
    }
  }
  if (in_stack_0000000c != 0) {
    iVar1 = (**(code **)(*(int *)(in_stack_00000004 + 0x18) + 0x14))();
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}


// Assembly code:
// 005d22d0: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005d22d0
// 005d22d1: PUSH ESI
// 005d22d2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005d22d6: PUSH EBX
// 005d22d7: MOV EAX,dword ptr [EBX + 0x18]
// 005d22da: CALL dword ptr [EAX + 0x1c]
// 005d22dd: ADD ESP,0x4
// 005d22e0: MOV EDX,dword ptr [ESP + 0x10]
// 005d22e4: TEST EDX,EDX
// 005d22e6: JNZ 0x005d22f8
//   XREF to: 005d22f8 (CONDITIONAL_JUMP)
// 005d22e8: MOV ESI,dword ptr [ESP + 0x14]
//   Label: LAB_005d22e8
// 005d22ec: TEST ESI,ESI
// 005d22ee: JNZ 0x005d230a
//   XREF to: 005d230a (CONDITIONAL_JUMP)
// 005d22f0: MOV EAX,0x1
//   Label: LAB_005d22f0
// 005d22f5: POP ESI
// 005d22f6: POP EBX
// 005d22f7: RET
// 005d22f8: PUSH EDX
//   Label: LAB_005d22f8
// 005d22f9: MOV EAX,dword ptr [EBX + 0x18]
// 005d22fc: PUSH EBX
// 005d22fd: CALL dword ptr [EAX + 0xc]
// 005d2300: ADD ESP,0x8
// 005d2303: TEST EAX,EAX
// 005d2305: JNZ 0x005d22e8
//   XREF to: 005d22e8 (CONDITIONAL_JUMP)
// 005d2307: POP ESI
// 005d2308: POP EBX
// 005d2309: RET
// 005d230a: PUSH ESI
//   Label: LAB_005d230a
// 005d230b: MOV EAX,dword ptr [EBX + 0x18]
// 005d230e: PUSH EBX
// 005d230f: CALL dword ptr [EAX + 0x14]
// 005d2312: ADD ESP,0x8
// 005d2315: TEST EAX,EAX
// 005d2317: JNZ 0x005d22f0
//   XREF to: 005d22f0 (CONDITIONAL_JUMP)
// 005d2319: POP ESI
// 005d231a: POP EBX
// 005d231b: RET
