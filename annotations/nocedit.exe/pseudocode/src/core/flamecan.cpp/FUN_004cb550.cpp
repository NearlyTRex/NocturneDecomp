// Name: core_flamecan.cpp_FUN_004cb550
// Address: 004cb550
// Address Range: [[004cb550, 004cb57c]]
// Convention: unknown
// Signature: undefined core_flamecan.cpp_FUN_004cb550()
// Function calls:
//   core_flame.cpp_FUN_004ca110

#include "nocturne.h"

/* Signature: undefined1 actors_other_flame.cpp_FUN_004cb550(undefined4 param_1) */

undefined4 core_flamecan_cpp_FUN_004cb550(void)

{
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x5e4) == 0) {
    return *(undefined4 *)(in_stack_00000004 + 0x5e4);
  }
  core_flame_cpp_FUN_004ca110();
  return *(undefined4 *)(in_stack_00000004 + 0x5e4);
}


// Assembly code:
// 004cb550: PUSH EBX
//   Label: core_flamecan.cpp_FUN_004cb550
// 004cb551: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004cb555: CMP dword ptr [EBX + 0x5e4],0x0
// 004cb55c: JNZ 0x004cb566
//   XREF to: 004cb566 (CONDITIONAL_JUMP)
// 004cb55e: MOV EAX,dword ptr [EBX + 0x5e4]
// 004cb564: POP EBX
// 004cb565: RET
// 004cb566: LEA EAX,[EBX + 0x340]
//   Label: LAB_004cb566
// 004cb56c: PUSH EAX
// 004cb56d: CALL core_flame.cpp_FUN_004ca110
//   XREF to: 004ca110 (UNCONDITIONAL_CALL)
// 004cb572: ADD ESP,0x4
// 004cb575: MOV EAX,dword ptr [EBX + 0x5e4]
// 004cb57b: POP EBX
// 004cb57c: RET
