// Name: shape_quantize.cpp_getAbsoluteValue_FUN_00556df0
// Address: 00556df0
// Address Range: [[00556df0, 00556dfb]]
// Convention: __cdecl
// Signature: int shape_quantize.cpp_getAbsoluteValue_FUN_00556df0(int value)
// Cross-references:
//   shape_quantize.cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0 (005556f0) at 00555715 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl shape_quantize_cpp_getAbsoluteValue_FUN_00556df0(int value)

{
  if (-1 < value) {
    return value;
  }
  return -value;
}


// Assembly code:
// 00556df0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_quantize.cpp_getAbsoluteValue_FUN_00556df0
//   XREF to: Stack[0x4] (READ)
// 00556df4: TEST EAX,EAX
// 00556df6: JL 0x00556df9
//   XREF to: 00556df9 (CONDITIONAL_JUMP)
// 00556df8: RET
// 00556df9: NEG EAX
//   Label: LAB_00556df9
// 00556dfb: RET
