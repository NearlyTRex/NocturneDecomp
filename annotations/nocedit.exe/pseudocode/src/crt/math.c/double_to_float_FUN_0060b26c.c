// Name: crt_math.c_double_to_float_FUN_0060b26c
// Address: 0060b26c
// Address Range: [[0060b26c, 0060b2b7]]
// Convention: __watcallStack
// Signature: float crt_math.c_double_to_float_FUN_0060b26c(uint double_low, uint double_high)
// Cross-references:
//   crt_stdio.c_scanf_float_FUN_00605178 (00605178) at 00605468 [UNCONDITIONAL_CALL]

#include "nocturne.h"

float __watcallStack crt_math_c_double_to_float_FUN_0060b26c(uint double_low,uint double_high)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((double_high & 0x7ff00000) != 0) {
    uVar1 = (uint)(CARRY4(double_high,double_high) ||
                  CARRY4(double_high * 2,(uint)CARRY4(double_low,double_low))) << 0x1f;
    uVar2 = double_low * 2 + 0x20000000;
    uVar3 = double_high * 2 + (uint)CARRY4(double_low,double_low) +
            (uint)(0xdfffffff < double_low * 2);
    if ((uVar3 == 0) || (0x8fdfffff < uVar3)) {
      return (float)(uVar1 | 0x7f800000);
    }
    if (0x701fffff < uVar3) {
      return (float)(((uVar3 + 0x90000000) * 2 + (uint)CARRY4(uVar2,uVar2)) * 2 +
                     (uint)CARRY4(uVar2 * 2,uVar2 * 2) | uVar1);
    }
  }
  return 0.0;
}


// Assembly code:
// 0060b26c: PUSH EBX
//   Label: crt_math.c_double_to_float_FUN_0060b26c
// 0060b26d: TEST EDX,0x7ff00000
// 0060b273: JZ 0x0060b2b4
//   XREF to: 0060b2b4 (CONDITIONAL_JUMP)
// 0060b275: SUB EBX,EBX
// 0060b277: ADD EAX,EAX
// 0060b279: ADC EDX,EDX
// 0060b27b: RCR EBX,0x1
// 0060b27d: ADD EAX,0x20000000
// 0060b282: ADC EDX,0x0
// 0060b285: JZ 0x0060b2ab
//   XREF to: 0060b2ab (CONDITIONAL_JUMP)
// 0060b287: CMP EDX,0x8fe00000
// 0060b28d: JNC 0x0060b2ab
//   XREF to: 0060b2ab (CONDITIONAL_JUMP)
// 0060b28f: CMP EDX,0x70200000
// 0060b295: JC 0x0060b2b4
//   XREF to: 0060b2b4 (CONDITIONAL_JUMP)
// 0060b297: SUB EDX,0x70000000
// 0060b29d: ADD EAX,EAX
// 0060b29f: ADC EDX,EDX
// 0060b2a1: ADD EAX,EAX
// 0060b2a3: ADC EDX,EDX
// 0060b2a5: OR EDX,EBX
// 0060b2a7: MOV EAX,EDX
// 0060b2a9: POP EBX
// 0060b2aa: RET
// 0060b2ab: MOV EAX,0x7f800000
//   Label: LAB_0060b2ab
// 0060b2b0: OR EAX,EBX
// 0060b2b2: POP EBX
// 0060b2b3: RET
// 0060b2b4: SUB EAX,EAX
//   Label: LAB_0060b2b4
// 0060b2b6: POP EBX
// 0060b2b7: RET
