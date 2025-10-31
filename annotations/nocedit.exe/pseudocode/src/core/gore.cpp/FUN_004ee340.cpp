// Name: core_gore.cpp_FUN_004ee340
// Address: 004ee340
// Address Range: [[004ee340, 004ee36c]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ee340()
// Globals:
//   undefined4 DAT_0065f028

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gore_cpp_FUN_004ee340(void)

{
  float *in_stack_00000004;
  int *in_stack_00000008;
  
  *in_stack_00000008 = (int)ROUND(*in_stack_00000004 * _DAT_0065f028);
  in_stack_00000008[1] = (int)ROUND(in_stack_00000004[1] * _DAT_0065f028);
  in_stack_00000008[2] = (int)ROUND(in_stack_00000004[2] * _DAT_0065f028);
  return;
}


// Assembly code:
// 004ee340: PUSH EBX
//   Label: core_gore.cpp_FUN_004ee340
// 004ee341: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004ee345: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004ee349: FLD float ptr [EAX]
// 004ee34b: FMUL float ptr [0x0065f028]
//   XREF to: 0065f028 (READ)
// 004ee351: FISTP dword ptr [EBX]
// 004ee353: FLD float ptr [EAX + 0x4]
// 004ee356: FMUL float ptr [0x0065f028]
//   XREF to: 0065f028 (READ)
// 004ee35c: FISTP dword ptr [EBX + 0x4]
// 004ee35f: FLD float ptr [EAX + 0x8]
// 004ee362: FMUL float ptr [0x0065f028]
//   XREF to: 0065f028 (READ)
// 004ee368: FISTP dword ptr [EBX + 0x8]
// 004ee36b: POP EBX
// 004ee36c: RET
