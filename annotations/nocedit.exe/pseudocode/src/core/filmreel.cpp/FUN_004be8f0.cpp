// Name: core_filmreel.cpp_FUN_004be8f0
// Address: 004be8f0
// Address Range: [[004be8f0, 004be903]]
// Convention: unknown
// Signature: undefined core_filmreel.cpp_FUN_004be8f0()

#include "nocturne.h"

/* Signature: undefined1 actors_other_filmreel.cpp_FUN_004be8f0(undefined4 param_1) */

bool core_filmreel_cpp_FUN_004be8f0(void)

{
  int in_stack_00000004;
  
  return *(int *)(in_stack_00000004 + 0x2d4) == 0;
}


// Assembly code:
// 004be8f0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_filmreel.cpp_FUN_004be8f0
//   XREF to: Stack[0x4] (READ)
// 004be8f4: CMP dword ptr [EAX + 0x2d4],0x0
// 004be8fb: SETZ AL
// 004be8fe: AND EAX,0xff
// 004be903: RET
