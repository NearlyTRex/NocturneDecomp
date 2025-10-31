// Name: cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0
// Address: 004887a0
// Address Range: [[004887a0, 00488982]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedCenteredRectangle_FUN_004889b0 (004889b0) at 00488a10 [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedFullSurface_FUN_00488990 (00488990) at 004889a2 [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedInsetRectangle_FUN_00488a30 (00488a30) at 00488a7c [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_00488630 (00488630) at 00488676 [UNCONDITIONAL_CALL]
// Globals:
//   double g_TimeNormalizationFactor = 0.0000152587890625
//   int g_DashLength = 0x1
//   float g_DashAnimationThreshold = 0.1000000
//   float g_DashAnimationAccumulator
//   float g_DashOffsetCounter
//   int g_LastAnimationTimerValue
//   int g_GlobalDeltaTimeInt
//   int g_AnimationTimerValue
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0
          (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  int iVar1;
  undefined4 in_EAX;
  int iVar2;
  int iVar3;
  int y;
  float10 fVar4;
  double dVar5;
  int in_stack_00000018;
  
  iVar1 = in_stack_00000018;
  y = y1;
  if (g_AnimationTimerValue != g_LastAnimationTimerValue) {
    g_DashAnimationAccumulator =
         (float)g_GlobalDeltaTimeInt * (float)g_TimeNormalizationFactor + g_DashAnimationAccumulator
    ;
    g_LastAnimationTimerValue = g_AnimationTimerValue;
    in_EAX = CONCAT22((short)((uint)in_EAX >> 0x10),
                      (ushort)(g_DashAnimationAccumulator < g_DashAnimationThreshold) << 8 |
                      (ushort)(NAN(g_DashAnimationAccumulator) || NAN(g_DashAnimationThreshold)) <<
                      10 | (ushort)(g_DashAnimationAccumulator == g_DashAnimationThreshold) << 0xe);
    if (g_DashAnimationAccumulator >= g_DashAnimationThreshold &&
        (g_DashAnimationAccumulator == g_DashAnimationThreshold) == 0) {
      g_DashOffsetCounter =
           g_DashAnimationAccumulator / g_DashAnimationThreshold + g_DashOffsetCounter;
      if ((float)(g_DashLength * 2) < g_DashOffsetCounter) {
        g_DashOffsetCounter = 0.0;
      }
      in_EAX = 0;
      g_DashAnimationAccumulator = 0.0;
    }
  }
  fVar4 = (float10)g_DashOffsetCounter;
  dVar5 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(x1,in_EAX));
  iVar2 = (int)((ulonglong)dVar5 >> 0x20);
  iVar3 = (int)ROUND(fVar4);
  if (x2 < iVar2) {
    y1 = x2;
    x2 = iVar2;
  }
  iVar2 = y1;
  if (in_stack_00000018 < y) {
    in_stack_00000018 = y;
    y = iVar1;
  }
  for (; iVar1 = y, iVar2 < x2; iVar2 = iVar2 + 1) {
    if (iVar3 % (g_DashLength * 2) < g_DashLength) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr,iVar2,y);
    }
    iVar3 = iVar3 + 1;
  }
  for (; iVar1 < in_stack_00000018; iVar1 = iVar1 + 1) {
    if (iVar3 % (g_DashLength * 2) < g_DashLength) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr,x2,iVar1);
    }
    iVar3 = iVar3 + 1;
  }
  for (; y1 < x2; x2 = x2 + -1) {
    if (iVar3 % (g_DashLength * 2) < g_DashLength) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr,x2,in_stack_00000018);
    }
    iVar3 = iVar3 + 1;
  }
  for (; y < in_stack_00000018; in_stack_00000018 = in_stack_00000018 + -1) {
    if (iVar3 % (g_DashLength * 2) < g_DashLength) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr,y1,in_stack_00000018);
    }
    iVar3 = iVar3 + 1;
  }
  return;
}


// Assembly code:
// 004887a0: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0
// 004887a1: PUSH ESI
// 004887a2: PUSH EDI
// 004887a3: PUSH EBP
// 004887a4: SUB ESP,0x10
// 004887a7: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 004887ab: MOV EBP,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 004887af: MOV EDI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x10] (READ)
// 004887b3: MOV ECX,dword ptr [0x02cf6a84]
//   XREF to: 02cf6a84 (READ)
// 004887b9: CMP ECX,dword ptr [0x02c6d2cc]
//   XREF to: 02c6d2cc (READ)
// 004887bf: JNZ 0x004888f3
//   XREF to: 004888f3 (CONDITIONAL_JUMP)
// 004887c5: FLD float ptr [0x02c6d2c8]
//   Label: LAB_004887c5
//   XREF to: 02c6d2c8 (READ)
// 004887cb: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 004887cf: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004887d4: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 004887d8: CMP EDI,EDX
// 004887da: JGE 0x004887e2
//   XREF to: 004887e2 (CONDITIONAL_JUMP)
// 004887dc: MOV dword ptr [ESP + 0x28],EDI
//   XREF to: Stack[0x8] (WRITE)
// 004887e0: MOV EDI,EDX
// 004887e2: MOV ECX,dword ptr [ESP + 0x34]
//   Label: LAB_004887e2
//   XREF to: Stack[0x14] (READ)
// 004887e6: CMP EBP,ECX
// 004887e8: JLE 0x004887f2
//   XREF to: 004887f2 (CONDITIONAL_JUMP)
// 004887ea: MOV EDX,EBP
// 004887ec: MOV EBP,ECX
// 004887ee: MOV dword ptr [ESP + 0x34],EDX
//   XREF to: Stack[0x14] (WRITE)
// 004887f2: MOV EBX,dword ptr [ESP + 0x28]
//   Label: LAB_004887f2
//   XREF to: Stack[0x8] (READ)
// 004887f6: CMP EDI,EBX
// 004887f8: JLE 0x0048882e
//   XREF to: 0048882e (CONDITIONAL_JUMP)
// 004887fa: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_004887fa
//   XREF to: Stack[-0x18] (READ)
// 004887fe: MOV ECX,dword ptr [0x006703dc]
//   XREF to: 006703dc (READ)
// 00488804: MOV EDX,EAX
// 00488806: ADD ECX,ECX
// 00488808: SAR EDX,0x1f
// 0048880b: IDIV ECX
// 0048880d: CMP EDX,dword ptr [0x006703dc]
//   XREF to: 006703dc (READ)
// 00488813: JGE 0x00488820
//   XREF to: 00488820 (CONDITIONAL_JUMP)
// 00488815: PUSH EBP
// 00488816: PUSH EBX
// 00488817: PUSH ESI
// 00488818: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 0048881d: ADD ESP,0xc
// 00488820: MOV EDX,dword ptr [ESP + 0x8]
//   Label: LAB_00488820
//   XREF to: Stack[-0x18] (READ)
// 00488824: INC EDX
// 00488825: INC EBX
// 00488826: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0048882a: CMP EBX,EDI
// 0048882c: JL 0x004887fa
//   XREF to: 004887fa (CONDITIONAL_JUMP)
// 0048882e: MOV ECX,dword ptr [ESP + 0x34]
//   Label: LAB_0048882e
//   XREF to: Stack[0x14] (READ)
// 00488832: MOV EBX,EBP
// 00488834: CMP EBP,ECX
// 00488836: JGE 0x00488870
//   XREF to: 00488870 (CONDITIONAL_JUMP)
// 00488838: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_00488838
//   XREF to: Stack[-0x18] (READ)
// 0048883c: MOV ECX,dword ptr [0x006703dc]
//   XREF to: 006703dc (READ)
// 00488842: MOV EDX,EAX
// 00488844: ADD ECX,ECX
// 00488846: SAR EDX,0x1f
// 00488849: IDIV ECX
// 0048884b: CMP EDX,dword ptr [0x006703dc]
//   XREF to: 006703dc (READ)
// 00488851: JGE 0x0048885e
//   XREF to: 0048885e (CONDITIONAL_JUMP)
// 00488853: PUSH EBX
// 00488854: PUSH EDI
// 00488855: PUSH ESI
// 00488856: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 0048885b: ADD ESP,0xc
// 0048885e: MOV EDX,dword ptr [ESP + 0x8]
//   Label: LAB_0048885e
//   XREF to: Stack[-0x18] (READ)
// 00488862: MOV ECX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x14] (READ)
// 00488866: INC EDX
// 00488867: INC EBX
// 00488868: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0048886c: CMP EBX,ECX
// 0048886e: JL 0x00488838
//   XREF to: 00488838 (CONDITIONAL_JUMP)
// 00488870: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_00488870
//   XREF to: Stack[0x8] (READ)
// 00488874: MOV EBX,EDI
// 00488876: CMP EDI,EAX
// 00488878: JLE 0x004888b6
//   XREF to: 004888b6 (CONDITIONAL_JUMP)
// 0048887a: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_0048887a
//   XREF to: Stack[-0x18] (READ)
// 0048887e: MOV EDI,dword ptr [0x006703dc]
//   XREF to: 006703dc (READ)
// 00488884: MOV EDX,EAX
// 00488886: ADD EDI,EDI
// 00488888: SAR EDX,0x1f
// 0048888b: IDIV EDI
// 0048888d: CMP EDX,dword ptr [0x006703dc]
//   XREF to: 006703dc (READ)
// 00488893: JGE 0x004888a4
//   XREF to: 004888a4 (CONDITIONAL_JUMP)
// 00488895: MOV EDI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x14] (READ)
// 00488899: PUSH EDI
// 0048889a: PUSH EBX
// 0048889b: PUSH ESI
// 0048889c: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 004888a1: ADD ESP,0xc
// 004888a4: MOV EDI,dword ptr [ESP + 0x8]
//   Label: LAB_004888a4
//   XREF to: Stack[-0x18] (READ)
// 004888a8: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 004888ac: INC EDI
// 004888ad: DEC EBX
// 004888ae: MOV dword ptr [ESP + 0x8],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 004888b2: CMP EBX,EAX
// 004888b4: JG 0x0048887a
//   XREF to: 0048887a (CONDITIONAL_JUMP)
// 004888b6: MOV EBX,dword ptr [ESP + 0x34]
//   Label: LAB_004888b6
//   XREF to: Stack[0x14] (READ)
// 004888ba: CMP EBP,EBX
// 004888bc: JGE 0x004888eb
//   XREF to: 004888eb (CONDITIONAL_JUMP)
// 004888be: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_004888be
//   XREF to: Stack[-0x18] (READ)
// 004888c2: MOV EDI,dword ptr [0x006703dc]
//   XREF to: 006703dc (READ)
// 004888c8: MOV EDX,EAX
// 004888ca: ADD EDI,EDI
// 004888cc: SAR EDX,0x1f
// 004888cf: IDIV EDI
// 004888d1: CMP EDX,dword ptr [0x006703dc]
//   XREF to: 006703dc (READ)
// 004888d7: JL 0x0048896f
//   XREF to: 0048896f (CONDITIONAL_JUMP)
// 004888dd: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_004888dd
//   XREF to: Stack[-0x18] (READ)
// 004888e1: INC EAX
// 004888e2: DEC EBX
// 004888e3: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004888e7: CMP EBX,EBP
// 004888e9: JG 0x004888be
//   XREF to: 004888be (CONDITIONAL_JUMP)
// 004888eb: ADD ESP,0x10
//   Label: LAB_004888eb
// 004888ee: POP EBP
// 004888ef: POP EDI
// 004888f0: POP ESI
// 004888f1: POP EBX
// 004888f2: RET
// 004888f3: FILD dword ptr [0x02cf6a80]
//   Label: LAB_004888f3
//   XREF to: 02cf6a80 (READ)
// 004888f9: FMUL double ptr [0x00621e3e]
//   XREF to: 00621e3e (READ)
// 004888ff: FLD float ptr [0x02c6d2c4]
//   XREF to: 02c6d2c4 (READ)
// 00488905: FXCH
// 00488907: FADD ST0,ST1
// 00488909: MOV dword ptr [0x02c6d2cc],ECX
//   XREF to: 02c6d2cc (WRITE)
// 0048890f: FSTP ST1
// 00488911: FST float ptr [0x02c6d2c4]
//   XREF to: 02c6d2c4 (WRITE)
// 00488917: FCOMP float ptr [0x006703e0]
//   XREF to: 006703e0 (READ)
// 0048891d: FNSTSW AX
// 0048891f: SAHF
// 00488920: JBE 0x004887c5
//   XREF to: 004887c5 (CONDITIONAL_JUMP)
// 00488926: FLD float ptr [0x02c6d2c4]
//   XREF to: 02c6d2c4 (READ)
// 0048892c: FDIV float ptr [0x006703e0]
//   XREF to: 006703e0 (READ)
// 00488932: MOV EDX,dword ptr [0x006703dc]
//   XREF to: 006703dc (READ)
// 00488938: ADD EDX,EDX
// 0048893a: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0048893e: FADD float ptr [0x02c6d2c8]
//   XREF to: 02c6d2c8 (READ)
// 00488944: FILD dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 00488948: FXCH
// 0048894a: FSTP float ptr [0x02c6d2c8]
//   XREF to: 02c6d2c8 (WRITE)
// 00488950: FCOMP float ptr [0x02c6d2c8]
//   XREF to: 02c6d2c8 (READ)
// 00488956: FNSTSW AX
// 00488958: SAHF
// 00488959: JNC 0x00488963
//   XREF to: 00488963 (CONDITIONAL_JUMP)
// 0048895b: XOR EBX,EBX
// 0048895d: MOV dword ptr [0x02c6d2c8],EBX
//   XREF to: 02c6d2c8 (WRITE)
// 00488963: XOR EAX,EAX
//   Label: LAB_00488963
// 00488965: MOV [0x02c6d2c4],EAX
//   XREF to: 02c6d2c4 (WRITE)
// 0048896a: JMP 0x004887c5
//   XREF to: 004887c5 (UNCONDITIONAL_JUMP)
// 0048896f: PUSH EBX
//   Label: LAB_0048896f
// 00488970: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 00488974: PUSH EDI
// 00488975: PUSH ESI
// 00488976: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 0048897b: ADD ESP,0xc
// 0048897e: JMP 0x004888dd
//   XREF to: 004888dd (UNCONDITIONAL_JUMP)
