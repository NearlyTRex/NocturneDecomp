// Name: crt_math.c_pentiumFdivBugWorkaroundDouble_FUN_00606f98
// Address: 00606f98
// Address Range: [[00606f98, 00606fe3]]
// Convention: __fpustack
// Signature: float10 crt_math.c_pentiumFdivBugWorkaroundDouble_FUN_00606f98(float10 param0, double param1)
// Cross-references:
//   crt_unknown.c_FUN_0060dcf6 (0060dcf6) at 0060dd29 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_math.c_pentiumFdivpWorkaround_FUN_00606f13

#include "nocturne.h"

float10 __fpustack
crt_math_c_pentiumFdivBugWorkaroundDouble_FUN_00606f98(float10 param0,double param1)

{
  ushort in_FPUStatusWord;
  float10 fVar1;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  
  if ((param1._4_4_ & 0x7ff00000) == 0x7ff00000) {
    return param0 / (float10)param1;
  }
  if ((in_FPUStatusWord & 0x3800) != 0) {
    fVar1 = crt_math_c_pentiumFdivpWorkaround_FUN_00606f13(in_ST1,in_ST2);
    return fVar1;
  }
  fVar1 = crt_math_c_pentiumFdivpWorkaround_FUN_00606f13(in_ST2,in_ST3);
  return fVar1;
}


// Assembly code:
// 00606f98: PUSH EAX
//   Label: crt_math.c_pentiumFdivBugWorkaroundDouble_FUN_00606f98
// 00606f99: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00606f9d: AND EAX,0x7ff00000
// 00606fa2: CMP EAX,0x7ff00000
// 00606fa7: JZ 0x00606fdc
//   XREF to: 00606fdc (CONDITIONAL_JUMP)
// 00606fa9: FNSTSW AX
// 00606fab: AND EAX,0x3800
// 00606fb0: JZ 0x00606fbf
//   XREF to: 00606fbf (CONDITIONAL_JUMP)
// 00606fb2: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00606fb6: CALL crt_math.c_pentiumFdivpWorkaround_FUN_00606f13
//   XREF to: 00606f13 (UNCONDITIONAL_CALL)
// 00606fbb: POP EAX
// 00606fbc: RET 0x8
// 00606fbf: FXCH
//   Label: LAB_00606fbf
// 00606fc1: SUB ESP,0xc
// 00606fc4: FSTP extended double ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 00606fc7: FLD double ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00606fcb: CALL crt_math.c_pentiumFdivpWorkaround_FUN_00606f13
//   XREF to: 00606f13 (UNCONDITIONAL_CALL)
// 00606fd0: FLD extended double ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 00606fd3: FXCH
// 00606fd5: ADD ESP,0xc
// 00606fd8: POP EAX
// 00606fd9: RET 0x8
// 00606fdc: FDIV double ptr [ESP + 0x8]
//   Label: LAB_00606fdc
//   XREF to: Stack[0x4] (READ)
// 00606fe0: POP EAX
// 00606fe1: RET 0x8
