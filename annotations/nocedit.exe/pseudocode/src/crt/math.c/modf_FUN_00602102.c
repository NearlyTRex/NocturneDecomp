// Name: crt_math.c_modf_FUN_00602102
// Address: 00602102
// Address Range: [[00602102, 00602121]]
// Convention: __watcallStack
// Signature: double crt_math.c_modf_FUN_00602102(double value, double * integer_part)
// Cross-references:
//   crt_math.c_floor_FUN_005feb90 (005feb90) at 005feba3 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0 (005304f0) at 00530788 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_FUN_00530400 (00530400) at 00530471 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

double __watcallStack crt_math_c_modf_FUN_00602102(double value,double *integer_part)

{
  undefined4 in_EAX;
  undefined4 in_EDX;
  float10 in_ST0;
  float10 fVar1;
  double *in_stack_00000010;
  
  fVar1 = (float10)value;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_EDX,in_EAX));
  *in_stack_00000010 = (double)fVar1;
  return (double)in_ST0;
}


// Assembly code:
// 00602102: PUSH EAX
//   Label: crt_math.c_modf_FUN_00602102
// 00602103: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00602107: FLD ST0
// 00602109: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0060210e: FSUB ST1,ST0
// 00602110: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00602114: FSTP double ptr [EAX]
// 00602116: POP EAX
// 00602117: SUB ESP,0x8
// 0060211a: FSTP double ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 0060211d: WAIT
// 0060211e: POP EAX
// 0060211f: POP EDX
// 00602120: WAIT
// 00602121: RET
