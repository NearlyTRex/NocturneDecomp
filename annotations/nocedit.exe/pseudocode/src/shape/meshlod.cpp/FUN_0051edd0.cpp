// Name: shape_meshlod.cpp_FUN_0051edd0
// Address: 0051edd0
// Address Range: [[0051edd0, 0051edee]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051edd0()

#include "nocturne.h"

void shape_meshlod_cpp_FUN_0051edd0(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000004 / *in_stack_00000008;
  in_stack_00000004[1] = in_stack_00000004[1] / *in_stack_00000008;
  in_stack_00000004[2] = in_stack_00000004[2] / *in_stack_00000008;
  return;
}


// Assembly code:
// 0051edd0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_meshlod.cpp_FUN_0051edd0
//   XREF to: Stack[0x4] (READ)
// 0051edd4: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0051edd8: FLD float ptr [EDX]
// 0051edda: FDIVR float ptr [EAX]
// 0051eddc: FSTP float ptr [EAX]
// 0051edde: FLD float ptr [EDX]
// 0051ede0: FDIVR float ptr [EAX + 0x4]
// 0051ede3: FSTP float ptr [EAX + 0x4]
// 0051ede6: FLD float ptr [EDX]
// 0051ede8: FDIVR float ptr [EAX + 0x8]
// 0051edeb: FSTP float ptr [EAX + 0x8]
// 0051edee: RET
