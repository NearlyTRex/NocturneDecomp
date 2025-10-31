// Name: crt_math.c_sqrt_FUN_0060710c
// Address: 0060710c
// Address Range: [[0060710c, 00607149]]
// Convention: __fpustack
// Signature: float10 crt_math.c_sqrt_FUN_0060710c(float10 value_to_sqrt, float10 original_value)
// Cross-references:
//   crt_math.c_acos_FUN_00600162 (00600162) at 00600184 [UNCONDITIONAL_CALL]
//   crt_math.c_asin_FUN_00600b94 (00600b94) at 00600b9e [UNCONDITIONAL_CALL]
// Function calls:
//   crt_math.c_handle_math_error_FUN_0060c02b

#include "nocturne.h"

float10 __fpustack crt_math_c_sqrt_FUN_0060710c(float10 value_to_sqrt,float10 original_value)

{
  float10 fVar1;
  double dVar2;
  
  LOCK();
  UNLOCK();
  if ((float10)0 <= value_to_sqrt) {
    fVar1 = SQRT(value_to_sqrt);
  }
  else {
    dVar2 = crt_math_c_handle_math_error_FUN_0060c02b();
    fVar1 = (float10)dVar2;
  }
  return fVar1;
}


// Assembly code:
// 0060710c: PUSH EBP
//   Label: crt_math.c_sqrt_FUN_0060710c
// 0060710d: MOV EBP,ESP
// 0060710f: FTST
// 00607111: SUB ESP,0x10
// 00607114: FSTSW word ptr [EBP + -0x8]
//   XREF to: Stack[-0xc] (WRITE)
// 00607118: WAIT
// 00607119: XCHG word ptr [EBP + -0x8],AX
//   XREF to: Stack[-0xc] (READ_WRITE)
// 0060711d: SAHF
// 0060711e: JNC 0x00607142
//   XREF to: 00607142 (CONDITIONAL_JUMP)
// 00607120: FSTP double ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (WRITE)
// 00607123: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0xc] (READ)
// 00607126: CMP AL,0x3
// 00607128: JZ 0x0060712d
//   XREF to: 0060712d (CONDITIONAL_JUMP)
// 0060712a: FSTP double ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (WRITE)
// 0060712d: MOV dword ptr [EBP + -0x4],EDX
//   Label: LAB_0060712d
//   XREF to: Stack[-0x8] (WRITE)
// 00607130: CALL crt_math.c_handle_math_error_FUN_0060c02b
//   XREF to: 0060c02b (UNCONDITIONAL_CALL)
// 00607135: PUSH EDX
// 00607136: PUSH EAX
// 00607137: FLD double ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 0060713a: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x8] (READ)
// 0060713d: WAIT
// 0060713e: MOV AL,0x1
// 00607140: JMP 0x00607146
//   XREF to: 00607146 (UNCONDITIONAL_JUMP)
// 00607142: FSQRT
//   Label: LAB_00607142
// 00607144: MOV AL,0x0
// 00607146: MOV ESP,EBP
//   Label: LAB_00607146
// 00607148: POP EBP
// 00607149: RET
