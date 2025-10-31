// Name: crt_math.c_integer_power_FUN_005ffeb2
// Address: 005ffeb2
// Address Range: [[005ffeb2, 005ffed4]]
// Convention: __cdecl
// Signature: float10 crt_math.c_integer_power_FUN_005ffeb2(float10 base, ushort exponent)
// Cross-references:
//   crt_math.c_pow_FUN_005ffd76 (005ffd76) at 005ffe40 [UNCONDITIONAL_CALL]

#include "nocturne.h"

float10 __cdecl crt_math_c_integer_power_FUN_005ffeb2(float10 base,ushort exponent)

{
  ushort uVar1;
  ushort in_AX;
  bool bVar2;
  bool bVar3;
  float10 in_ST0;
  float10 fVar4;
  
  while( true ) {
    bVar2 = (in_AX & 1) != 0;
    in_AX = in_AX >> 1;
    bVar3 = in_AX == 0;
    if (bVar2 || bVar3) break;
    in_ST0 = in_ST0 * in_ST0;
  }
  fVar4 = in_ST0;
  if (bVar2) {
    while (!bVar3) {
      in_ST0 = in_ST0 * in_ST0;
      uVar1 = in_AX & 1;
      in_AX = in_AX >> 1;
      bVar3 = in_AX == 0;
      if (uVar1 != 0) {
        fVar4 = fVar4 * in_ST0;
      }
    }
  }
  else {
    fVar4 = (float10)1;
  }
  return fVar4;
}


// Assembly code:
// 005ffeb2: SHR AX,0x1
//   Label: crt_math.c_integer_power_FUN_005ffeb2
// 005ffeb5: JBE 0x005ffebb
//   XREF to: 005ffebb (CONDITIONAL_JUMP)
// 005ffeb7: FMUL ST0
// 005ffeb9: JMP 0x005ffeb2
//   XREF to: 005ffeb2 (UNCONDITIONAL_JUMP)
// 005ffebb: JNC 0x005ffed0
//   Label: LAB_005ffebb
//   XREF to: 005ffed0 (CONDITIONAL_JUMP)
// 005ffebd: FLD ST0
// 005ffebf: JZ 0x005ffecc
//   Label: LAB_005ffebf
//   XREF to: 005ffecc (CONDITIONAL_JUMP)
// 005ffec1: FMUL ST0
// 005ffec3: SHR AX,0x1
// 005ffec6: JNC 0x005ffeca
//   XREF to: 005ffeca (CONDITIONAL_JUMP)
// 005ffec8: FMUL ST1
// 005ffeca: JMP 0x005ffebf
//   Label: LAB_005ffeca
//   XREF to: 005ffebf (UNCONDITIONAL_JUMP)
// 005ffecc: FSTP ST0
//   Label: LAB_005ffecc
// 005ffece: JMP 0x005ffed4
//   XREF to: 005ffed4 (UNCONDITIONAL_JUMP)
// 005ffed0: FSTP ST0
//   Label: LAB_005ffed0
// 005ffed2: FLD1
// 005ffed4: RET
//   Label: LAB_005ffed4
