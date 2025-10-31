// Name: crt_math.c_mul64_FUN_0060b2b8
// Address: 0060b2b8
// Address Range: [[0060b2b8, 0060b2d3]]
// Convention: __watcallRegister
// Signature: ulonglong crt_math.c_mul64_FUN_0060b2b8(uint low1, uint high1, uint low2, uint high2)
// Cross-references:
//   crt_stdio.c_scanf_integer_FUN_0060547c (0060547c) at 00605643 [UNCONDITIONAL_CALL]

#include "nocturne.h"

ulonglong crt_math_c_mul64_FUN_0060b2b8(uint low1,uint high1,uint low2,uint high2)

{
  if ((high1 == 0) && (high2 == 0)) {
    return (ulonglong)low1 * (ulonglong)low2;
  }
  return CONCAT44((int)((ulonglong)low1 * (ulonglong)low2 >> 0x20) + low1 * high2 + high1 * low2,
                  (int)((ulonglong)low1 * (ulonglong)low2));
}


// Assembly code:
// 0060b2b8: TEST EDX,EDX
//   Label: crt_math.c_mul64_FUN_0060b2b8
// 0060b2ba: JNZ 0x0060b2c3
//   XREF to: 0060b2c3 (CONDITIONAL_JUMP)
// 0060b2bc: TEST ECX,ECX
// 0060b2be: JNZ 0x0060b2c3
//   XREF to: 0060b2c3 (CONDITIONAL_JUMP)
// 0060b2c0: MUL EBX
// 0060b2c2: RET
// 0060b2c3: PUSH EAX
//   Label: LAB_0060b2c3
// 0060b2c4: PUSH EDX
// 0060b2c5: MUL ECX
// 0060b2c7: MOV ECX,EAX
// 0060b2c9: POP EAX
// 0060b2ca: MUL EBX
// 0060b2cc: ADD ECX,EAX
// 0060b2ce: POP EAX
// 0060b2cf: MUL EBX
// 0060b2d1: ADD EDX,ECX
// 0060b2d3: RET
