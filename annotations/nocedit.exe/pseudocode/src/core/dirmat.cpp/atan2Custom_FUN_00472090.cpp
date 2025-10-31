// Name: core_dirmat.cpp_atan2Custom_FUN_00472090
// Address: 00472090
// Address Range: [[00472090, 0047215d]]
// Convention: __cdecl
// Signature: float core_dirmat.cpp_atan2Custom_FUN_00472090(double y, double x)
// Globals:
//   double g_Atan2SinCosThreshold = 0.707000000000000
//   double g_Atan2SinCosThresholdNeg = -0.707000000000000
//   double g_Atan2NegativeOne = -1
//   double g_Atan2Pi = 3.14159265359000
//   double g_Atan2NegativePi = -3.14159265359000
//   float g_Atan2TwoPi = 6.283185
//   float g_Atan2NegativeTwoPi = -6.283185
// Function calls:
//   crt_math.c_acos_FUN_00600162
//   crt_math.c_asin_FUN_00600b94

#include "nocturne.h"

float __cdecl core_dirmat_cpp_atan2Custom_FUN_00472090(double y,double x)

{
  float10 fVar1;
  double dVar2;
  float local_c;
  
  if ((g_Atan2SinCosThreshold <= y) || (y <= g_Atan2SinCosThresholdNeg)) {
    if ((g_Atan2NegativeOne < x) && (x < 1.0)) {
      dVar2 = crt_math_c_acos_FUN_00600162(x);
      local_c = (float)dVar2;
    }
    if (y < 0.0) {
      local_c = -local_c;
    }
  }
  else {
    fVar1 = crt_math_c_asin_FUN_00600b94((float10)y);
    local_c = (float)fVar1;
    if (x < 0.0) {
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
// 00472090: PUSH EBP
//   Label: core_dirmat.cpp_atan2Custom_FUN_00472090
// 00472091: MOV EBP,ESP
// 00472093: SUB ESP,0x4
// 00472096: AND ESP,0xfffffff8
// 00472099: FLD double ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0047209c: FCOMP double ptr [0x0061edeb]
//   XREF to: 0061edeb (READ)
// 004720a2: FNSTSW AX
// 004720a4: SAHF
// 004720a5: JNC 0x00472107
//   XREF to: 00472107 (CONDITIONAL_JUMP)
// 004720a7: FLD double ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004720aa: FCOMP double ptr [0x0061edf3]
//   XREF to: 0061edf3 (READ)
// 004720b0: FNSTSW AX
// 004720b2: SAHF
// 004720b3: JBE 0x00472107
//   XREF to: 00472107 (CONDITIONAL_JUMP)
// 004720b5: FLD double ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004720b8: CALL crt_math.c_asin_FUN_00600b94
//   XREF to: 00600b94 (UNCONDITIONAL_CALL)
// 004720bd: FLDZ
// 004720bf: FXCH
// 004720c1: FSTP float ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 004720c4: FCOMP double ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 004720c7: FNSTSW AX
// 004720c9: SAHF
// 004720ca: JBE 0x004720d8
//   XREF to: 004720d8 (CONDITIONAL_JUMP)
// 004720cc: FLD float ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 004720cf: FSUBR double ptr [0x0061ee03]
//   XREF to: 0061ee03 (READ)
// 004720d5: FSTP float ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 004720d8: FLD float ptr [ESP]
//   Label: LAB_004720d8
//   XREF to: Stack[-0xc] (DATA)
// 004720db: FCOMP double ptr [0x0061ee0b]
//   XREF to: 0061ee0b (READ)
// 004720e1: FNSTSW AX
// 004720e3: SAHF
// 004720e4: JNC 0x004720f2
//   XREF to: 004720f2 (CONDITIONAL_JUMP)
// 004720e6: FLD float ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 004720e9: FADD float ptr [0x0061ee13]
//   XREF to: 0061ee13 (READ)
// 004720ef: FSTP float ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 004720f2: FLD float ptr [ESP]
//   Label: LAB_004720f2
//   XREF to: Stack[-0xc] (DATA)
// 004720f5: FCOMP double ptr [0x0061ee03]
//   XREF to: 0061ee03 (READ)
// 004720fb: FNSTSW AX
// 004720fd: SAHF
// 004720fe: JA 0x0047214b
//   XREF to: 0047214b (CONDITIONAL_JUMP)
// 00472100: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 00472103: MOV ESP,EBP
// 00472105: POP EBP
// 00472106: RET
// 00472107: FLD double ptr [EBP + 0x10]
//   Label: LAB_00472107
//   XREF to: Stack[0xc] (READ)
// 0047210a: FCOMP double ptr [0x0061edfb]
//   XREF to: 0061edfb (READ)
// 00472110: FNSTSW AX
// 00472112: SAHF
// 00472113: JA 0x0047212d
//   XREF to: 0047212d (CONDITIONAL_JUMP)
// 00472115: MOV dword ptr [ESP],0x40490fdb
//   XREF to: Stack[-0x8] (DATA)
// 0047211c: FLDZ
//   Label: LAB_0047211c
// 0047211e: FCOMP double ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00472121: FNSTSW AX
// 00472123: SAHF
// 00472124: JBE 0x004720d8
//   XREF to: 004720d8 (CONDITIONAL_JUMP)
// 00472126: XOR byte ptr [ESP + 0x3],0x80
//   XREF to: Stack[-0x5] (READ_WRITE)
// 0047212b: JMP 0x004720d8
//   XREF to: 004720d8 (UNCONDITIONAL_JUMP)
// 0047212d: FLD1
//   Label: LAB_0047212d
// 0047212f: FCOMP double ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00472132: FNSTSW AX
// 00472134: SAHF
// 00472135: JA 0x0047213e
//   XREF to: 0047213e (CONDITIONAL_JUMP)
// 00472137: XOR EDX,EDX
// 00472139: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x8] (DATA)
// 0047213c: JMP 0x0047211c
//   XREF to: 0047211c (UNCONDITIONAL_JUMP)
// 0047213e: FLD double ptr [EBP + 0x10]
//   Label: LAB_0047213e
//   XREF to: Stack[0xc] (READ)
// 00472141: CALL crt_math.c_acos_FUN_00600162
//   XREF to: 00600162 (UNCONDITIONAL_CALL)
// 00472146: FSTP float ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 00472149: JMP 0x0047211c
//   XREF to: 0047211c (UNCONDITIONAL_JUMP)
// 0047214b: FLD float ptr [ESP]
//   Label: LAB_0047214b
//   XREF to: Stack[-0xc] (DATA)
// 0047214e: FADD float ptr [0x0061ee17]
//   XREF to: 0061ee17 (READ)
// 00472154: FSTP float ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 00472157: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 0047215a: MOV ESP,EBP
// 0047215c: POP EBP
// 0047215d: RET
