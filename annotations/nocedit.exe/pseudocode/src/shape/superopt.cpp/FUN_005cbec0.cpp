// Name: shape_superopt.cpp_FUN_005cbec0
// Address: 005cbec0
// Address Range: [[005cbec0, 005cbed0]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005cbec0()
// Cross-references:
//   shape_superopt.cpp_BonesAndPointsCheck_FUN_005d7e00 (005d7e00) at 005d7e68 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005cbec0(undefined4 param_1, undefined4 param_2) */

undefined4 shape_superopt_cpp_FUN_005cbec0(void)

{
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  *in_stack_00000008 = *(undefined4 *)(in_stack_00000004 + 8);
  return *(undefined4 *)(in_stack_00000004 + 0xc);
}


// Assembly code:
// 005cbec0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: shape_superopt.cpp_FUN_005cbec0
//   XREF to: Stack[0x4] (READ)
// 005cbec4: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005cbec8: MOV EAX,dword ptr [EDX + 0x8]
// 005cbecb: MOV dword ptr [ECX],EAX
// 005cbecd: MOV EAX,dword ptr [EDX + 0xc]
// 005cbed0: RET
