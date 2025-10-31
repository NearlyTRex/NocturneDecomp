// Name: crt_math.c_exp_FUN_006068e2
// Address: 006068e2
// Address Range: [[006068e2, 0060694a]]
// Convention: __watcallRegister
// Signature: float10 crt_math.c_exp_FUN_006068e2(float10 x)
// Cross-references:
//   crt_math.c_pow_FUN_005ffd76 (005ffd76) at 005ffe94 [UNCONDITIONAL_CALL]
// Globals:
//   float10 g_ExpUnderflowLimit = 1.595618312253977202E-468
//   undefined4 g_ExpUnderflowLimit+8
// Function calls:
//   crt_math.c_handle_math_error_FUN_0060c02b

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 crt_math_c_exp_FUN_006068e2(float10 x)

{
  char in_AL;
  float10 fVar1;
  float10 fVar2;
  double dVar3;
  
  if ((float10)g_ExpUnderflowLimit._0_8_ < x) {
    if (in_AL != '\a') {
      dVar3 = crt_math_c_handle_math_error_FUN_0060c02b();
      x = (float10)dVar3;
    }
    return x;
  }
  if ((float10)ram0x0068506c < x) {
    fVar1 = ROUND((float10)1.4426950408889634 * x);
    fVar2 = (float10)f2xm1((float10)1.4426950408889634 * x - fVar1);
    fVar1 = (float10)fscale((float10)1 + fVar2,fVar1);
  }
  else {
    fVar1 = (float10)0;
  }
  return fVar1;
}


// Assembly code:
// 006068e2: PUSH EBP
//   Label: crt_math.c_exp_FUN_006068e2
// 006068e3: MOV EBP,ESP
// 006068e5: SUB ESP,0x10
// 006068e8: FCOM double ptr [0x00685064]
//   XREF to: 00685064 (READ)
// 006068ee: FSTSW word ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (WRITE)
// 006068f2: WAIT
// 006068f3: MOV AH,byte ptr [EBP + -0xf]
//   XREF to: Stack[-0x13] (READ)
// 006068f6: SAHF
// 006068f7: JBE 0x0060691a
//   XREF to: 0060691a (CONDITIONAL_JUMP)
// 006068f9: CMP AL,0x7
// 006068fb: JZ 0x00606914
//   XREF to: 00606914 (CONDITIONAL_JUMP)
// 006068fd: FSTP double ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (WRITE)
// 00606900: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 00606903: MOV dword ptr [EBP + -0x4],EDX
//   XREF to: Stack[-0x8] (WRITE)
// 00606906: CALL crt_math.c_handle_math_error_FUN_0060c02b
//   XREF to: 0060c02b (UNCONDITIONAL_CALL)
// 0060690b: PUSH EDX
// 0060690c: PUSH EAX
// 0060690d: FLD double ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00606910: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x8] (READ)
// 00606913: WAIT
// 00606914: MOV AL,0x1
//   Label: LAB_00606914
// 00606916: MOV ESP,EBP
// 00606918: POP EBP
// 00606919: RET
// 0060691a: FCOM double ptr [0x0068506c]
//   Label: LAB_0060691a
//   XREF to: 0068506c (READ)
// 00606920: FSTSW word ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (WRITE)
// 00606924: WAIT
// 00606925: MOV AH,byte ptr [EBP + -0xf]
//   XREF to: Stack[-0x13] (READ)
// 00606928: SAHF
// 00606929: JA 0x0060692f
//   XREF to: 0060692f (CONDITIONAL_JUMP)
// 0060692b: FLDZ
// 0060692d: JMP 0x00606943
//   XREF to: 00606943 (UNCONDITIONAL_JUMP)
// 0060692f: FLDL2E
//   Label: LAB_0060692f
// 00606931: FMULP
// 00606933: FLD ST0
// 00606935: FRNDINT
// 00606937: FXCH
// 00606939: FSUB ST0,ST1
// 0060693b: F2XM1
// 0060693d: FLD1
// 0060693f: FADDP
// 00606941: FSCALE
// 00606943: FSTP ST1
//   Label: LAB_00606943
// 00606945: MOV AL,0x0
// 00606947: MOV ESP,EBP
// 00606949: POP EBP
// 0060694a: RET
