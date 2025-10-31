// Name: crt_math.c_atan2_FUN_0060c440
// Address: 0060c440
// Address Range: [[0060c440, 0060c59f] [0060c630, 0060c63f]]
// Convention: __watcallRegister
// Signature: float10 crt_math.c_atan2_FUN_0060c440(float10 y, float10 x)
// Cross-references:
//   crt_unknown.c_FUN_00608e14 (00608e14) at 00608e27 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_006874d4
//   void* PTR_FUN_006874e4 = 0060c5a0
//   undefined4 DAT_00687518
//   undefined4 DAT_0068751c
//   undefined4 DAT_00687520
//   undefined4 DAT_0068752a
//   undefined4 DAT_00687534
//   undefined4 DAT_0068753e
//   undefined4 DAT_00687548
//   undefined4 DAT_00687552
//   undefined4 DAT_0068755c
// Function calls:
//   crt_math.c_function_dispatch_FUN_00606a77

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 crt_math_c_atan2_FUN_0060c440(float10 y,float10 x)

{
  uint uVar1;
  uint uVar2;
  float10 fVar3;
  uint uStack_2c;
  ushort uStack_28;
  uint uStack_20;
  ushort uStack_1c;
  
  uStack_20 = (uint)((unkuint10)y >> 0x20);
  uStack_1c = (ushort)((unkuint10)y >> 0x40);
  uStack_2c = (uint)((unkuint10)x >> 0x20);
  uStack_28 = (ushort)((unkuint10)x >> 0x40);
  if ((((CARRY4(uStack_2c,uStack_2c)) && (CARRY4(uStack_20,uStack_20))) &&
      (((unkuint10)x & 0x7fff) != 0)) &&
     (((((unkuint10)y & 0x7fff) != 0 && ((uStack_28 & 0x7fff) != 0x7fff)) &&
      ((uStack_1c & 0x7fff) != 0x7fff)))) {
    uVar2 = (uint)(ABS(y) <= ABS(x));
    crt_math_c_function_dispatch_FUN_00606a77(0xf);
    crt_math_c_function_dispatch_FUN_00606a77(0xf);
    uVar1 = (uint)uStack_28 << 0x10;
                    /* WARNING: Could not recover jumptable at 0x0060c599. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar3 = (float10)(*(code *)(&PTR_FUN_006874e4)
                               [(uVar2 * 2 +
                                (uint)CARRY4((uint)uStack_1c << 0x10,(uint)uStack_1c << 0x10)) * 2 +
                                (uint)CARRY4(uVar1,uVar1)])((uint)uStack_28 << 0x11);
    return fVar3;
  }
  fVar3 = (float10)fpatan(x,y);
  return fVar3;
}


// Assembly code:
// 0060c440: PUSH EAX
//   Label: crt_math.c_atan2_FUN_0060c440
// 0060c441: PUSH ECX
// 0060c442: PUSH EDX
// 0060c443: SUB ESP,0x24
// 0060c446: FSTP extended double ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (WRITE)
// 0060c44a: FSTP extended double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0060c44d: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 0060c451: ADD ECX,ECX
// 0060c453: JNC 0x0060c630
//   XREF to: 0060c630 (CONDITIONAL_JUMP)
// 0060c459: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 0060c45d: ADD EAX,EAX
// 0060c45f: JNC 0x0060c630
//   XREF to: 0060c630 (CONDITIONAL_JUMP)
// 0060c465: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 0060c469: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 0060c46d: AND ECX,0x7fff
// 0060c473: JZ 0x0060c630
//   XREF to: 0060c630 (CONDITIONAL_JUMP)
// 0060c479: AND EAX,0x7fff
// 0060c47e: JZ 0x0060c630
//   XREF to: 0060c630 (CONDITIONAL_JUMP)
// 0060c484: CMP ECX,0x7fff
// 0060c48a: JZ 0x0060c630
//   XREF to: 0060c630 (CONDITIONAL_JUMP)
// 0060c490: CMP EAX,0x7fff
// 0060c495: JZ 0x0060c630
//   XREF to: 0060c630 (CONDITIONAL_JUMP)
// 0060c49b: FLD extended double ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 0060c49f: FABS
// 0060c4a1: FLD extended double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0060c4a4: FABS
// 0060c4a6: FNSTCW word ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (WRITE)
// 0060c4aa: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 0060c4ae: OR EDX,0x33f
// 0060c4b4: AND EDX,0xf3ff
// 0060c4ba: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0060c4be: FLDCW word ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 0060c4c2: XOR EDX,EDX
// 0060c4c4: FCOM
// 0060c4c6: PUSH EAX
// 0060c4c7: FNSTSW AX
// 0060c4c9: SAHF
// 0060c4ca: POP EAX
// 0060c4cb: JC 0x0060c4d0
//   XREF to: 0060c4d0 (CONDITIONAL_JUMP)
// 0060c4cd: FXCH
// 0060c4cf: INC EDX
// 0060c4d0: PUSH EAX
//   Label: LAB_0060c4d0
// 0060c4d1: MOV EAX,0xf
// 0060c4d6: CALL crt_math.c_function_dispatch_FUN_00606a77
//   XREF to: 00606a77 (UNCONDITIONAL_CALL)
// 0060c4db: POP EAX
// 0060c4dc: FLD float ptr [0x00687518]
//   XREF to: 00687518 (READ)
// 0060c4e2: FMUL ST1
// 0060c4e4: FISTP dword ptr [ESP + 0x20]
// 0060c4e8: MOV ECX,dword ptr [ESP + 0x20]
// 0060c4ec: SHL ECX,0x4
// 0060c4ef: FILD dword ptr [ESP + 0x20]
// 0060c4f3: FMUL float ptr [0x0068751c]
//   XREF to: 0068751c (READ)
// 0060c4f9: FLD ST1
// 0060c4fb: FSUB ST0,ST1
// 0060c4fd: FXCH
// 0060c4ff: FMULP ST2
// 0060c501: FLD double ptr [0x006874d4]
//   XREF to: 006874d4 (READ)
// 0060c507: FADDP ST2,ST0
// 0060c509: PUSH EAX
// 0060c50a: MOV EAX,0xf
// 0060c50f: CALL crt_math.c_function_dispatch_FUN_00606a77
//   XREF to: 00606a77 (UNCONDITIONAL_CALL)
// 0060c514: POP EAX
// 0060c515: FLD ST0
// 0060c517: FMUL ST1
// 0060c519: FLD ST0
// 0060c51b: FMUL ST1
// 0060c51d: FLD ST0
// 0060c51f: FMUL ST1
// 0060c521: FLD extended double ptr [0x00687552]
//   XREF to: 00687552 (READ)
// 0060c527: FLD extended double ptr [0x00687548]
//   XREF to: 00687548 (READ)
// 0060c52d: FXCH
// 0060c52f: FMUL ST2
// 0060c531: FLD extended double ptr [0x0068753e]
//   XREF to: 0068753e (READ)
// 0060c537: FXCH ST2
// 0060c539: FMUL ST3
// 0060c53b: FLD extended double ptr [0x00687534]
//   XREF to: 00687534 (READ)
// 0060c541: FXCH ST2
// 0060c543: FMUL ST5
// 0060c545: FXCH ST3
// 0060c547: FMULP ST4
// 0060c549: FLD extended double ptr [0x0068752a]
//   XREF to: 0068752a (READ)
// 0060c54f: FXCH ST3
// 0060c551: FADDP ST4,ST0
// 0060c553: MOV EAX,dword ptr [ESP + 0x14]
// 0060c557: FLD extended double ptr [0x00687520]
//   XREF to: 00687520 (READ)
// 0060c55d: FXCH
// 0060c55f: SHL EAX,0x10
// 0060c562: FMUL ST6
// 0060c564: FXCH ST2
// 0060c566: ADD EAX,EAX
// 0060c568: FMUL ST5
// 0060c56a: FXCH ST3
// 0060c56c: ADC EDX,EDX
// 0060c56e: FMULP ST5
// 0060c570: FXCH ST2
// 0060c572: MOV EAX,dword ptr [ESP + 0x8]
// 0060c576: FMUL ST5
// 0060c578: FXCH ST2
// 0060c57a: SHL EAX,0x10
// 0060c57d: FMULP ST5
// 0060c57f: FXCH ST2
// 0060c581: FADDP ST3,ST0
// 0060c583: ADD EAX,EAX
// 0060c585: FADDP
// 0060c587: ADC EDX,EDX
// 0060c589: FADDP ST2,ST0
// 0060c58b: FADDP
// 0060c58d: FMUL ST1
// 0060c58f: FADDP
// 0060c591: FLD extended double ptr [ECX + 0x68755c]
//   XREF to: 0068755c (DATA)
// 0060c597: FADDP
// 0060c599: JMP dword ptr [EDX*0x4 + 0x6874e4]
//   XREF to: 006874e4 (DATA)
// 0060c630: FLD extended double ptr [ESP]
//   Label: LAB_0060c630
//   XREF to: Stack[-0x30] (DATA)
// 0060c633: FLD extended double ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 0060c637: FPATAN
// 0060c639: ADD ESP,0x24
// 0060c63c: POP EDX
// 0060c63d: POP ECX
// 0060c63e: POP EAX
// 0060c63f: RET
