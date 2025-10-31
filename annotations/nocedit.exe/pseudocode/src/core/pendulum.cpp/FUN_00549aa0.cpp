// Name: core_pendulum.cpp_FUN_00549aa0
// Address: 00549aa0
// Address Range: [[00549aa0, 00549b82]]
// Convention: unknown
// Signature: undefined core_pendulum.cpp_FUN_00549aa0()
// Globals:
//   double DOUBLE_0063eca1 = -0.5
//   double DOUBLE_0063eca9 = 0.5
//   float FLOAT_0063ecb1 = -1

#include "nocturne.h"

bool core_pendulum_cpp_FUN_00549aa0(void)

{
  float in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  
  if (in_stack_00000008 < in_stack_00000004 + (float)DOUBLE_0063eca1) {
    in_stack_00000008 = in_stack_00000008 + 1.0;
  }
  if (in_stack_00000004 + (float)DOUBLE_0063eca9 < in_stack_00000008) {
    in_stack_00000008 = in_stack_00000008 + FLOAT_0063ecb1;
  }
  if (in_stack_00000008 <= in_stack_00000004) {
    if (in_stack_0000000c < in_stack_00000008) {
      in_stack_0000000c = in_stack_0000000c + 1.0;
    }
    if (in_stack_0000000c < in_stack_00000008) {
      in_stack_0000000c = in_stack_0000000c + 1.0;
    }
    if (in_stack_00000008 + 1.0 < in_stack_0000000c) {
      in_stack_0000000c = in_stack_0000000c + FLOAT_0063ecb1;
    }
    if (in_stack_00000008 + 1.0 < in_stack_0000000c) {
      in_stack_0000000c = in_stack_0000000c + FLOAT_0063ecb1;
    }
    return in_stack_00000004 < in_stack_0000000c;
  }
  return false;
}


// Assembly code:
// 00549aa0: FLD float ptr [ESP + 0x4]
//   Label: core_pendulum.cpp_FUN_00549aa0
//   XREF to: Stack[0x4] (READ)
// 00549aa4: FADD double ptr [0x0063eca1]
//   XREF to: 0063eca1 (READ)
// 00549aaa: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00549aae: FCOMPP
// 00549ab0: FNSTSW AX
// 00549ab2: SAHF
// 00549ab3: JC 0x00549b71
//   XREF to: 00549b71 (CONDITIONAL_JUMP)
// 00549ab9: FLD float ptr [ESP + 0x4]
//   Label: LAB_00549ab9
//   XREF to: Stack[0x4] (READ)
// 00549abd: FADD double ptr [0x0063eca9]
//   XREF to: 0063eca9 (READ)
// 00549ac3: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00549ac7: FCOMPP
// 00549ac9: FNSTSW AX
// 00549acb: SAHF
// 00549acc: JBE 0x00549adc
//   XREF to: 00549adc (CONDITIONAL_JUMP)
// 00549ace: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00549ad2: FADD float ptr [0x0063ecb1]
//   XREF to: 0063ecb1 (READ)
// 00549ad8: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (WRITE)
// 00549adc: FLD float ptr [ESP + 0x8]
//   Label: LAB_00549adc
//   XREF to: Stack[0x8] (READ)
// 00549ae0: FCOMP float ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 00549ae4: FNSTSW AX
// 00549ae6: SAHF
// 00549ae7: JA 0x00549b80
//   XREF to: 00549b80 (CONDITIONAL_JUMP)
// 00549aed: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 00549af1: FCOMP float ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00549af5: FNSTSW AX
// 00549af7: SAHF
// 00549af8: JNC 0x00549b04
//   XREF to: 00549b04 (CONDITIONAL_JUMP)
// 00549afa: FLD1
// 00549afc: FADD float ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 00549b00: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (WRITE)
// 00549b04: FLD float ptr [ESP + 0xc]
//   Label: LAB_00549b04
//   XREF to: Stack[0xc] (READ)
// 00549b08: FCOMP float ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00549b0c: FNSTSW AX
// 00549b0e: SAHF
// 00549b0f: JNC 0x00549b1b
//   XREF to: 00549b1b (CONDITIONAL_JUMP)
// 00549b11: FLD1
// 00549b13: FADD float ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 00549b17: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (WRITE)
// 00549b1b: FLD float ptr [ESP + 0x8]
//   Label: LAB_00549b1b
//   XREF to: Stack[0x8] (READ)
// 00549b1f: FLD1
// 00549b21: FADDP
// 00549b23: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 00549b27: FCOMPP
// 00549b29: FNSTSW AX
// 00549b2b: SAHF
// 00549b2c: JBE 0x00549b3c
//   XREF to: 00549b3c (CONDITIONAL_JUMP)
// 00549b2e: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 00549b32: FADD float ptr [0x0063ecb1]
//   XREF to: 0063ecb1 (READ)
// 00549b38: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (WRITE)
// 00549b3c: FLD float ptr [ESP + 0x8]
//   Label: LAB_00549b3c
//   XREF to: Stack[0x8] (READ)
// 00549b40: FLD1
// 00549b42: FADDP
// 00549b44: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 00549b48: FCOMPP
// 00549b4a: FNSTSW AX
// 00549b4c: SAHF
// 00549b4d: JBE 0x00549b5d
//   XREF to: 00549b5d (CONDITIONAL_JUMP)
// 00549b4f: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 00549b53: FADD float ptr [0x0063ecb1]
//   XREF to: 0063ecb1 (READ)
// 00549b59: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (WRITE)
// 00549b5d: FLD float ptr [ESP + 0xc]
//   Label: LAB_00549b5d
//   XREF to: Stack[0xc] (READ)
// 00549b61: FCOMP float ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 00549b65: FNSTSW AX
// 00549b67: SAHF
// 00549b68: SETA AL
// 00549b6b: AND EAX,0xff
// 00549b70: RET
// 00549b71: FLD1
//   Label: LAB_00549b71
// 00549b73: FADD float ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00549b77: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (WRITE)
// 00549b7b: JMP 0x00549ab9
//   XREF to: 00549ab9 (UNCONDITIONAL_JUMP)
// 00549b80: XOR EAX,EAX
//   Label: LAB_00549b80
// 00549b82: RET
