// Name: shape_meshlod.cpp_FUN_0051eed0
// Address: 0051eed0
// Address Range: [[0051eed0, 0051eedc]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051eed0()

#include "nocturne.h"

int shape_meshlod_cpp_FUN_0051eed0(void)

{
  int in_stack_00000004;
  
  in_stack_00000004 = in_stack_00000004 + 1;
  if (2 < in_stack_00000004) {
    in_stack_00000004 = 0;
  }
  return in_stack_00000004;
}


// Assembly code:
// 0051eed0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_meshlod.cpp_FUN_0051eed0
//   XREF to: Stack[0x4] (READ)
// 0051eed4: INC EAX
// 0051eed5: CMP EAX,0x3
// 0051eed8: JL 0x0051eedc
//   XREF to: 0051eedc (CONDITIONAL_JUMP)
// 0051eeda: XOR EAX,EAX
// 0051eedc: RET
//   Label: LAB_0051eedc
