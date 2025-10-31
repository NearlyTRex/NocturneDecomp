// Name: crt_math.c_ieee754_divide_FUN_00606960
// Address: 00606960
// Address Range: [[00606960, 00606a76]]
// Convention: __cdecl
// Signature: float10 crt_math.c_ieee754_divide_FUN_00606960(float10 dividend, float10 divisor)
// Cross-references:
//   crt_math.c_dispatch_divide_FUN_00606aaf (00606aaf) at 00606abc [UNCONDITIONAL_CALL]
//   crt_math.c_pentiumFdivpWorkaround_FUN_00606f13 (00606f13) at 00606f1d [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606ad0 (00606ad0) at 00606ad7 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606aeb (00606aeb) at 00606afa [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606b07 (00606b07) at 00606b0e [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606b17 (00606b17) at 00606b1e [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606b2b (00606b2b) at 00606b32 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606b3b (00606b3b) at 00606b4a [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606b60 (00606b60) at 00606b69 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606b7f (00606b7f) at 00606b90 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606b9f (00606b9f) at 00606ba8 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606bb3 (00606bb3) at 00606bbc [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606bcb (00606bcb) at 00606bd4 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606bdf (00606bdf) at 00606bee [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606c04 (00606c04) at 00606c0d [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606c23 (00606c23) at 00606c34 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606c43 (00606c43) at 00606c4c [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606c57 (00606c57) at 00606c60 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606c6f (00606c6f) at 00606c78 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606c83 (00606c83) at 00606c92 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606ca8 (00606ca8) at 00606cb1 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606cc7 (00606cc7) at 00606cd8 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606ce7 (00606ce7) at 00606cf0 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606cfb (00606cfb) at 00606d04 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606d13 (00606d13) at 00606d1c [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606d27 (00606d27) at 00606d36 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606d4c (00606d4c) at 00606d55 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606d6b (00606d6b) at 00606d7c [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606d8b (00606d8b) at 00606d94 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606d9f (00606d9f) at 00606da8 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606db7 (00606db7) at 00606dc0 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606dcb (00606dcb) at 00606dda [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606df0 (00606df0) at 00606df9 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606e0f (00606e0f) at 00606e20 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606e2f (00606e2f) at 00606e38 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606e43 (00606e43) at 00606e4c [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606e5b (00606e5b) at 00606e64 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606e6f (00606e6f) at 00606e7e [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606e94 (00606e94) at 00606e9d [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606eb3 (00606eb3) at 00606ec4 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606ed3 (00606ed3) at 00606edc [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606ee7 (00606ee7) at 00606ef0 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606eff (00606eff) at 00606f08 [UNCONDITIONAL_CALL]
// Globals:
//   byte[16] g_IEEE754ExponentClassTable
//   float g_IEEE754NormalScaleFactor = 0.9375
//   float g_IEEE754SubnormalScaleFactor = 1.0625
//   float g_IEEE754RenormScaleFactor = 9.223372E+18

#include "nocturne.h"

float10 __cdecl crt_math_c_ieee754_divide_FUN_00606960(float10 dividend,float10 divisor)

{
  float10 fVar1;
  float10 fVar2;
  int in_stack_00000004;
  uint in_stack_00000008;
  ushort in_stack_0000000c;
  undefined4 in_stack_00000010;
  uint in_stack_00000014;
  ushort in_stack_00000018;
  
  fVar1 = (float10)CONCAT28(in_stack_0000000c,CONCAT44(in_stack_00000008,in_stack_00000004));
  while( true ) {
    fVar2 = (float10)CONCAT28(in_stack_00000018,CONCAT44(in_stack_00000014,in_stack_00000010));
    if (CARRY4(in_stack_00000008,in_stack_00000008)) break;
    if ((in_stack_00000004 == 0 && in_stack_00000008 == 0) || ((in_stack_0000000c & 0x7fff) != 0))
    goto LAB_00606a04;
    if ((in_stack_00000018 & 0x7fff) == 0) {
      if (CARRY4(in_stack_00000014,in_stack_00000014)) goto LAB_00606a70;
    }
    else if (((in_stack_00000018 & 0x7fff) == 0x7fff) ||
            (!CARRY4(in_stack_00000014,in_stack_00000014))) {
LAB_00606a70:
      return fVar2 / fVar1;
    }
    fVar2 = fVar1 * (float10)g_IEEE754RenormScaleFactor;
    in_stack_00000004 = SUB104(fVar2,0);
    in_stack_00000008 = (uint)((unkuint10)fVar2 >> 0x20);
    in_stack_0000000c = (ushort)((unkuint10)fVar2 >> 0x40);
  }
  if (((in_stack_00000008 * 2 ^ 0xe000000) & 0xe000000) != 0) {
    return fVar2 / fVar1;
  }
  if (g_IEEE754ExponentClassTable[in_stack_00000008 * 2 >> 0x1c] == 0) {
    return fVar2 / fVar1;
  }
  if (((in_stack_0000000c & 0x7fff) != 0) && ((in_stack_0000000c & 0x7fff) != 0x7fff)) {
    if ((in_stack_00000018 & 0x7fff) == 1) {
      return (fVar2 * (float10)g_IEEE754SubnormalScaleFactor) /
             (fVar1 * (float10)g_IEEE754SubnormalScaleFactor);
    }
    return (fVar2 * (float10)g_IEEE754NormalScaleFactor) /
           (fVar1 * (float10)g_IEEE754NormalScaleFactor);
  }
LAB_00606a04:
  return fVar2 / fVar1;
}


// Assembly code:
// 00606960: FLD extended double ptr [ESP + 0x10]
//   Label: crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: Stack[0x10] (READ)
// 00606964: FLD extended double ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 00606968: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_00606968
//   XREF to: Stack[0x8] (READ)
// 0060696c: ADD EAX,EAX
// 0060696e: JNC 0x006069fa
//   XREF to: 006069fa (CONDITIONAL_JUMP)
// 00606974: XOR EAX,0xe000000
// 00606979: TEST EAX,0xe000000
// 0060697e: JZ 0x00606983
//   XREF to: 00606983 (CONDITIONAL_JUMP)
// 00606980: FDIVP
// 00606982: RET
// 00606983: SHR EAX,0x1c
//   Label: LAB_00606983
// 00606986: CMP byte ptr [EAX + 0x6873b8],0x0
//   XREF to: 006873b8 (DATA)
// 0060698d: JNZ 0x00606992
//   XREF to: 00606992 (CONDITIONAL_JUMP)
// 0060698f: FDIVP
// 00606991: RET
// 00606992: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_00606992
//   XREF to: Stack[0xc] (READ)
// 00606996: AND EAX,0x7fff
// 0060699b: JZ 0x00606a04
//   XREF to: 00606a04 (CONDITIONAL_JUMP)
// 0060699d: CMP EAX,0x7fff
// 006069a2: JZ 0x00606a04
//   XREF to: 00606a04 (CONDITIONAL_JUMP)
// 006069a4: FNSTCW word ptr [ESP + 0x1c]
//   XREF to: Stack[0x1c] (WRITE)
// 006069a8: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x1c] (READ)
// 006069ac: OR EAX,0x33f
// 006069b1: AND EAX,0xf3ff
// 006069b6: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[0x20] (WRITE)
// 006069ba: FLDCW word ptr [ESP + 0x20]
//   XREF to: Stack[0x20] (READ)
// 006069be: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x18] (READ)
// 006069c2: AND EAX,0x7fff
// 006069c7: CMP EAX,0x1
// 006069ca: JZ 0x006069e3
//   XREF to: 006069e3 (CONDITIONAL_JUMP)
// 006069cc: FMUL float ptr [0x006873c8]
//   XREF to: 006873c8 (READ)
// 006069d2: FXCH
// 006069d4: FMUL float ptr [0x006873c8]
//   XREF to: 006873c8 (READ)
// 006069da: FXCH
// 006069dc: FLDCW word ptr [ESP + 0x1c]
//   XREF to: Stack[0x1c] (READ)
// 006069e0: FDIVP
// 006069e2: RET
// 006069e3: FMUL float ptr [0x006873cc]
//   Label: LAB_006069e3
//   XREF to: 006873cc (READ)
// 006069e9: FXCH
// 006069eb: FMUL float ptr [0x006873cc]
//   XREF to: 006873cc (READ)
// 006069f1: FXCH
// 006069f3: FLDCW word ptr [ESP + 0x1c]
//   XREF to: Stack[0x1c] (READ)
// 006069f7: FDIVP
// 006069f9: RET
// 006069fa: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_006069fa
//   XREF to: Stack[0x4] (READ)
// 006069fe: OR EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00606a02: JNZ 0x00606a07
//   XREF to: 00606a07 (CONDITIONAL_JUMP)
// 00606a04: FDIVP
//   Label: LAB_00606a04
// 00606a06: RET
// 00606a07: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_00606a07
//   XREF to: Stack[0xc] (READ)
// 00606a0b: AND EAX,0x7fff
// 00606a10: JNZ 0x00606a04
//   XREF to: 00606a04 (CONDITIONAL_JUMP)
// 00606a12: FNSTCW word ptr [ESP + 0x1c]
//   XREF to: Stack[0x1c] (WRITE)
// 00606a16: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x1c] (READ)
// 00606a1a: OR EAX,0x33f
// 00606a1f: AND EAX,0xf3ff
// 00606a24: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[0x20] (WRITE)
// 00606a28: FLDCW word ptr [ESP + 0x20]
//   XREF to: Stack[0x20] (READ)
// 00606a2c: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x18] (READ)
// 00606a30: AND EAX,0x7fff
// 00606a35: JZ 0x00606a48
//   XREF to: 00606a48 (CONDITIONAL_JUMP)
// 00606a37: CMP EAX,0x7fff
// 00606a3c: JZ 0x00606a70
//   XREF to: 00606a70 (CONDITIONAL_JUMP)
// 00606a3e: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x14] (READ)
// 00606a42: ADD EAX,EAX
// 00606a44: JNC 0x00606a70
//   XREF to: 00606a70 (CONDITIONAL_JUMP)
// 00606a46: JMP 0x00606a50
//   XREF to: 00606a50 (UNCONDITIONAL_JUMP)
// 00606a48: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_00606a48
//   XREF to: Stack[0x14] (READ)
// 00606a4c: ADD EAX,EAX
// 00606a4e: JC 0x00606a70
//   XREF to: 00606a70 (CONDITIONAL_JUMP)
// 00606a50: FXCH
//   Label: LAB_00606a50
// 00606a52: FSTP ST0
// 00606a54: FLD ST0
// 00606a56: FMUL float ptr [0x006873d0]
//   XREF to: 006873d0 (READ)
// 00606a5c: FSTP extended double ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (WRITE)
// 00606a60: FLD extended double ptr [ESP + 0x10]
//   XREF to: Stack[0x10] (READ)
// 00606a64: FXCH
// 00606a66: WAIT
// 00606a67: FLDCW word ptr [ESP + 0x1c]
//   XREF to: Stack[0x1c] (READ)
// 00606a6b: JMP 0x00606968
//   XREF to: 00606968 (UNCONDITIONAL_JUMP)
// 00606a70: FLDCW word ptr [ESP + 0x1c]
//   Label: LAB_00606a70
//   XREF to: Stack[0x1c] (READ)
// 00606a74: FDIVP
// 00606a76: RET
