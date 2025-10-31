// Name: core_stairs.cpp_FUN_005ba570
// Address: 005ba570
// Address Range: [[005ba570, 005ba581]]
// Convention: unknown
// Signature: undefined core_stairs.cpp_FUN_005ba570()

#include "nocturne.h"

/* Signature: undefined1 actors_other_stairs.cpp_FUN_005ba570(undefined1 param_1, undefined4
   param_2) */

undefined4 core_stairs_cpp_FUN_005ba570(void)

{
  int *in_stack_00000008;
  
  if (*in_stack_00000008 != 0) {
    return 0;
  }
  return 3;
}


// Assembly code:
// 005ba570: MOV EAX,dword ptr [ESP + 0x8]
//   Label: core_stairs.cpp_FUN_005ba570
//   XREF to: Stack[0x8] (READ)
// 005ba574: CMP dword ptr [EAX],0x0
// 005ba577: JZ 0x005ba57c
//   XREF to: 005ba57c (CONDITIONAL_JUMP)
// 005ba579: XOR EAX,EAX
// 005ba57b: RET
// 005ba57c: MOV EAX,0x3
//   Label: LAB_005ba57c
// 005ba581: RET
