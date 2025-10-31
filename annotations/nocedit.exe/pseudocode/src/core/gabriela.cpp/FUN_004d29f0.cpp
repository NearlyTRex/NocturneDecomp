// Name: core_gabriela.cpp_FUN_004d29f0
// Address: 004d29f0
// Address Range: [[004d29f0, 004d2a2d]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d29f0()
// Cross-references:
//   core_gabriela.cpp_FUN_004d4d80 (004d4d80) at 004d516a [DATA]
// Globals:
//   double DOUBLE_0062ac7d = 0.950000000000000
//   double DOUBLE_0062ac85 = 0.900000000000000

#include "nocturne.h"

/* Signature: undefined1 actors_hero_gabriella.cpp_FUN_004d29f0(undefined1 param_1, undefined1
   param_2, undefined4 param_3, undefined4 param_4) */

float core_gabriela_cpp_FUN_004d29f0(void)

{
  float fVar1;
  float in_stack_0000000c;
  int in_stack_00000010;
  
  if (in_stack_00000010 < 1) {
    fVar1 = (float)DOUBLE_0062ac85;
  }
  else {
    if (in_stack_00000010 != 1) {
      return in_stack_0000000c;
    }
    fVar1 = (float)DOUBLE_0062ac7d;
  }
  return in_stack_0000000c * fVar1;
}


// Assembly code:
// 004d29f0: SUB ESP,0x4
//   Label: core_gabriela.cpp_FUN_004d29f0
// 004d29f3: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 004d29f7: TEST EAX,EAX
// 004d29f9: JLE 0x004d2a14
//   XREF to: 004d2a14 (CONDITIONAL_JUMP)
// 004d29fb: CMP EAX,0x1
// 004d29fe: JNZ 0x004d2a20
//   XREF to: 004d2a20 (CONDITIONAL_JUMP)
// 004d2a00: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 004d2a04: FMUL double ptr [0x0062ac7d]
//   XREF to: 0062ac7d (READ)
// 004d2a0a: FSTP float ptr [ESP]
//   Label: LAB_004d2a0a
//   XREF to: Stack[-0x4] (DATA)
// 004d2a0d: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 004d2a10: ADD ESP,0x4
// 004d2a13: RET
// 004d2a14: FLD float ptr [ESP + 0x10]
//   Label: LAB_004d2a14
//   XREF to: Stack[0xc] (READ)
// 004d2a18: FMUL double ptr [0x0062ac85]
//   XREF to: 0062ac85 (READ)
// 004d2a1e: JMP 0x004d2a0a
//   XREF to: 004d2a0a (UNCONDITIONAL_JUMP)
// 004d2a20: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_004d2a20
//   XREF to: Stack[0xc] (READ)
// 004d2a24: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x4] (DATA)
// 004d2a27: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 004d2a2a: ADD ESP,0x4
// 004d2a2d: RET
