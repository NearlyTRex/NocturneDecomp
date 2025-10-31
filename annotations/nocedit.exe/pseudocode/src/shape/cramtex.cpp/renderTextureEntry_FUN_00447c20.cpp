// Name: shape_cramtex.cpp_renderTextureEntry_FUN_00447c20
// Address: 00447c20
// Address Range: [[00447c20, 00447e7d]]
// Convention: __cdecl
// Signature: void shape_cramtex.cpp_renderTextureEntry_FUN_00447c20(SCramWorkingEntry * texture_entry, int visualization_mode, int draw_x, int draw_y, int draw_width, int draw_height)
// Cross-references:
//   shape_cramtex.cpp_renderAllTexturesAndRectangles_FUN_00447ab0 (00447ab0) at 00447b27 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20 (00447f20) at 004480e5 [UNCONDITIONAL_CALL]
// Globals:
//   int g_CramPaddingCalculation
//   int g_CramCurrentAcceptableSize
//   int g_CramMapNumber
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   engine_2d.c_fillRectColor_FUN_00403170

#include "nocturne.h"

void __cdecl
shape_cramtex_cpp_renderTextureEntry_FUN_00447c20
          (SCramWorkingEntry *texture_entry,int visualization_mode,int draw_x,int draw_y,
          int draw_width,int draw_height)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int y1;
  int iVar4;
  int unaff_EBP;
  int iVar5;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int iStack_10;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x48);
  if (draw_x == 0) {
    if (g_CramMapNumber != *(int *)(visualization_mode + 0x10)) {
      return;
    }
    iStack_10 = *(int *)(visualization_mode + 0x24);
    iVar4 = *(int *)(visualization_mode + 0x20);
    iVar2 = *(int *)(visualization_mode + 0x28);
    iVar5 = *(int *)(visualization_mode + 0x1c);
  }
  else {
    if (g_CramMapNumber != *(int *)(visualization_mode + 0x2c)) {
      return;
    }
    iStack_10 = *(int *)(visualization_mode + 0x38);
    iVar4 = *(int *)(visualization_mode + 0x34);
    iVar2 = *(int *)(visualization_mode + 0x3c);
    iVar5 = *(int *)(visualization_mode + 0x30);
  }
  y1 = draw_width + ((in_stack_00000020 - draw_width) * iVar4) / g_CramCurrentAcceptableSize;
  iVar3 = (iStack_10 * (draw_height - draw_y)) / g_CramCurrentAcceptableSize + draw_y;
  engine_2d_c_fillRectColor_FUN_00403170
            (((draw_height - draw_y) * iVar5) / g_CramCurrentAcceptableSize + draw_y,y1,iVar3 + -1,
             (iVar2 * (in_stack_00000020 - draw_width)) / g_CramCurrentAcceptableSize + draw_width +
             -1,0xf8);
  iVar1 = g_CramPaddingCalculation / 2;
  iVar5 = (y1 * (iVar5 + iVar1)) / g_CramCurrentAcceptableSize + draw_y;
  iVar4 = draw_height + (iVar3 * (iVar4 + iVar1)) / g_CramCurrentAcceptableSize;
  engine_2d_c_fillRectColor_FUN_00403170
            (iVar5,iVar4,((iVar2 - iVar1) * y1) / g_CramCurrentAcceptableSize + draw_y + -1,
             ((unaff_EBP - iVar1) * iVar3) / g_CramCurrentAcceptableSize + draw_height + -1,2);
  if (draw_width != 0) {
    if (*(int *)(visualization_mode + 0x44) == 0) {
      iVar2 = *(int *)visualization_mode;
    }
    else {
      iVar2 = *(int *)(visualization_mode + 4);
    }
    if (*(int *)(visualization_mode + 0x44) == 0) {
      iVar3 = *(int *)(visualization_mode + 4);
    }
    else {
      iVar3 = *(int *)visualization_mode;
    }
    engine_2d_c_fillRectColor_FUN_00403170
              (iVar5,iVar4,
               draw_y + ((in_stack_00000024 - draw_y) *
                        ((g_CramPaddingCalculation + iVar2 + *(int *)(visualization_mode + 0x30)) -
                        g_CramPaddingCalculation / 2)) / g_CramCurrentAcceptableSize + -1,
               ((in_stack_00000028 - in_stack_00000020) *
               ((g_CramPaddingCalculation + iVar3 + *(int *)(visualization_mode + 0x34)) -
               g_CramPaddingCalculation / 2)) / g_CramCurrentAcceptableSize + in_stack_00000020 + -1
               ,0xfa);
  }
  return;
}


// Assembly code:
// 00447c20: PUSH 0x48
//   Label: shape_cramtex.cpp_renderTextureEntry_FUN_00447c20
// 00447c25: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 00447c2a: PUSH EBX
// 00447c2b: PUSH ESI
// 00447c2c: PUSH EDI
// 00447c2d: PUSH EBP
// 00447c2e: SUB ESP,0x20
// 00447c31: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 00447c35: MOV EBP,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0xc] (READ)
// 00447c39: CMP dword ptr [ESP + 0x38],0x0
//   XREF to: Stack[0x8] (READ)
// 00447c3e: JZ 0x00447e4f
//   XREF to: 00447e4f (CONDITIONAL_JUMP)
// 00447c44: MOV ESI,dword ptr [0x0084a890]
//   XREF to: 0084a890 (READ)
// 00447c4a: CMP ESI,dword ptr [EBX + 0x2c]
// 00447c4d: JNZ 0x00447e47
//   XREF to: 00447e47 (CONDITIONAL_JUMP)
// 00447c53: MOV EAX,dword ptr [EBX + 0x38]
// 00447c56: MOV ESI,dword ptr [EBX + 0x34]
// 00447c59: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00447c5d: MOV EAX,dword ptr [EBX + 0x3c]
// 00447c60: MOV EDI,dword ptr [EBX + 0x30]
// 00447c63: MOV dword ptr [ESP + 0x1c],EAX
//   Label: LAB_00447c63
//   XREF to: Stack[-0x14] (WRITE)
// 00447c67: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x14] (READ)
// 00447c6b: SUB EAX,EBP
// 00447c6d: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x30] (DATA)
// 00447c70: IMUL EAX,EDI
// 00447c73: MOV EDX,EAX
// 00447c75: MOV ECX,dword ptr [0x0084a884]
//   XREF to: 0084a884 (READ)
// 00447c7b: SAR EDX,0x1f
// 00447c7e: IDIV ECX
// 00447c80: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x10] (READ)
// 00447c84: LEA ECX,[EAX + EBP*0x1]
// 00447c87: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x18] (READ)
// 00447c8b: SUB EAX,EDX
// 00447c8d: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00447c91: IMUL EAX,ESI
// 00447c94: MOV EDX,EAX
// 00447c96: SAR EDX,0x1f
// 00447c99: IDIV dword ptr [0x0084a884]
//   XREF to: 0084a884 (READ)
// 00447c9f: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x10] (READ)
// 00447ca3: ADD EDX,EAX
// 00447ca5: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 00447ca8: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 00447cac: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 00447cb0: IMUL EDX,EAX
// 00447cb3: MOV EAX,EDX
// 00447cb5: SAR EDX,0x1f
// 00447cb8: IDIV dword ptr [0x0084a884]
//   XREF to: 0084a884 (READ)
// 00447cbe: LEA EDX,[EAX + EBP*0x1]
// 00447cc1: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 00447cc5: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 00447cc9: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 00447ccd: IMUL EDX,EAX
// 00447cd0: MOV EAX,EDX
// 00447cd2: SAR EDX,0x1f
// 00447cd5: IDIV dword ptr [0x0084a884]
//   XREF to: 0084a884 (READ)
// 00447cdb: ADD EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x10] (READ)
// 00447cdf: PUSH 0xf8
// 00447ce4: DEC EAX
// 00447ce5: PUSH EAX
// 00447ce6: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 00447cea: DEC EAX
// 00447ceb: PUSH EAX
// 00447cec: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x2c] (READ)
// 00447cf0: PUSH EAX
// 00447cf1: PUSH ECX
// 00447cf2: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 00447cf7: MOV EAX,[0x0084a880]
//   XREF to: 0084a880 (READ)
// 00447cfc: MOV EDX,EAX
// 00447cfe: SAR EDX,0x1f
// 00447d01: SUB EAX,EDX
// 00447d03: SAR EAX,0x1
// 00447d05: ADD ESP,0x14
// 00447d08: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 00447d0c: SUB EDX,EAX
// 00447d0e: ADD EDI,EAX
// 00447d10: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00447d14: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 00447d17: IMUL EDX,EDI
// 00447d1a: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 00447d1e: ADD ESI,EAX
// 00447d20: SUB ECX,EAX
// 00447d22: MOV EDI,dword ptr [0x0084a884]
//   XREF to: 0084a884 (READ)
// 00447d28: MOV EAX,EDX
// 00447d2a: SAR EDX,0x1f
// 00447d2d: IDIV EDI
// 00447d2f: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 00447d33: IMUL EDX,ESI
// 00447d36: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00447d3a: LEA ECX,[EAX + EBP*0x1]
// 00447d3d: MOV ESI,dword ptr [0x0084a884]
//   XREF to: 0084a884 (READ)
// 00447d43: MOV EAX,EDX
// 00447d45: SAR EDX,0x1f
// 00447d48: IDIV ESI
// 00447d4a: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x10] (READ)
// 00447d4e: ADD EDX,EAX
// 00447d50: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 00447d53: MOV ESI,EDX
// 00447d55: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 00447d59: IMUL EDX,EAX
// 00447d5c: MOV EAX,EDX
// 00447d5e: SAR EDX,0x1f
// 00447d61: IDIV dword ptr [0x0084a884]
//   XREF to: 0084a884 (READ)
// 00447d67: LEA EDX,[EAX + EBP*0x1]
// 00447d6a: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 00447d6e: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00447d72: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 00447d76: IMUL EDX,EAX
// 00447d79: MOV EAX,EDX
// 00447d7b: SAR EDX,0x1f
// 00447d7e: IDIV dword ptr [0x0084a884]
//   XREF to: 0084a884 (READ)
// 00447d84: ADD EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x10] (READ)
// 00447d88: PUSH 0x2
// 00447d8a: DEC EAX
// 00447d8b: PUSH EAX
// 00447d8c: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (READ)
// 00447d90: DEC EAX
// 00447d91: PUSH EAX
// 00447d92: MOV EAX,ESI
// 00447d94: PUSH EAX
// 00447d95: PUSH ECX
// 00447d96: MOV EDI,ECX
// 00447d98: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 00447d9d: ADD ESP,0x14
// 00447da0: CMP dword ptr [ESP + 0x38],0x0
//   XREF to: Stack[0x8] (READ)
// 00447da5: JZ 0x00447e47
//   XREF to: 00447e47 (CONDITIONAL_JUMP)
// 00447dab: CMP dword ptr [EBX + 0x44],0x0
// 00447daf: JZ 0x00447e6f
//   XREF to: 00447e6f (CONDITIONAL_JUMP)
// 00447db5: MOV EAX,dword ptr [EBX + 0x4]
// 00447db8: MOV EDX,dword ptr [EBX + 0x30]
//   Label: LAB_00447db8
// 00447dbb: MOV ECX,dword ptr [0x0084a880]
//   XREF to: 0084a880 (READ)
// 00447dc1: ADD EAX,EDX
// 00447dc3: ADD ECX,EAX
// 00447dc5: MOV EAX,[0x0084a880]
//   XREF to: 0084a880 (READ)
// 00447dca: MOV EDX,EAX
// 00447dcc: SAR EDX,0x1f
// 00447dcf: SUB EAX,EDX
// 00447dd1: SAR EAX,0x1
// 00447dd3: SUB ECX,EAX
// 00447dd5: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 00447dd9: CMP dword ptr [EBX + 0x44],0x0
// 00447ddd: JZ 0x00447e76
//   XREF to: 00447e76 (CONDITIONAL_JUMP)
// 00447de3: MOV EAX,dword ptr [EBX]
// 00447de5: MOV EDX,dword ptr [EBX + 0x34]
//   Label: LAB_00447de5
// 00447de8: MOV ECX,dword ptr [0x0084a880]
//   XREF to: 0084a880 (READ)
// 00447dee: ADD EAX,EDX
// 00447df0: ADD ECX,EAX
// 00447df2: MOV EAX,[0x0084a880]
//   XREF to: 0084a880 (READ)
// 00447df7: MOV EDX,EAX
// 00447df9: SAR EDX,0x1f
// 00447dfc: SUB EAX,EDX
// 00447dfe: SAR EAX,0x1
// 00447e00: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x14] (READ)
// 00447e04: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 00447e08: SUB EDX,EBP
// 00447e0a: IMUL EDX,EBX
// 00447e0d: SUB ECX,EAX
// 00447e0f: MOV EBX,dword ptr [0x0084a884]
//   XREF to: 0084a884 (READ)
// 00447e15: MOV EAX,EDX
// 00447e17: SAR EDX,0x1f
// 00447e1a: IDIV EBX
// 00447e1c: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x18] (READ)
// 00447e20: ADD EBP,EAX
// 00447e22: SUB EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x10] (READ)
// 00447e26: IMUL EDX,ECX
// 00447e29: MOV EAX,EDX
// 00447e2b: SAR EDX,0x1f
// 00447e2e: IDIV EBX
// 00447e30: ADD EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x10] (READ)
// 00447e34: PUSH 0xfa
// 00447e39: DEC EAX
// 00447e3a: PUSH EAX
// 00447e3b: DEC EBP
// 00447e3c: PUSH EBP
// 00447e3d: PUSH ESI
// 00447e3e: PUSH EDI
// 00447e3f: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 00447e44: ADD ESP,0x14
// 00447e47: ADD ESP,0x20
//   Label: LAB_00447e47
// 00447e4a: POP EBP
// 00447e4b: POP EDI
// 00447e4c: POP ESI
// 00447e4d: POP EBX
// 00447e4e: RET
// 00447e4f: MOV ECX,dword ptr [0x0084a890]
//   Label: LAB_00447e4f
//   XREF to: 0084a890 (READ)
// 00447e55: CMP ECX,dword ptr [EBX + 0x10]
// 00447e58: JNZ 0x00447e47
//   XREF to: 00447e47 (CONDITIONAL_JUMP)
// 00447e5a: MOV EAX,dword ptr [EBX + 0x24]
// 00447e5d: MOV ESI,dword ptr [EBX + 0x20]
// 00447e60: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00447e64: MOV EAX,dword ptr [EBX + 0x28]
// 00447e67: MOV EDI,dword ptr [EBX + 0x1c]
// 00447e6a: JMP 0x00447c63
//   XREF to: 00447c63 (UNCONDITIONAL_JUMP)
// 00447e6f: MOV EAX,dword ptr [EBX]
//   Label: LAB_00447e6f
// 00447e71: JMP 0x00447db8
//   XREF to: 00447db8 (UNCONDITIONAL_JUMP)
// 00447e76: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_00447e76
// 00447e79: JMP 0x00447de5
//   XREF to: 00447de5 (UNCONDITIONAL_JUMP)
