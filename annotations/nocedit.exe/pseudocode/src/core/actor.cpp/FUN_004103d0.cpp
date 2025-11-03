// Name: core_actor.cpp_FUN_004103d0
// Address: 004103d0
// Address Range: [[004103d0, 004103fc]]
// Convention: unknown
// Signature: undefined core_actor.cpp_FUN_004103d0()
// Cross-references:
//   core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940 (0040d940) at 0040dc84 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_006597b0 = 256

#include "nocturne.h"

void core_actor_cpp_FUN_004103d0(void)

{
  float *in_stack_00000004;
  int *in_stack_00000008;
  
  *in_stack_00000008 = (int)ROUND(*in_stack_00000004 * FLOAT_006597b0);
  in_stack_00000008[1] = (int)ROUND(in_stack_00000004[1] * FLOAT_006597b0);
  in_stack_00000008[2] = (int)ROUND(in_stack_00000004[2] * FLOAT_006597b0);
  return;
}


// Assembly code:
// 004103d0: PUSH EBX
//   Label: core_actor.cpp_FUN_004103d0
// 004103d1: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004103d5: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004103d9: FLD float ptr [EAX]
// 004103db: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 004103e1: FISTP dword ptr [EBX]
// 004103e3: FLD float ptr [EAX + 0x4]
// 004103e6: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 004103ec: FISTP dword ptr [EBX + 0x4]
// 004103ef: FLD float ptr [EAX + 0x8]
// 004103f2: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 004103f8: FISTP dword ptr [EBX + 0x8]
// 004103fb: POP EBX
// 004103fc: RET
