// Name: core_frankgen.cpp_FUN_004d1ec0
// Address: 004d1ec0
// Address Range: [[004d1ec0, 004d1f1b]]
// Convention: unknown
// Signature: undefined core_frankgen.cpp_FUN_004d1ec0()
// Cross-references:
//   core_frankgen.cpp_PlaySounds_FUN_004d1a40 (004d1a40) at 004d1b0c [UNCONDITIONAL_CALL]
// Function calls:
//   crt_math.c_floor_FUN_005feb90
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

/* Signature: undefined1 actors_other_frankgen.cpp_FUN_004d1ec0(undefined4 param_1, undefined4
   param_2, undefined4 param_3) */

void core_frankgen_cpp_FUN_004d1ec0(void)

{
  undefined4 extraout_EAX;
  undefined4 extraout_EDX;
  float10 in_ST0;
  float10 fVar1;
  int in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  
  *(float *)(in_stack_00000004 + 0x48c) =
       in_stack_00000008 * in_stack_0000000c + *(float *)(in_stack_00000004 + 0x48c);
  crt_math_c_floor_FUN_005feb90((double)in_ST0);
  fVar1 = (float10)(double)CONCAT44(extraout_EDX,extraout_EAX);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
  *(float *)(in_stack_00000004 + 0x48c) =
       *(float *)(in_stack_00000004 + 0x48c) - (float)(int)ROUND(fVar1);
  return;
}


// Assembly code:
// 004d1ec0: PUSH EBX
//   Label: core_frankgen.cpp_FUN_004d1ec0
// 004d1ec1: SUB ESP,0x10
// 004d1ec4: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004d1ec8: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 004d1ecc: FMUL float ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 004d1ed0: FADD float ptr [EBX + 0x48c]
// 004d1ed6: SUB ESP,0x8
// 004d1ed9: FST float ptr [EBX + 0x48c]
// 004d1edf: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 004d1ee2: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 004d1ee7: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d1eeb: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x10] (WRITE)
// 004d1eef: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 004d1ef3: ADD ESP,0x8
// 004d1ef6: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004d1efb: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xc] (WRITE)
// 004d1eff: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xc] (READ)
// 004d1f03: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 004d1f07: FILD dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x8] (READ)
// 004d1f0b: FSUBR float ptr [EBX + 0x48c]
// 004d1f11: FSTP float ptr [EBX + 0x48c]
// 004d1f17: ADD ESP,0x10
// 004d1f1a: POP EBX
// 004d1f1b: RET
