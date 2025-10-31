// Name: core_conveyor.cpp_FUN_004422f0
// Address: 004422f0
// Address Range: [[004422f0, 00442302]]
// Convention: unknown
// Signature: undefined core_conveyor.cpp_FUN_004422f0()
// Function calls:
//   core_platfrm.cpp_FUN_0054f2a0

#include "nocturne.h"

/* Signature: undefined1 actors_other_conveyor.cpp_FUN_004422f0(undefined4 param_1, undefined4
   param_2) */

void core_conveyor_cpp_FUN_004422f0(void)

{
  core_platfrm_cpp_FUN_0054f2a0();
  return;
}


// Assembly code:
// 004422f0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_conveyor.cpp_FUN_004422f0
//   XREF to: Stack[0x8] (READ)
// 004422f4: PUSH EDX
// 004422f5: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004422f9: PUSH ECX
// 004422fa: CALL core_platfrm.cpp_FUN_0054f2a0
//   XREF to: 0054f2a0 (UNCONDITIONAL_CALL)
// 004422ff: ADD ESP,0x8
// 00442302: RET
