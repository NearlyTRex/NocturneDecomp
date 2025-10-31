// Name: shape_superopt.cpp_FUN_005d3320
// Address: 005d3320
// Address Range: [[005d3320, 005d3340]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d3320()

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d3320(undefined4 param_1, undefined4 param_2) */

int shape_superopt_cpp_FUN_005d3320(void)

{
  uint *in_stack_00000004;
  uint in_stack_00000008;
  
  if (*in_stack_00000004 < in_stack_00000008) {
    return 0;
  }
  return in_stack_00000008 * 0x38 + in_stack_00000004[1];
}


// Assembly code:
// 005d3320: MOV ECX,dword ptr [ESP + 0x4]
//   Label: shape_superopt.cpp_FUN_005d3320
//   XREF to: Stack[0x4] (READ)
// 005d3324: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005d3328: CMP EDX,dword ptr [ECX]
// 005d332a: JBE 0x005d332f
//   XREF to: 005d332f (CONDITIONAL_JUMP)
// 005d332c: XOR EAX,EAX
//   Label: LAB_005d332c
// 005d332e: RET
// 005d332f: SHL EDX,0x3
//   Label: LAB_005d332f
// 005d3332: LEA EAX,[EDX*0x8 + 0x0]
// 005d3339: SUB EAX,EDX
// 005d333b: MOV EDX,dword ptr [ECX + 0x4]
// 005d333e: ADD EAX,EDX
// 005d3340: RET
