// Name: shape_superopt.cpp_FUN_005d22b0
// Address: 005d22b0
// Address Range: [[005d22b0, 005d22c6]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d22b0()

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d22b0(undefined4 param_1) */

undefined4 shape_superopt_cpp_FUN_005d22b0(void)

{
  int in_stack_00000004;
  
  if ((*(int *)(in_stack_00000004 + 4) != 0) && (*(int *)(in_stack_00000004 + 0xc) != 0)) {
    return *(undefined4 *)(in_stack_00000004 + 0x14);
  }
  return 0;
}


// Assembly code:
// 005d22b0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_superopt.cpp_FUN_005d22b0
//   XREF to: Stack[0x4] (READ)
// 005d22b4: CMP dword ptr [EAX + 0x4],0x0
// 005d22b8: JZ 0x005d22c4
//   XREF to: 005d22c4 (CONDITIONAL_JUMP)
// 005d22ba: CMP dword ptr [EAX + 0xc],0x0
// 005d22be: JZ 0x005d22c4
//   XREF to: 005d22c4 (CONDITIONAL_JUMP)
// 005d22c0: MOV EAX,dword ptr [EAX + 0x14]
// 005d22c3: RET
// 005d22c4: XOR EAX,EAX
//   Label: LAB_005d22c4
// 005d22c6: RET
