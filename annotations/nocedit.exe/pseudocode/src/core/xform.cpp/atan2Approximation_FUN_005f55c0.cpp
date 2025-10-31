// Name: core_xform.cpp_atan2Approximation_FUN_005f55c0
// Address: 005f55c0
// Address Range: [[005f55c0, 005f568d]]
// Convention: __cdecl
// Signature: float core_xform.cpp_atan2Approximation_FUN_005f55c0(double sin_value, double cos_value)
// Globals:
//   double g_Atan2SqrtTwoOverTwo = 0.707000000000000
//   double g_Atan2NegativeSqrtTwoOverTwo = -0.707000000000000
//   double g_Atan2NegativeOne = -1
//   double g_Atan2Pi = 3.14159265359000
//   double g_Atan2NegativePi = -3.14159265359000
//   float g_Atan2TwoPi = 6.283185
//   float g_Atan2NegativeTwoPi = -6.283185
// Function calls:
//   crt_math.c_acos_FUN_00600162
//   crt_math.c_asin_FUN_00600b94

#include "nocturne.h"

float __cdecl core_xform_cpp_atan2Approximation_FUN_005f55c0(double sin_value,double cos_value)

{
  float10 fVar1;
  double dVar2;
  float local_c;
  
  if ((g_Atan2SqrtTwoOverTwo <= sin_value) || (sin_value <= g_Atan2NegativeSqrtTwoOverTwo)) {
    if ((g_Atan2NegativeOne < cos_value) && (cos_value < 1.0)) {
      dVar2 = crt_math_c_acos_FUN_00600162(cos_value);
      local_c = (float)dVar2;
    }
    if (sin_value < 0.0) {
      local_c = -local_c;
    }
  }
  else {
    fVar1 = crt_math_c_asin_FUN_00600b94((float10)sin_value);
    local_c = (float)fVar1;
    if (cos_value < 0.0) {
      local_c = (float)g_Atan2Pi - local_c;
    }
  }
  if (local_c < (float)g_Atan2NegativePi) {
    local_c = local_c + g_Atan2TwoPi;
  }
  if ((float)g_Atan2Pi < local_c) {
    return local_c + g_Atan2NegativeTwoPi;
  }
  return local_c;
}


// Assembly code:
// 005f55c0: PUSH EBP
//   Label: core_xform.cpp_atan2Approximation_FUN_005f55c0
// 005f55c1: MOV EBP,ESP
// 005f55c3: SUB ESP,0x4
// 005f55c6: AND ESP,0xfffffff8
// 005f55c9: FLD double ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005f55cc: FCOMP double ptr [0x006582ed]
//   XREF to: 006582ed (READ)
// 005f55d2: FNSTSW AX
// 005f55d4: SAHF
// 005f55d5: JNC 0x005f5637
//   XREF to: 005f5637 (CONDITIONAL_JUMP)
// 005f55d7: FLD double ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005f55da: FCOMP double ptr [0x006582f5]
//   XREF to: 006582f5 (READ)
// 005f55e0: FNSTSW AX
// 005f55e2: SAHF
// 005f55e3: JBE 0x005f5637
//   XREF to: 005f5637 (CONDITIONAL_JUMP)
// 005f55e5: FLD double ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005f55e8: CALL crt_math.c_asin_FUN_00600b94
//   XREF to: 00600b94 (UNCONDITIONAL_CALL)
// 005f55ed: FLDZ
// 005f55ef: FXCH
// 005f55f1: FSTP float ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 005f55f4: FCOMP double ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 005f55f7: FNSTSW AX
// 005f55f9: SAHF
// 005f55fa: JBE 0x005f5608
//   XREF to: 005f5608 (CONDITIONAL_JUMP)
// 005f55fc: FLD float ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 005f55ff: FSUBR double ptr [0x00658305]
//   XREF to: 00658305 (READ)
// 005f5605: FSTP float ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 005f5608: FLD float ptr [ESP]
//   Label: LAB_005f5608
//   XREF to: Stack[-0xc] (DATA)
// 005f560b: FCOMP double ptr [0x0065830d]
//   XREF to: 0065830d (READ)
// 005f5611: FNSTSW AX
// 005f5613: SAHF
// 005f5614: JNC 0x005f5622
//   XREF to: 005f5622 (CONDITIONAL_JUMP)
// 005f5616: FLD float ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 005f5619: FADD float ptr [0x00658315]
//   XREF to: 00658315 (READ)
// 005f561f: FSTP float ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 005f5622: FLD float ptr [ESP]
//   Label: LAB_005f5622
//   XREF to: Stack[-0xc] (DATA)
// 005f5625: FCOMP double ptr [0x00658305]
//   XREF to: 00658305 (READ)
// 005f562b: FNSTSW AX
// 005f562d: SAHF
// 005f562e: JA 0x005f567b
//   XREF to: 005f567b (CONDITIONAL_JUMP)
// 005f5630: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 005f5633: MOV ESP,EBP
// 005f5635: POP EBP
// 005f5636: RET
// 005f5637: FLD double ptr [EBP + 0x10]
//   Label: LAB_005f5637
//   XREF to: Stack[0xc] (READ)
// 005f563a: FCOMP double ptr [0x006582fd]
//   XREF to: 006582fd (READ)
// 005f5640: FNSTSW AX
// 005f5642: SAHF
// 005f5643: JA 0x005f565d
//   XREF to: 005f565d (CONDITIONAL_JUMP)
// 005f5645: MOV dword ptr [ESP],0x40490fdb
//   XREF to: Stack[-0x8] (DATA)
// 005f564c: FLDZ
//   Label: LAB_005f564c
// 005f564e: FCOMP double ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005f5651: FNSTSW AX
// 005f5653: SAHF
// 005f5654: JBE 0x005f5608
//   XREF to: 005f5608 (CONDITIONAL_JUMP)
// 005f5656: XOR byte ptr [ESP + 0x3],0x80
//   XREF to: Stack[-0x5] (READ_WRITE)
// 005f565b: JMP 0x005f5608
//   XREF to: 005f5608 (UNCONDITIONAL_JUMP)
// 005f565d: FLD1
//   Label: LAB_005f565d
// 005f565f: FCOMP double ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 005f5662: FNSTSW AX
// 005f5664: SAHF
// 005f5665: JA 0x005f566e
//   XREF to: 005f566e (CONDITIONAL_JUMP)
// 005f5667: XOR EDX,EDX
// 005f5669: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x8] (DATA)
// 005f566c: JMP 0x005f564c
//   XREF to: 005f564c (UNCONDITIONAL_JUMP)
// 005f566e: FLD double ptr [EBP + 0x10]
//   Label: LAB_005f566e
//   XREF to: Stack[0xc] (READ)
// 005f5671: CALL crt_math.c_acos_FUN_00600162
//   XREF to: 00600162 (UNCONDITIONAL_CALL)
// 005f5676: FSTP float ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 005f5679: JMP 0x005f564c
//   XREF to: 005f564c (UNCONDITIONAL_JUMP)
// 005f567b: FLD float ptr [ESP]
//   Label: LAB_005f567b
//   XREF to: Stack[-0xc] (DATA)
// 005f567e: FADD float ptr [0x00658319]
//   XREF to: 00658319 (READ)
// 005f5684: FSTP float ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 005f5687: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 005f568a: MOV ESP,EBP
// 005f568c: POP EBP
// 005f568d: RET
