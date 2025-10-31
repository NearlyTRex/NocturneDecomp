// Name: core_minecar.cpp_FUN_00520e90
// Address: 00520e90
// Address Range: [[00520e90, 00520eab]]
// Convention: unknown
// Signature: undefined core_minecar.cpp_FUN_00520e90()
// Function calls:
//   core_platfrm.cpp_CPlatform_LoadCourseSomething_FUN_0054ca20

#include "nocturne.h"

/* Signature: undefined1 actors_other_minecar.cpp_FUN_00520e90(undefined4 param_1) */

void core_minecar_cpp_FUN_00520e90(void)

{
  int in_stack_00000008;
  
  core_platfrm_cpp_CPlatform_LoadCourseSomething_FUN_0054ca20();
  *(undefined4 *)(in_stack_00000008 + 0x72c) = 0;
  return;
}


// Assembly code:
// 00520e90: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_minecar.cpp_FUN_00520e90
//   XREF to: Stack[0x4] (READ)
// 00520e94: PUSH EDX
// 00520e95: CALL core_platfrm.cpp_CPlatform_LoadCourseSomething_FUN_0054ca20
//   XREF to: 0054ca20 (UNCONDITIONAL_CALL)
// 00520e9a: ADD ESP,0x4
// 00520e9d: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 00520ea1: MOV dword ptr [EAX + 0x72c],0x0
// 00520eab: RET
