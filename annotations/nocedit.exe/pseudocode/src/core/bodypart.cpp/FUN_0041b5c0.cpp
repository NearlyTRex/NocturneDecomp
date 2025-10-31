// Name: core_bodypart.cpp_FUN_0041b5c0
// Address: 0041b5c0
// Address Range: [[0041b5c0, 0041b615]]
// Convention: unknown
// Signature: undefined core_bodypart.cpp_FUN_0041b5c0()
// Globals:
//   undefined4 DAT_00615b78

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * core_bodypart_cpp_FUN_0041b5c0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *in_stack_00000004;
  float *in_stack_00000008;
  
  fVar5 = _DAT_00615b78;
  fVar1 = in_stack_00000004[1];
  fVar2 = in_stack_00000004[4];
  fVar3 = in_stack_00000004[2];
  fVar4 = in_stack_00000004[5];
  *in_stack_00000008 = (*in_stack_00000004 + in_stack_00000004[3]) * _DAT_00615b78;
  in_stack_00000008[1] = (fVar1 + fVar2) * fVar5;
  in_stack_00000008[2] = fVar5 * (fVar3 + fVar4);
  return in_stack_00000008;
}


// Assembly code:
// 0041b5c0: SUB ESP,0xc
//   Label: core_bodypart.cpp_FUN_0041b5c0
// 0041b5c3: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0041b5c7: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0041b5cb: LEA EAX,[ECX + 0xc]
// 0041b5ce: FLD float ptr [ECX]
// 0041b5d0: FADD float ptr [EAX]
// 0041b5d2: FSTP float ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 0041b5d5: FLD float ptr [ECX + 0x4]
// 0041b5d8: FADD float ptr [EAX + 0x4]
// 0041b5db: FLD float ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 0041b5de: FXCH
// 0041b5e0: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x8] (WRITE)
// 0041b5e4: FLD float ptr [ECX + 0x8]
// 0041b5e7: FADD float ptr [EAX + 0x8]
// 0041b5ea: FXCH
// 0041b5ec: FLD float ptr [0x00615b78]
//   XREF to: 00615b78 (READ)
// 0041b5f2: FXCH
// 0041b5f4: FMUL ST1
// 0041b5f6: FXCH ST2
// 0041b5f8: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x4] (WRITE)
// 0041b5fc: FXCH
// 0041b5fe: FSTP float ptr [EDX]
// 0041b600: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x8] (READ)
// 0041b604: FMUL ST1
// 0041b606: FSTP float ptr [EDX + 0x4]
// 0041b609: FMUL float ptr [ESP + 0x8]
//   XREF to: Stack[-0x4] (READ)
// 0041b60d: MOV EAX,EDX
// 0041b60f: FSTP float ptr [EDX + 0x8]
// 0041b612: ADD ESP,0xc
// 0041b615: RET
