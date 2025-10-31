// Name: cockpit_drawsurf.cpp_CDrawSurface_drawDashedLine_FUN_00487bc0
// Address: 00487bc0
// Address Range: [[00487bc0, 00487dd7]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawDashedLine_FUN_00487bc0(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawClippedDashedLine_FUN_00487a30 (00487a30) at 00487ab7 [UNCONDITIONAL_CALL]
// Globals:
//   double g_DashAnimationTimeScale = 0.0000152587890625
//   int g_DashLength = 0x1
//   float g_DashAnimationThreshold = 0.1000000
//   float g_DashAnimationAccumulator
//   float g_DashAnimationOffset
//   int g_DashAnimationLastFrame
//   int g_GlobalDeltaTimeInt
//   int g_AnimationTimerValue
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawDashedLine_FUN_00487bc0
          (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  float fVar1;
  undefined4 in_EAX;
  undefined2 uVar2;
  int extraout_ECX;
  int y;
  int iVar3;
  int iVar4;
  int x;
  int iVar5;
  int iVar6;
  float10 fVar7;
  double dVar8;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_14;
  
  if (g_AnimationTimerValue != g_DashAnimationLastFrame) {
    g_DashAnimationAccumulator =
         (float)g_GlobalDeltaTimeInt * (float)g_DashAnimationTimeScale + g_DashAnimationAccumulator;
    g_DashAnimationLastFrame = g_AnimationTimerValue;
    uVar2 = (undefined2)((uint)in_EAX >> 0x10);
    in_EAX = CONCAT22(uVar2,(ushort)(g_DashAnimationAccumulator < g_DashAnimationThreshold) << 8 |
                            (ushort)(NAN(g_DashAnimationAccumulator) ||
                                    NAN(g_DashAnimationThreshold)) << 10 |
                            (ushort)(g_DashAnimationAccumulator == g_DashAnimationThreshold) << 0xe)
    ;
    if (g_DashAnimationAccumulator >= g_DashAnimationThreshold &&
        (g_DashAnimationAccumulator == g_DashAnimationThreshold) == 0) {
      g_DashAnimationOffset =
           g_DashAnimationAccumulator / g_DashAnimationThreshold + g_DashAnimationOffset;
      fVar1 = (float)(g_DashLength * 2);
      in_EAX = CONCAT22(uVar2,(ushort)(fVar1 < g_DashAnimationOffset) << 8 |
                              (ushort)(NAN(fVar1) || NAN(g_DashAnimationOffset)) << 10 |
                              (ushort)(fVar1 == g_DashAnimationOffset) << 0xe);
      if (fVar1 < g_DashAnimationOffset) {
        in_EAX = 0;
        g_DashAnimationOffset = 0.0;
      }
      g_DashAnimationAccumulator = 0.0;
    }
  }
  fVar7 = (float10)g_DashAnimationOffset;
  dVar8 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(y2,in_EAX));
  local_14 = (uint)ROUND(fVar7);
  local_24 = 1;
  iVar6 = x1 - *(int *)(extraout_ECX + 8);
  x = x2 - *(int *)(extraout_ECX + 8);
  iVar4 = y1 - *(int *)(extraout_ECX + 0xc);
  y = (int)((ulonglong)dVar8 >> 0x20) - *(int *)(extraout_ECX + 0xc);
  local_28 = 1;
  iVar3 = iVar4;
  iVar5 = iVar6;
  if (iVar4 <= y) {
    local_28 = -1;
    iVar3 = y;
    y = iVar4;
    iVar5 = x;
    x = iVar6;
  }
  iVar3 = iVar3 - y;
  iVar5 = iVar5 - x;
  if (iVar5 < 0) {
    iVar5 = -iVar5;
    local_24 = -1;
  }
  if (iVar3 < iVar5) {
    local_1c = 0;
    iVar4 = iVar3 * 2 - iVar5;
    if (-1 < iVar5) {
      do {
        if ((int)((local_14 ^ (int)local_14 >> 0x1f) - ((int)local_14 >> 0x1f)) % (g_DashLength * 2)
            < g_DashLength) {
          cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0((CDrawSurface *)x1,x,y);
        }
        if (0 < iVar4) {
          y = y + 1;
          iVar4 = iVar4 - iVar5;
        }
        local_14 = local_14 + local_28;
        x = x + local_24;
        local_1c = local_1c + 1;
        iVar4 = iVar4 + iVar3;
      } while (local_1c <= iVar5);
    }
  }
  else {
    local_20 = 0;
    iVar4 = iVar5 * 2 - iVar3;
    if (-1 < iVar3) {
      do {
        if ((int)((local_14 ^ (int)local_14 >> 0x1f) - ((int)local_14 >> 0x1f)) % (g_DashLength * 2)
            < g_DashLength) {
          cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0((CDrawSurface *)x1,x,y);
        }
        if (0 < iVar4) {
          iVar4 = iVar4 - iVar3;
          x = x + local_24;
        }
        y = y + 1;
        iVar4 = iVar4 + iVar5;
        local_14 = local_14 + local_28;
        local_20 = local_20 + 1;
      } while (local_20 <= iVar3);
    }
  }
  return;
}


// Assembly code:
// 00487bc0: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawDashedLine_FUN_00487bc0
// 00487bc1: PUSH ESI
// 00487bc2: PUSH EDI
// 00487bc3: PUSH EBP
// 00487bc4: SUB ESP,0x24
// 00487bc7: MOV ESI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 00487bcb: MOV EBX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0xc] (READ)
// 00487bcf: MOV EBP,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x10] (READ)
// 00487bd3: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x14] (READ)
// 00487bd7: MOV EDI,dword ptr [0x02cf6a84]
//   XREF to: 02cf6a84 (READ)
// 00487bdd: CMP EDI,dword ptr [0x02c6d2c0]
//   XREF to: 02c6d2c0 (READ)
// 00487be3: JNZ 0x00487cbb
//   XREF to: 00487cbb (CONDITIONAL_JUMP)
// 00487be9: FLD float ptr [0x02c6d2bc]
//   Label: LAB_00487be9
//   XREF to: 02c6d2bc (READ)
// 00487bef: MOV EDI,0x1
// 00487bf4: MOV ECX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 00487bf8: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00487bfd: FISTP dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (WRITE)
// 00487c01: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 00487c05: MOV EAX,dword ptr [ECX + 0x8]
// 00487c08: MOV EDI,dword ptr [ECX + 0xc]
// 00487c0b: SUB ESI,EAX
// 00487c0d: SUB EBP,EAX
// 00487c0f: MOV EAX,0x1
// 00487c14: SUB EBX,EDI
// 00487c16: SUB EDX,EDI
// 00487c18: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00487c1c: CMP EBX,EDX
// 00487c1e: JG 0x00487c28
//   XREF to: 00487c28 (CONDITIONAL_JUMP)
// 00487c20: MOV dword ptr [ESP + 0x8],0xffffffff
//   XREF to: Stack[-0x2c] (WRITE)
// 00487c28: JLE 0x00487c36
//   Label: LAB_00487c28
//   XREF to: 00487c36 (CONDITIONAL_JUMP)
// 00487c2a: MOV ECX,ESI
// 00487c2c: MOV ESI,EBP
// 00487c2e: MOV EBP,ECX
// 00487c30: MOV ECX,EBX
// 00487c32: MOV EBX,EDX
// 00487c34: MOV EDX,ECX
// 00487c36: SUB EDX,EBX
//   Label: LAB_00487c36
// 00487c38: SUB EBP,ESI
// 00487c3a: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00487c3e: TEST EBP,EBP
// 00487c40: JL 0x00487d37
//   XREF to: 00487d37 (CONDITIONAL_JUMP)
// 00487c46: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_00487c46
//   XREF to: Stack[-0x1c] (READ)
// 00487c4a: CMP EBP,EAX
// 00487c4c: JLE 0x00487d5b
//   XREF to: 00487d5b (CONDITIONAL_JUMP)
// 00487c52: XOR EDX,EDX
// 00487c54: LEA EDI,[EAX + EAX*0x1]
// 00487c57: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00487c5b: SUB EDI,EBP
// 00487c5d: TEST EBP,EBP
// 00487c5f: JL 0x00487cb3
//   XREF to: 00487cb3 (CONDITIONAL_JUMP)
// 00487c61: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_00487c61
//   XREF to: Stack[-0x18] (READ)
// 00487c65: CDQ
// 00487c66: XOR EAX,EDX
// 00487c68: SUB EAX,EDX
// 00487c6a: MOV EDX,EAX
// 00487c6c: MOV ECX,dword ptr [0x006703dc]
//   XREF to: 006703dc (READ)
// 00487c72: SAR EDX,0x1f
// 00487c75: ADD ECX,ECX
// 00487c77: IDIV ECX
// 00487c79: CMP EDX,dword ptr [0x006703dc]
//   XREF to: 006703dc (READ)
// 00487c7f: JL 0x00487d47
//   XREF to: 00487d47 (CONDITIONAL_JUMP)
// 00487c85: TEST EDI,EDI
//   Label: LAB_00487c85
// 00487c87: JLE 0x00487c8c
//   XREF to: 00487c8c (CONDITIONAL_JUMP)
// 00487c89: INC EBX
// 00487c8a: SUB EDI,EBP
// 00487c8c: MOV EDX,dword ptr [ESP + 0x8]
//   Label: LAB_00487c8c
//   XREF to: Stack[-0x2c] (READ)
// 00487c90: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (READ)
// 00487c94: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x28] (READ)
// 00487c98: ADD ECX,EDX
// 00487c9a: ADD ESI,EAX
// 00487c9c: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 00487ca0: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x20] (READ)
// 00487ca4: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x1c] (READ)
// 00487ca8: INC ECX
// 00487ca9: ADD EDI,EDX
// 00487cab: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 00487caf: CMP EBP,ECX
// 00487cb1: JGE 0x00487c61
//   XREF to: 00487c61 (CONDITIONAL_JUMP)
// 00487cb3: ADD ESP,0x24
//   Label: LAB_00487cb3
// 00487cb6: POP EBP
// 00487cb7: POP EDI
// 00487cb8: POP ESI
// 00487cb9: POP EBX
// 00487cba: RET
// 00487cbb: FILD dword ptr [0x02cf6a80]
//   Label: LAB_00487cbb
//   XREF to: 02cf6a80 (READ)
// 00487cc1: FMUL double ptr [0x00621d66]
//   XREF to: 00621d66 (READ)
// 00487cc7: FLD float ptr [0x02c6d2b8]
//   XREF to: 02c6d2b8 (READ)
// 00487ccd: FXCH
// 00487ccf: FADD ST0,ST1
// 00487cd1: MOV dword ptr [0x02c6d2c0],EDI
//   XREF to: 02c6d2c0 (WRITE)
// 00487cd7: FSTP ST1
// 00487cd9: FST float ptr [0x02c6d2b8]
//   XREF to: 02c6d2b8 (WRITE)
// 00487cdf: FCOMP float ptr [0x006703e0]
//   XREF to: 006703e0 (READ)
// 00487ce5: FNSTSW AX
// 00487ce7: SAHF
// 00487ce8: JBE 0x00487be9
//   XREF to: 00487be9 (CONDITIONAL_JUMP)
// 00487cee: FLD float ptr [0x02c6d2b8]
//   XREF to: 02c6d2b8 (READ)
// 00487cf4: FDIV float ptr [0x006703e0]
//   XREF to: 006703e0 (READ)
// 00487cfa: MOV ECX,dword ptr [0x006703dc]
//   XREF to: 006703dc (READ)
// 00487d00: ADD ECX,ECX
// 00487d02: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00487d06: FADD float ptr [0x02c6d2bc]
//   XREF to: 02c6d2bc (READ)
// 00487d0c: FILD dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 00487d10: FXCH
// 00487d12: FSTP float ptr [0x02c6d2bc]
//   XREF to: 02c6d2bc (WRITE)
// 00487d18: FCOMP float ptr [0x02c6d2bc]
//   XREF to: 02c6d2bc (READ)
// 00487d1e: FNSTSW AX
// 00487d20: SAHF
// 00487d21: JNC 0x00487d2a
//   XREF to: 00487d2a (CONDITIONAL_JUMP)
// 00487d23: XOR EAX,EAX
// 00487d25: MOV [0x02c6d2bc],EAX
//   XREF to: 02c6d2bc (WRITE)
// 00487d2a: XOR ECX,ECX
//   Label: LAB_00487d2a
// 00487d2c: MOV dword ptr [0x02c6d2b8],ECX
//   XREF to: 02c6d2b8 (WRITE)
// 00487d32: JMP 0x00487be9
//   XREF to: 00487be9 (UNCONDITIONAL_JUMP)
// 00487d37: MOV EDI,0xffffffff
//   Label: LAB_00487d37
// 00487d3c: NEG EBP
// 00487d3e: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 00487d42: JMP 0x00487c46
//   XREF to: 00487c46 (UNCONDITIONAL_JUMP)
// 00487d47: PUSH EBX
//   Label: LAB_00487d47
// 00487d48: PUSH ESI
// 00487d49: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 00487d4d: PUSH EAX
// 00487d4e: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 00487d53: ADD ESP,0xc
// 00487d56: JMP 0x00487c85
//   XREF to: 00487c85 (UNCONDITIONAL_JUMP)
// 00487d5b: XOR ECX,ECX
//   Label: LAB_00487d5b
// 00487d5d: LEA EDI,[EBP + EBP*0x1]
// 00487d61: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 00487d65: SUB EDI,EAX
// 00487d67: TEST EAX,EAX
// 00487d69: JL 0x00487cb3
//   XREF to: 00487cb3 (CONDITIONAL_JUMP)
// 00487d6f: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_00487d6f
//   XREF to: Stack[-0x18] (READ)
// 00487d73: CDQ
// 00487d74: XOR EAX,EDX
// 00487d76: SUB EAX,EDX
// 00487d78: MOV EDX,EAX
// 00487d7a: MOV ECX,dword ptr [0x006703dc]
//   XREF to: 006703dc (READ)
// 00487d80: SAR EDX,0x1f
// 00487d83: ADD ECX,ECX
// 00487d85: IDIV ECX
// 00487d87: CMP EDX,dword ptr [0x006703dc]
//   XREF to: 006703dc (READ)
// 00487d8d: JL 0x00487dc7
//   XREF to: 00487dc7 (CONDITIONAL_JUMP)
// 00487d8f: TEST EDI,EDI
//   Label: LAB_00487d8f
// 00487d91: JLE 0x00487d9f
//   XREF to: 00487d9f (CONDITIONAL_JUMP)
// 00487d93: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x1c] (READ)
// 00487d97: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x28] (READ)
// 00487d9b: SUB EDI,EAX
// 00487d9d: ADD ESI,ECX
// 00487d9f: MOV EDX,dword ptr [ESP + 0x8]
//   Label: LAB_00487d9f
//   XREF to: Stack[-0x2c] (READ)
// 00487da3: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (READ)
// 00487da7: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x24] (READ)
// 00487dab: INC EBX
// 00487dac: ADD EDI,EBP
// 00487dae: ADD ECX,EDX
// 00487db0: INC EAX
// 00487db1: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 00487db5: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x1c] (READ)
// 00487db9: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00487dbd: CMP EAX,ECX
// 00487dbf: JG 0x00487cb3
//   XREF to: 00487cb3 (CONDITIONAL_JUMP)
// 00487dc5: JMP 0x00487d6f
//   XREF to: 00487d6f (UNCONDITIONAL_JUMP)
// 00487dc7: PUSH EBX
//   Label: LAB_00487dc7
// 00487dc8: PUSH ESI
// 00487dc9: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 00487dcd: PUSH EDX
// 00487dce: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 00487dd3: ADD ESP,0xc
// 00487dd6: JMP 0x00487d8f
//   XREF to: 00487d8f (UNCONDITIONAL_JUMP)
