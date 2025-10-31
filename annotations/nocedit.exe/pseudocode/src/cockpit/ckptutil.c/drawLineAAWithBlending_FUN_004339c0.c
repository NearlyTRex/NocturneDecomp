// Name: cockpit_ckptutil.c_drawLineAAWithBlending_FUN_004339c0
// Address: 004339c0
// Address Range: [[004339c0, 00433c82]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_drawLineAAWithBlending_FUN_004339c0(int x0, int y0, int x1, int y1, int base_color, uchar blend_color, int blend_mode)
// Cross-references:
//   cockpit_ckptutil.c_FUN_004338f0 (004338f0) at 00433997 [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_renderEdgeArrayWithBufferLookup_FUN_00433820 (00433820) at 004338c5 [UNCONDITIONAL_CALL]
// Globals:
//   int g_LineBlendingDisabled
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
// Function calls:
//   cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00433f50
//   cockpit_ckptutil.c_putPixel_FUN_004345c0

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_drawLineAAWithBlending_FUN_004339c0
          (int x0,int y0,int x1,int y1,int base_color,uchar blend_color,int blend_mode)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int local_2c;
  uint local_28;
  uint local_24;
  byte local_1c;
  byte local_18;
  
  if ((y0 <= y1) &&
     ((g_LineBlendingDisabled != 0 ||
      ((((g_ClipLeft <= x0 || (g_ClipLeft <= x1)) && ((x0 <= g_ClipRight || (x1 <= g_ClipRight))))
       && (((g_ClipTop <= y0 || (g_ClipTop <= y1)) && ((y0 <= g_ClipBottom || (y1 <= g_ClipBottom)))
           ))))))) {
    local_24 = x1 - x0;
    if ((int)local_24 < 0) {
      local_24 = -local_24;
      local_2c = -1;
    }
    else {
      local_2c = 1;
    }
    local_28 = y1 - y0;
    local_1c = (byte)base_color;
    if (local_28 == 0) {
      while (local_24 = local_24 - 1, local_24 != 0) {
        x0 = x0 + local_2c;
        cockpit_ckptutil_c_putPixel_FUN_004345c0(x0,y0,base_color & 0xff);
      }
    }
    else {
      if (local_24 == 0) {
        do {
          y0 = y0 + 1;
          cockpit_ckptutil_c_putPixel_FUN_004345c0(x0,y0,base_color & 0xff);
          local_24 = local_24 - 1;
        } while (local_24 != 1);
        return;
      }
      if ((int)local_28 < (int)local_24) {
        local_18 = local_1c;
        if (blend_mode != 0) {
          local_18 = blend_color;
        }
        uVar2 = (local_28 * 0x10000) / local_24;
        uVar4 = 0;
        while (local_24 = local_24 - 1, local_24 != 0) {
          uVar3 = uVar4 + uVar2 & 0xffff;
          if (uVar3 <= uVar4) {
            y0 = y0 + 1;
          }
          x0 = x0 + local_2c;
          uVar4 = uVar3;
          if (blend_mode == 0) {
            cockpit_ckptutil_c_blendPixelWithHardwarePalette_FUN_00433f50
                      (x0,y0,((float)(uVar3 >> 8) + 1.0) * 0.00390625,(uint)local_18);
          }
          else {
            cockpit_ckptutil_c_blendPixelWithHardwarePalette_FUN_00433f50
                      (x0,y0 + 1,(float)(uVar3 >> 8 ^ 0xff) * 0.00390625,(uint)local_18);
          }
        }
      }
      else {
        if (((blend_mode == 0) && (local_2c == 1)) || ((blend_mode == 1 && (local_2c == -1)))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) {
          local_1c = blend_color;
        }
        uVar2 = (local_24 << 0x10) / local_28;
        uVar4 = 0;
        while (local_28 = local_28 - 1, local_28 != 0) {
          uVar3 = uVar4 + uVar2 & 0xffff;
          if (uVar3 <= uVar4) {
            x0 = x0 + local_2c;
          }
          y0 = y0 + 1;
          uVar4 = uVar3;
          if (bVar1) {
            cockpit_ckptutil_c_blendPixelWithHardwarePalette_FUN_00433f50
                      (x0,y0,((float)(uVar3 >> 8) + 1.0) * 0.00390625,(uint)local_1c);
          }
          else {
            cockpit_ckptutil_c_blendPixelWithHardwarePalette_FUN_00433f50
                      (local_2c + x0,y0,(float)(uVar3 >> 8 ^ 0xff) * 0.00390625,(uint)local_1c);
          }
        }
      }
    }
  }
  return;
}


// Assembly code:
// 004339c0: PUSH EBX
//   Label: cockpit_ckptutil.c_drawLineAAWithBlending_FUN_004339c0
// 004339c1: PUSH ESI
// 004339c2: PUSH EDI
// 004339c3: PUSH EBP
// 004339c4: MOV EBP,ESP
// 004339c6: SUB ESP,0x3c
// 004339c9: AND ESP,0xfffffff8
// 004339cc: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004339cf: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004339d2: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004339d5: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004339d8: MOV EDX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 004339db: MOV dword ptr [ESP],0x3b800000
//   XREF to: Stack[-0x50] (DATA)
// 004339e2: CMP ESI,EAX
// 004339e4: JG 0x00433a60
//   XREF to: 00433a60 (CONDITIONAL_JUMP)
// 004339ea: CMP dword ptr [0x00824e20],0x0
//   XREF to: 00824e20 (READ)
// 004339f1: JNZ 0x00433a2f
//   XREF to: 00433a2f (CONDITIONAL_JUMP)
// 004339f3: MOV ECX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004339f9: CMP EDI,ECX
// 004339fb: JGE 0x00433a05
//   XREF to: 00433a05 (CONDITIONAL_JUMP)
// 004339fd: CMP EBX,ECX
// 004339ff: JL 0x00433a60
//   XREF to: 00433a60 (CONDITIONAL_JUMP)
// 00433a05: MOV ECX,dword ptr [0x02d02560]
//   Label: LAB_00433a05
//   XREF to: 02d02560 (READ)
// 00433a0b: CMP EDI,ECX
// 00433a0d: JLE 0x00433a13
//   XREF to: 00433a13 (CONDITIONAL_JUMP)
// 00433a0f: CMP EBX,ECX
// 00433a11: JG 0x00433a60
//   XREF to: 00433a60 (CONDITIONAL_JUMP)
// 00433a13: MOV ECX,dword ptr [0x02d0255c]
//   Label: LAB_00433a13
//   XREF to: 02d0255c (READ)
// 00433a19: CMP ESI,ECX
// 00433a1b: JGE 0x00433a21
//   XREF to: 00433a21 (CONDITIONAL_JUMP)
// 00433a1d: CMP EAX,ECX
// 00433a1f: JL 0x00433a60
//   XREF to: 00433a60 (CONDITIONAL_JUMP)
// 00433a21: MOV ECX,dword ptr [0x02d02564]
//   Label: LAB_00433a21
//   XREF to: 02d02564 (READ)
// 00433a27: CMP ESI,ECX
// 00433a29: JLE 0x00433a2f
//   XREF to: 00433a2f (CONDITIONAL_JUMP)
// 00433a2b: CMP EAX,ECX
// 00433a2d: JG 0x00433a60
//   XREF to: 00433a60 (CONDITIONAL_JUMP)
// 00433a2f: SUB EBX,EDI
//   Label: LAB_00433a2f
// 00433a31: MOV dword ptr [ESP + 0x2c],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 00433a35: TEST EBX,EBX
// 00433a37: JL 0x00433a67
//   XREF to: 00433a67 (CONDITIONAL_JUMP)
// 00433a39: MOV dword ptr [ESP + 0x24],0x1
//   XREF to: Stack[-0x2c] (WRITE)
// 00433a41: SUB EAX,ESI
//   Label: LAB_00433a41
// 00433a43: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00433a47: JNZ 0x00433a8d
//   XREF to: 00433a8d (CONDITIONAL_JUMP)
// 00433a49: MOV BL,DL
// 00433a4b: MOV EDX,dword ptr [ESP + 0x2c]
//   Label: LAB_00433a4b
//   XREF to: Stack[-0x24] (READ)
// 00433a4f: DEC EDX
// 00433a50: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 00433a54: JNZ 0x00433a78
//   XREF to: 00433a78 (CONDITIONAL_JUMP)
// 00433a56: LEA EAX,[EAX]
// 00433a5c: LEA EDX,[EDX]
// 00433a60: MOV ESP,EBP
//   Label: LAB_00433a60
// 00433a62: POP EBP
// 00433a63: POP EDI
// 00433a64: POP ESI
// 00433a65: POP EBX
// 00433a66: RET
// 00433a67: NEG EBX
//   Label: LAB_00433a67
// 00433a69: MOV ECX,0xffffffff
// 00433a6e: MOV dword ptr [ESP + 0x2c],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 00433a72: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 00433a76: JMP 0x00433a41
//   XREF to: 00433a41 (UNCONDITIONAL_JUMP)
// 00433a78: ADD EDI,dword ptr [ESP + 0x24]
//   Label: LAB_00433a78
//   XREF to: Stack[-0x2c] (READ)
// 00433a7c: XOR EAX,EAX
// 00433a7e: MOV AL,BL
// 00433a80: PUSH EAX
// 00433a81: PUSH ESI
// 00433a82: PUSH EDI
// 00433a83: CALL cockpit_ckptutil.c_putPixel_FUN_004345c0
//   XREF to: 004345c0 (UNCONDITIONAL_CALL)
// 00433a88: ADD ESP,0xc
// 00433a8b: JMP 0x00433a4b
//   XREF to: 00433a4b (UNCONDITIONAL_JUMP)
// 00433a8d: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_00433a8d
//   XREF to: Stack[-0x24] (READ)
// 00433a91: TEST EAX,EAX
// 00433a93: JNZ 0x00433abc
//   XREF to: 00433abc (CONDITIONAL_JUMP)
// 00433a95: MOV BL,DL
// 00433a97: XOR EAX,EAX
//   Label: LAB_00433a97
// 00433a99: MOV AL,BL
// 00433a9b: PUSH EAX
// 00433a9c: INC ESI
// 00433a9d: PUSH ESI
// 00433a9e: PUSH EDI
// 00433a9f: CALL cockpit_ckptutil.c_putPixel_FUN_004345c0
//   XREF to: 004345c0 (UNCONDITIONAL_CALL)
// 00433aa4: ADD ESP,0xc
// 00433aa7: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x28] (READ)
// 00433aab: DEC ECX
// 00433aac: MOV dword ptr [ESP + 0x28],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 00433ab0: CMP ECX,0x1
// 00433ab3: JNZ 0x00433a97
//   XREF to: 00433a97 (CONDITIONAL_JUMP)
// 00433ab5: MOV ESP,EBP
// 00433ab7: POP EBP
// 00433ab8: POP EDI
// 00433ab9: POP ESI
// 00433aba: POP EBX
// 00433abb: RET
// 00433abc: MOV ECX,dword ptr [ESP + 0x28]
//   Label: LAB_00433abc
//   XREF to: Stack[-0x28] (READ)
// 00433ac0: XOR EBX,EBX
// 00433ac2: CMP EAX,ECX
// 00433ac4: JLE 0x00433b8a
//   XREF to: 00433b8a (CONDITIONAL_JUMP)
// 00433aca: CMP dword ptr [EBP + 0x2c],0x0
//   XREF to: Stack[0x1c] (READ)
// 00433ace: JNZ 0x00433b4d
//   XREF to: 00433b4d (CONDITIONAL_JUMP)
// 00433ad4: MOV byte ptr [ESP + 0x38],DL
//   XREF to: Stack[-0x18] (WRITE)
// 00433ad8: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_00433ad8
//   XREF to: Stack[-0x28] (READ)
// 00433adc: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x24] (READ)
// 00433ae0: XOR EDX,EDX
// 00433ae2: SHL EAX,0x10
// 00433ae5: DIV ECX
// 00433ae7: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00433aeb: MOV ECX,dword ptr [ESP + 0x2c]
//   Label: LAB_00433aeb
//   XREF to: Stack[-0x24] (READ)
// 00433aef: DEC ECX
// 00433af0: MOV dword ptr [ESP + 0x2c],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 00433af4: JZ 0x00433a60
//   XREF to: 00433a60 (CONDITIONAL_JUMP)
// 00433afa: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x30] (READ)
// 00433afe: MOV EAX,EBX
// 00433b00: ADD EBX,EDX
// 00433b02: AND EBX,0xffff
// 00433b08: CMP EBX,EAX
// 00433b0a: JA 0x00433b0d
//   XREF to: 00433b0d (CONDITIONAL_JUMP)
// 00433b0c: INC ESI
// 00433b0d: MOV ECX,dword ptr [ESP + 0x24]
//   Label: LAB_00433b0d
//   XREF to: Stack[-0x2c] (READ)
// 00433b11: MOV EAX,EBX
// 00433b13: MOV EDX,dword ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 00433b16: SHR EAX,0x8
// 00433b19: ADD EDI,ECX
// 00433b1b: TEST EDX,EDX
// 00433b1d: JNZ 0x00433b56
//   XREF to: 00433b56 (CONDITIONAL_JUMP)
// 00433b1f: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x48] (WRITE)
// 00433b23: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00433b27: FILD qword ptr [ESP + 0x4]
//   XREF to: Stack[-0x4c] (READ)
// 00433b2b: FLD1
// 00433b2d: XOR EAX,EAX
// 00433b2f: FADDP
// 00433b31: MOV AL,byte ptr [ESP + 0x38]
//   XREF to: Stack[-0x18] (READ)
// 00433b35: FMUL float ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 00433b38: PUSH EAX
// 00433b39: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x44] (WRITE)
// 00433b3d: PUSH dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x44] (READ)
// 00433b41: PUSH ESI
// 00433b42: PUSH EDI
// 00433b43: CALL cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00433f50
//   XREF to: 00433f50 (UNCONDITIONAL_CALL)
// 00433b48: ADD ESP,0x10
// 00433b4b: JMP 0x00433aeb
//   XREF to: 00433aeb (UNCONDITIONAL_JUMP)
// 00433b4d: MOV AL,byte ptr [EBP + 0x28]
//   Label: LAB_00433b4d
//   XREF to: Stack[0x18] (READ)
// 00433b50: MOV byte ptr [ESP + 0x38],AL
//   XREF to: Stack[-0x18] (WRITE)
// 00433b54: JMP 0x00433ad8
//   XREF to: 00433ad8 (UNCONDITIONAL_JUMP)
// 00433b56: XOR ECX,ECX
//   Label: LAB_00433b56
// 00433b58: XOR AL,0xff
// 00433b5a: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x48] (WRITE)
// 00433b5e: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00433b62: XOR EAX,EAX
// 00433b64: FILD qword ptr [ESP + 0x4]
//   XREF to: Stack[-0x4c] (READ)
// 00433b68: MOV AL,byte ptr [ESP + 0x38]
//   XREF to: Stack[-0x18] (READ)
// 00433b6c: FMUL float ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 00433b6f: PUSH EAX
// 00433b70: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x20] (WRITE)
// 00433b74: LEA EAX,[ESI + 0x1]
// 00433b77: PUSH dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x20] (READ)
// 00433b7b: PUSH EAX
// 00433b7c: PUSH EDI
// 00433b7d: CALL cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00433f50
//   XREF to: 00433f50 (UNCONDITIONAL_CALL)
// 00433b82: ADD ESP,0x10
// 00433b85: JMP 0x00433aeb
//   XREF to: 00433aeb (UNCONDITIONAL_JUMP)
// 00433b8a: CMP dword ptr [EBP + 0x2c],0x0
//   Label: LAB_00433b8a
//   XREF to: Stack[0x1c] (READ)
// 00433b8e: JNZ 0x00433c2a
//   XREF to: 00433c2a (CONDITIONAL_JUMP)
// 00433b94: CMP dword ptr [ESP + 0x24],0x1
//   XREF to: Stack[-0x2c] (READ)
// 00433b99: JNZ 0x00433c2a
//   XREF to: 00433c2a (CONDITIONAL_JUMP)
// 00433b9f: MOV EAX,0x1
//   Label: LAB_00433b9f
// 00433ba4: MOV dword ptr [ESP + 0x18],EAX
//   Label: LAB_00433ba4
//   XREF to: Stack[-0x38] (WRITE)
// 00433ba8: TEST EAX,EAX
// 00433baa: JZ 0x00433c42
//   XREF to: 00433c42 (CONDITIONAL_JUMP)
// 00433bb0: MOV byte ptr [ESP + 0x34],DL
//   XREF to: Stack[-0x1c] (WRITE)
// 00433bb4: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_00433bb4
//   XREF to: Stack[-0x24] (READ)
// 00433bb8: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x28] (READ)
// 00433bbc: XOR EDX,EDX
// 00433bbe: SHL EAX,0x10
// 00433bc1: DIV ECX
// 00433bc3: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00433bc7: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_00433bc7
//   XREF to: Stack[-0x28] (READ)
// 00433bcb: DEC EAX
// 00433bcc: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00433bd0: JZ 0x00433a60
//   XREF to: 00433a60 (CONDITIONAL_JUMP)
// 00433bd6: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x34] (READ)
// 00433bda: MOV EAX,EBX
// 00433bdc: ADD EBX,ECX
// 00433bde: AND EBX,0xffff
// 00433be4: CMP EBX,EAX
// 00433be6: JA 0x00433bec
//   XREF to: 00433bec (CONDITIONAL_JUMP)
// 00433be8: ADD EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x2c] (READ)
// 00433bec: MOV EDX,dword ptr [ESP + 0x18]
//   Label: LAB_00433bec
//   XREF to: Stack[-0x38] (READ)
// 00433bf0: MOV EAX,EBX
// 00433bf2: INC ESI
// 00433bf3: SHR EAX,0x8
// 00433bf6: TEST EDX,EDX
// 00433bf8: JZ 0x00433c4e
//   XREF to: 00433c4e (CONDITIONAL_JUMP)
// 00433bfa: XOR EDX,EDX
// 00433bfc: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00433c00: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x48] (WRITE)
// 00433c04: XOR EAX,EAX
// 00433c06: FILD qword ptr [ESP + 0x4]
//   XREF to: Stack[-0x4c] (READ)
// 00433c0a: FLD1
// 00433c0c: FADDP
// 00433c0e: MOV AL,byte ptr [ESP + 0x34]
//   XREF to: Stack[-0x1c] (READ)
// 00433c12: FMUL float ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 00433c15: PUSH EAX
// 00433c16: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x40] (WRITE)
// 00433c1a: PUSH dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x40] (READ)
// 00433c1e: PUSH ESI
// 00433c1f: PUSH EDI
// 00433c20: CALL cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00433f50
//   XREF to: 00433f50 (UNCONDITIONAL_CALL)
// 00433c25: ADD ESP,0x10
// 00433c28: JMP 0x00433bc7
//   XREF to: 00433bc7 (UNCONDITIONAL_JUMP)
// 00433c2a: CMP dword ptr [EBP + 0x2c],0x1
//   Label: LAB_00433c2a
//   XREF to: Stack[0x1c] (READ)
// 00433c2e: JNZ 0x00433c3b
//   XREF to: 00433c3b (CONDITIONAL_JUMP)
// 00433c30: CMP dword ptr [ESP + 0x24],-0x1
//   XREF to: Stack[-0x2c] (READ)
// 00433c35: JZ 0x00433b9f
//   XREF to: 00433b9f (CONDITIONAL_JUMP)
// 00433c3b: XOR EAX,EAX
//   Label: LAB_00433c3b
// 00433c3d: JMP 0x00433ba4
//   XREF to: 00433ba4 (UNCONDITIONAL_JUMP)
// 00433c42: MOV AL,byte ptr [EBP + 0x28]
//   Label: LAB_00433c42
//   XREF to: Stack[0x18] (READ)
// 00433c45: MOV byte ptr [ESP + 0x34],AL
//   XREF to: Stack[-0x1c] (WRITE)
// 00433c49: JMP 0x00433bb4
//   XREF to: 00433bb4 (UNCONDITIONAL_JUMP)
// 00433c4e: XOR AL,0xff
//   Label: LAB_00433c4e
// 00433c50: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x48] (WRITE)
// 00433c54: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00433c58: XOR EAX,EAX
// 00433c5a: FILD qword ptr [ESP + 0x4]
//   XREF to: Stack[-0x4c] (READ)
// 00433c5e: MOV AL,byte ptr [ESP + 0x34]
//   XREF to: Stack[-0x1c] (READ)
// 00433c62: FMUL float ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 00433c65: PUSH EAX
// 00433c66: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x3c] (WRITE)
// 00433c6a: PUSH dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x3c] (READ)
// 00433c6e: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x2c] (READ)
// 00433c72: PUSH ESI
// 00433c73: ADD EAX,EDI
// 00433c75: PUSH EAX
// 00433c76: CALL cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00433f50
//   XREF to: 00433f50 (UNCONDITIONAL_CALL)
// 00433c7b: ADD ESP,0x10
// 00433c7e: JMP 0x00433bc7
//   XREF to: 00433bc7 (UNCONDITIONAL_JUMP)
