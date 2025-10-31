// Name: cockpit_ckptutil.c_drawLineAA_FUN_00433c90
// Address: 00433c90
// Address Range: [[00433c90, 00433f41]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_drawLineAA_FUN_00433c90(int x0, int y0, int x1, int y1, int color)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_00488410 (00488410) at 00488494 [UNCONDITIONAL_CALL]
//   shape_design.c_renderPolygonWireframeAntialiased_FUN_0045d470 (0045d470) at 0045d536 [UNCONDITIONAL_CALL]
// Globals:
//   int g_LineClippingDisabled = 0x1
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
// Function calls:
//   cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004342f0
//   cockpit_ckptutil.c_putPixel_FUN_004345c0

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_drawLineAA_FUN_00433c90(int x0,int y0,int x1,int y1,int color)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float blend_factor;
  int unaff_EDI;
  uint uVar5;
  float in_stack_ffffffc4;
  float local_28;
  int local_18;
  uint local_14;
  
  iVar1 = x0;
  iVar2 = y0;
  if (y1 < y0) {
    y0 = y1;
    x0 = x1;
    x1 = iVar1;
    y1 = iVar2;
  }
  if ((g_LineClippingDisabled != 0) ||
     (((((g_ClipLeft <= x0 || (g_ClipLeft <= x1)) && ((x0 <= g_ClipRight || (x1 <= g_ClipRight))))
       && ((g_ClipTop <= y0 || (g_ClipTop <= y1)))) &&
      ((y0 <= g_ClipBottom || (y1 <= g_ClipBottom)))))) {
    cockpit_ckptutil_c_putPixel_FUN_004345c0(x0,y0,color);
    local_14 = x1 - x0;
    if ((int)local_14 < 0) {
      local_14 = -local_14;
      local_18 = -1;
    }
    else {
      local_18 = 1;
    }
    uVar3 = y1 - y0;
    if (uVar3 != 0) {
      if (local_14 == 0) {
        do {
          y0 = y0 + 1;
          cockpit_ckptutil_c_putPixel_FUN_004345c0(x0,y0,color);
          unaff_EDI = unaff_EDI + -1;
        } while (unaff_EDI != 0);
        return;
      }
      if (local_14 != uVar3) {
        if ((int)uVar3 < (int)local_14) {
          uVar4 = (uVar3 * 0x10000) / local_14;
          uVar3 = 0;
          while (local_14 = local_14 - 1, local_14 != 0) {
            uVar5 = uVar3 + uVar4 & 0xffff;
            if (uVar5 <= uVar3) {
              y0 = y0 + 1;
            }
            x0 = x0 + local_18;
            cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_004342f0
                      (x0,y0,((float)(uVar5 >> 8) + 1.0) * in_stack_ffffffc4,color);
            in_stack_ffffffc4 = (float)color;
            cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_004342f0(x0,y0 + 1,local_28,color);
            uVar3 = uVar5;
          }
        }
        else {
          blend_factor = (float)((local_14 << 0x10) / uVar3);
          uVar4 = 0;
          while (uVar3 = uVar3 - 1, uVar3 != 0) {
            uVar5 = uVar4 + (int)blend_factor & 0xffff;
            if (uVar5 <= uVar4) {
              x0 = x0 + local_18;
            }
            y0 = y0 + 1;
            cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_004342f0
                      (x0,y0,((float)(uVar5 >> 8) + 1.0) * in_stack_ffffffc4,color);
            in_stack_ffffffc4 = (float)color;
            cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_004342f0
                      (local_14 + x0,y0,blend_factor,color);
            uVar4 = uVar5;
          }
        }
        cockpit_ckptutil_c_putPixel_FUN_004345c0(x1,y1,color);
        return;
      }
      do {
        y0 = y0 + 1;
        x0 = x0 + local_18;
        cockpit_ckptutil_c_putPixel_FUN_004345c0(x0,y0,color);
        unaff_EDI = unaff_EDI + -1;
      } while (unaff_EDI != 0);
      return;
    }
    while (local_14 = local_14 - 1, local_14 != 0xffffffff) {
      x0 = x0 + local_18;
      cockpit_ckptutil_c_putPixel_FUN_004345c0(x0,y0,color);
    }
  }
  return;
}


// Assembly code:
// 00433c90: PUSH EBX
//   Label: cockpit_ckptutil.c_drawLineAA_FUN_00433c90
// 00433c91: PUSH ESI
// 00433c92: PUSH EDI
// 00433c93: PUSH EBP
// 00433c94: MOV EBP,ESP
// 00433c96: SUB ESP,0x30
// 00433c99: AND ESP,0xfffffff8
// 00433c9c: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00433c9f: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00433ca2: MOV EDX,0x3b800000
// 00433ca7: MOV ECX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00433caa: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x40] (DATA)
// 00433cad: CMP EBX,ECX
// 00433caf: JG 0x00433d57
//   XREF to: 00433d57 (CONDITIONAL_JUMP)
// 00433cb5: CMP dword ptr [0x0066e800],0x0
//   Label: LAB_00433cb5
//   XREF to: 0066e800 (READ)
// 00433cbc: JNZ 0x00433d0a
//   XREF to: 00433d0a (CONDITIONAL_JUMP)
// 00433cbe: CMP ESI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00433cc4: JGE 0x00433cd5
//   XREF to: 00433cd5 (CONDITIONAL_JUMP)
// 00433cc6: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00433cc9: CMP EAX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00433ccf: JL 0x00433d50
//   XREF to: 00433d50 (CONDITIONAL_JUMP)
// 00433cd5: MOV ECX,dword ptr [0x02d02560]
//   Label: LAB_00433cd5
//   XREF to: 02d02560 (READ)
// 00433cdb: CMP ESI,ECX
// 00433cdd: JLE 0x00433ce8
//   XREF to: 00433ce8 (CONDITIONAL_JUMP)
// 00433cdf: CMP ECX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00433ce2: JL 0x00433d50
//   XREF to: 00433d50 (CONDITIONAL_JUMP)
// 00433ce8: CMP EBX,dword ptr [0x02d0255c]
//   Label: LAB_00433ce8
//   XREF to: 02d0255c (READ)
// 00433cee: JGE 0x00433cfb
//   XREF to: 00433cfb (CONDITIONAL_JUMP)
// 00433cf0: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00433cf3: CMP EAX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 00433cf9: JL 0x00433d50
//   XREF to: 00433d50 (CONDITIONAL_JUMP)
// 00433cfb: MOV ECX,dword ptr [0x02d02564]
//   Label: LAB_00433cfb
//   XREF to: 02d02564 (READ)
// 00433d01: CMP EBX,ECX
// 00433d03: JLE 0x00433d0a
//   XREF to: 00433d0a (CONDITIONAL_JUMP)
// 00433d05: CMP ECX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00433d08: JL 0x00433d50
//   XREF to: 00433d50 (CONDITIONAL_JUMP)
// 00433d0a: MOV EAX,dword ptr [EBP + 0x24]
//   Label: LAB_00433d0a
//   XREF to: Stack[0x14] (READ)
// 00433d0d: PUSH EAX
// 00433d0e: PUSH EBX
// 00433d0f: PUSH ESI
// 00433d10: CALL cockpit_ckptutil.c_putPixel_FUN_004345c0
//   XREF to: 004345c0 (UNCONDITIONAL_CALL)
// 00433d15: ADD ESP,0xc
// 00433d18: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00433d1b: SUB EAX,ESI
// 00433d1d: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00433d21: TEST EAX,EAX
// 00433d23: JL 0x00433d6b
//   XREF to: 00433d6b (CONDITIONAL_JUMP)
// 00433d25: MOV dword ptr [ESP + 0x24],0x1
//   XREF to: Stack[-0x1c] (WRITE)
// 00433d2d: MOV EAX,dword ptr [EBP + 0x20]
//   Label: LAB_00433d2d
//   XREF to: Stack[0x10] (READ)
// 00433d30: SUB EAX,EBX
// 00433d32: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00433d36: JNZ 0x00433d94
//   XREF to: 00433d94 (CONDITIONAL_JUMP)
// 00433d38: MOV EDI,0xffffffff
// 00433d3d: MOV ECX,dword ptr [ESP + 0x28]
//   Label: LAB_00433d3d
//   XREF to: Stack[-0x18] (READ)
// 00433d41: ADD ECX,EDI
// 00433d43: MOV dword ptr [ESP + 0x28],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 00433d47: CMP EDI,ECX
// 00433d49: JNZ 0x00433d7e
//   XREF to: 00433d7e (CONDITIONAL_JUMP)
// 00433d4b: LEA EAX,[EAX]
// 00433d4e: MOV ECX,ECX
// 00433d50: MOV ESP,EBP
//   Label: LAB_00433d50
// 00433d52: POP EBP
// 00433d53: POP EDI
// 00433d54: POP ESI
// 00433d55: POP EBX
// 00433d56: RET
// 00433d57: MOV EAX,EBX
//   Label: LAB_00433d57
// 00433d59: MOV EBX,ECX
// 00433d5b: MOV dword ptr [EBP + 0x20],EAX
//   XREF to: Stack[0x10] (WRITE)
// 00433d5e: MOV EAX,ESI
// 00433d60: MOV ESI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00433d63: MOV dword ptr [EBP + 0x1c],EAX
//   XREF to: Stack[0xc] (WRITE)
// 00433d66: JMP 0x00433cb5
//   XREF to: 00433cb5 (UNCONDITIONAL_JUMP)
// 00433d6b: MOV EDI,EAX
//   Label: LAB_00433d6b
// 00433d6d: MOV ECX,0xffffffff
// 00433d72: NEG EDI
// 00433d74: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 00433d78: MOV dword ptr [ESP + 0x28],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 00433d7c: JMP 0x00433d2d
//   XREF to: 00433d2d (UNCONDITIONAL_JUMP)
// 00433d7e: MOV ECX,dword ptr [EBP + 0x24]
//   Label: LAB_00433d7e
//   XREF to: Stack[0x14] (READ)
// 00433d81: PUSH ECX
// 00433d82: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x1c] (READ)
// 00433d86: PUSH EBX
// 00433d87: ADD ESI,EDX
// 00433d89: PUSH ESI
// 00433d8a: CALL cockpit_ckptutil.c_putPixel_FUN_004345c0
//   XREF to: 004345c0 (UNCONDITIONAL_CALL)
// 00433d8f: ADD ESP,0xc
// 00433d92: JMP 0x00433d3d
//   XREF to: 00433d3d (UNCONDITIONAL_JUMP)
// 00433d94: MOV ECX,dword ptr [ESP + 0x28]
//   Label: LAB_00433d94
//   XREF to: Stack[-0x18] (READ)
// 00433d98: TEST ECX,ECX
// 00433d9a: JNZ 0x00433dbd
//   XREF to: 00433dbd (CONDITIONAL_JUMP)
// 00433d9c: MOV EDI,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 00433d9f: PUSH EDI
//   Label: LAB_00433d9f
// 00433da0: INC EBX
// 00433da1: PUSH EBX
// 00433da2: PUSH ESI
// 00433da3: CALL cockpit_ckptutil.c_putPixel_FUN_004345c0
//   XREF to: 004345c0 (UNCONDITIONAL_CALL)
// 00433da8: ADD ESP,0xc
// 00433dab: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 00433daf: DEC EAX
// 00433db0: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00433db4: JNZ 0x00433d9f
//   XREF to: 00433d9f (CONDITIONAL_JUMP)
// 00433db6: MOV ESP,EBP
// 00433db8: POP EBP
// 00433db9: POP EDI
// 00433dba: POP ESI
// 00433dbb: POP EBX
// 00433dbc: RET
// 00433dbd: CMP ECX,EAX
//   Label: LAB_00433dbd
// 00433dbf: JNZ 0x00433de8
//   XREF to: 00433de8 (CONDITIONAL_JUMP)
// 00433dc1: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 00433dc5: MOV EAX,dword ptr [EBP + 0x24]
//   Label: LAB_00433dc5
//   XREF to: Stack[0x14] (READ)
// 00433dc8: PUSH EAX
// 00433dc9: INC EBX
// 00433dca: PUSH EBX
// 00433dcb: ADD ESI,EDI
// 00433dcd: PUSH ESI
// 00433dce: CALL cockpit_ckptutil.c_putPixel_FUN_004345c0
//   XREF to: 004345c0 (UNCONDITIONAL_CALL)
// 00433dd3: ADD ESP,0xc
// 00433dd6: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 00433dda: DEC EDX
// 00433ddb: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00433ddf: JNZ 0x00433dc5
//   XREF to: 00433dc5 (CONDITIONAL_JUMP)
// 00433de1: MOV ESP,EBP
// 00433de3: POP EBP
// 00433de4: POP EDI
// 00433de5: POP ESI
// 00433de6: POP EBX
// 00433de7: RET
// 00433de8: XOR EDI,EDI
//   Label: LAB_00433de8
// 00433dea: CMP ECX,EAX
// 00433dec: JLE 0x00433e89
//   XREF to: 00433e89 (CONDITIONAL_JUMP)
// 00433df2: SHL EAX,0x10
// 00433df5: XOR EDX,EDX
// 00433df7: DIV ECX
// 00433df9: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00433dfd: MOV ECX,dword ptr [ESP + 0x28]
//   Label: LAB_00433dfd
//   XREF to: Stack[-0x18] (READ)
// 00433e01: DEC ECX
// 00433e02: MOV dword ptr [ESP + 0x28],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 00433e06: JZ 0x00433f27
//   XREF to: 00433f27 (CONDITIONAL_JUMP)
// 00433e0c: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 00433e10: MOV EAX,EDI
// 00433e12: ADD EDI,EDX
// 00433e14: AND EDI,0xffff
// 00433e1a: CMP EDI,EAX
// 00433e1c: JBE 0x00433e86
//   XREF to: 00433e86 (CONDITIONAL_JUMP)
// 00433e1e: MOV EAX,EDI
//   Label: LAB_00433e1e
// 00433e20: XOR EDX,EDX
// 00433e22: SHR EAX,0x8
// 00433e25: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 00433e29: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00433e2d: FILD qword ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 00433e31: FLD1
// 00433e33: FADDP
// 00433e35: FLD float ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 00433e38: FMUL ST1
// 00433e3a: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 00433e3e: XOR AL,0xff
// 00433e40: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 00433e44: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00433e48: MOV EAX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 00433e4b: ADD ESI,ECX
// 00433e4d: PUSH EAX
// 00433e4e: FXCH
// 00433e50: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x34] (WRITE)
// 00433e54: PUSH dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x34] (READ)
// 00433e58: FILD qword ptr [ESP + 0xc]
//   XREF to: Stack[-0x3c] (READ)
// 00433e5c: PUSH EBX
// 00433e5d: FMULP
// 00433e5f: PUSH ESI
// 00433e60: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x30] (WRITE)
// 00433e64: CALL cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004342f0
//   XREF to: 004342f0 (UNCONDITIONAL_CALL)
// 00433e69: ADD ESP,0x10
// 00433e6c: MOV EDX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 00433e6f: PUSH EDX
// 00433e70: LEA EAX,[EBX + 0x1]
// 00433e73: PUSH dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x30] (READ)
// 00433e77: PUSH EAX
// 00433e78: PUSH ESI
// 00433e79: CALL cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004342f0
//   XREF to: 004342f0 (UNCONDITIONAL_CALL)
// 00433e7e: ADD ESP,0x10
// 00433e81: JMP 0x00433dfd
//   XREF to: 00433dfd (UNCONDITIONAL_JUMP)
// 00433e86: INC EBX
//   Label: LAB_00433e86
// 00433e87: JMP 0x00433e1e
//   XREF to: 00433e1e (UNCONDITIONAL_JUMP)
// 00433e89: MOV EAX,ECX
//   Label: LAB_00433e89
// 00433e8b: XOR EDX,EDX
// 00433e8d: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 00433e91: SHL EAX,0x10
// 00433e94: DIV ECX
// 00433e96: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00433e9a: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_00433e9a
//   XREF to: Stack[-0x14] (READ)
// 00433e9e: DEC EAX
// 00433e9f: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00433ea3: JZ 0x00433f27
//   XREF to: 00433f27 (CONDITIONAL_JUMP)
// 00433ea9: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 00433ead: MOV EAX,EDI
// 00433eaf: ADD EDI,ECX
// 00433eb1: AND EDI,0xffff
// 00433eb7: CMP EDI,EAX
// 00433eb9: JBE 0x00433f21
//   XREF to: 00433f21 (CONDITIONAL_JUMP)
// 00433ebb: MOV EAX,EDI
//   Label: LAB_00433ebb
// 00433ebd: XOR EDX,EDX
// 00433ebf: SHR EAX,0x8
// 00433ec2: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 00433ec6: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00433eca: FILD qword ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 00433ece: FLD1
// 00433ed0: FADDP
// 00433ed2: FLD float ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 00433ed5: FMUL ST1
// 00433ed7: XOR AL,0xff
// 00433ed9: INC EBX
// 00433eda: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00433ede: MOV EAX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 00433ee1: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 00433ee5: PUSH EAX
// 00433ee6: FXCH
// 00433ee8: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x2c] (WRITE)
// 00433eec: PUSH dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x2c] (READ)
// 00433ef0: FILD qword ptr [ESP + 0xc]
//   XREF to: Stack[-0x3c] (READ)
// 00433ef4: PUSH EBX
// 00433ef5: FMULP
// 00433ef7: PUSH ESI
// 00433ef8: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x28] (WRITE)
// 00433efc: CALL cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004342f0
//   XREF to: 004342f0 (UNCONDITIONAL_CALL)
// 00433f01: ADD ESP,0x10
// 00433f04: MOV EDX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 00433f07: PUSH EDX
// 00433f08: PUSH dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x28] (READ)
// 00433f0c: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x1c] (READ)
// 00433f10: PUSH EBX
// 00433f11: ADD EAX,ESI
// 00433f13: PUSH EAX
// 00433f14: CALL cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004342f0
//   XREF to: 004342f0 (UNCONDITIONAL_CALL)
// 00433f19: ADD ESP,0x10
// 00433f1c: JMP 0x00433e9a
//   XREF to: 00433e9a (UNCONDITIONAL_JUMP)
// 00433f21: ADD ESI,dword ptr [ESP + 0x24]
//   Label: LAB_00433f21
//   XREF to: Stack[-0x1c] (READ)
// 00433f25: JMP 0x00433ebb
//   XREF to: 00433ebb (UNCONDITIONAL_JUMP)
// 00433f27: MOV ECX,dword ptr [EBP + 0x24]
//   Label: LAB_00433f27
//   XREF to: Stack[0x14] (READ)
// 00433f2a: PUSH ECX
// 00433f2b: MOV EBX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00433f2e: PUSH EBX
// 00433f2f: MOV ESI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00433f32: PUSH ESI
// 00433f33: CALL cockpit_ckptutil.c_putPixel_FUN_004345c0
//   XREF to: 004345c0 (UNCONDITIONAL_CALL)
// 00433f38: ADD ESP,0xc
// 00433f3b: MOV ESP,EBP
// 00433f3d: POP EBP
// 00433f3e: POP EDI
// 00433f3f: POP ESI
// 00433f40: POP EBX
// 00433f41: RET
