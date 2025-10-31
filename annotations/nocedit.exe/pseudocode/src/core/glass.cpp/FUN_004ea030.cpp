// Name: core_glass.cpp_FUN_004ea030
// Address: 004ea030
// Address Range: [[004ea030, 004ea083]]
// Convention: unknown
// Signature: undefined core_glass.cpp_FUN_004ea030()
// Globals:
//   double DOUBLE_0062e059 = 0.5
//   double DOUBLE_0062e061 = 0.100000000000000

#include "nocturne.h"

void core_glass_cpp_FUN_004ea030(void)

{
  float fVar1;
  float fVar2;
  int in_stack_00000004;
  float *in_stack_00000008;
  
  fVar1 = *(float *)(in_stack_00000004 + 0x158);
  fVar2 = (float)DOUBLE_0062e059;
  in_stack_00000008[1] = -0.1;
  *in_stack_00000008 = -fVar1 * fVar2;
  in_stack_00000008[2] = -*(float *)(in_stack_00000004 + 0x160) * fVar2;
  in_stack_00000008[3] = *(float *)(in_stack_00000004 + 0x158) * fVar2;
  in_stack_00000008[4] = *(float *)(in_stack_00000004 + 0x15c) + (float)DOUBLE_0062e061;
  in_stack_00000008[5] = fVar2 * *(float *)(in_stack_00000004 + 0x160);
  return;
}


// Assembly code:
// 004ea030: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_glass.cpp_FUN_004ea030
//   XREF to: Stack[0x4] (READ)
// 004ea034: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004ea038: FLD float ptr [EDX + 0x158]
// 004ea03e: FCHS
// 004ea040: FLD double ptr [0x0062e059]
//   XREF to: 0062e059 (READ)
// 004ea046: FXCH
// 004ea048: FMUL ST1
// 004ea04a: MOV dword ptr [EAX + 0x4],0xbdcccccd
// 004ea051: FSTP float ptr [EAX]
// 004ea053: FLD float ptr [EDX + 0x160]
// 004ea059: FCHS
// 004ea05b: FMUL ST1
// 004ea05d: FSTP float ptr [EAX + 0x8]
// 004ea060: FLD float ptr [EDX + 0x158]
// 004ea066: FMUL ST1
// 004ea068: FSTP float ptr [EAX + 0xc]
// 004ea06b: FLD float ptr [EDX + 0x15c]
// 004ea071: FADD double ptr [0x0062e061]
//   XREF to: 0062e061 (READ)
// 004ea077: FSTP float ptr [EAX + 0x10]
// 004ea07a: FMUL float ptr [EDX + 0x160]
// 004ea080: FSTP float ptr [EAX + 0x14]
// 004ea083: RET
