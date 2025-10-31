// Name: shape_cramtex.cpp_renderAllTexturesAndRectangles_FUN_00447ab0
// Address: 00447ab0
// Address Range: [[00447ab0, 00447c15]]
// Convention: __cdecl
// Signature: void shape_cramtex.cpp_renderAllTexturesAndRectangles_FUN_00447ab0(int x, int y, int width, int height, int render_mode)
// Globals:
//   SCramWorkingEntry[1] g_CramSortedTextureEntries
//   undefined4 DAT_0083c228
//   SCramRectangle[50] g_CramRectangles
//   undefined4 DAT_00840c18
//   undefined4 DAT_00840c1c
//   undefined4 DAT_00840c38
//   undefined4 DAT_00840c3c
//   undefined4 DAT_00840c40
//   undefined4 DAT_00840c44
//   undefined4 DAT_00840c60
//   uint g_CramTextureCount
//   int g_CramPlacedTextureCount
//   int g_CramRectangleCount
//   int g_CramCurrentAcceptableSize
//   int g_CramMapNumber
//   int g_CramVisualizationFlag
//   int g_ActiveRenderColor
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   engine_2d.c_fillRectColor_FUN_00403170
//   engine_2d.c_plotPixel_FUN_00401140
//   shape_cramtex.cpp_renderTextureEntry_FUN_00447c20

#include "nocturne.h"

void __cdecl
shape_cramtex_cpp_renderAllTexturesAndRectangles_FUN_00447ab0
          (int x,int y,int width,int height,int render_mode)

{
  uint uVar1;
  int iVar2;
  int y_00;
  int iVar3;
  SCramRectangle *pSVar4;
  int x_00;
  int y_01;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_fffffff4;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x34);
  if (g_CramVisualizationFlag != 0) {
    engine_2d_c_fillRectColor_FUN_00403170(width,height,render_mode + -1,in_stack_0000001c + -1,1);
    uVar1 = g_CramPlacedTextureCount;
    if (y != 0) {
      uVar1 = g_CramTextureCount;
    }
    iVar3 = 0;
    if (0 < (int)uVar1) {
      do {
        iVar3 = iVar3 + 1;
        shape_cramtex_cpp_renderTextureEntry_FUN_00447c20
                  ((SCramWorkingEntry *)y,height,render_mode,in_stack_0000001c,in_stack_00000020,
                   in_stack_fffffff4);
      } while (iVar3 < (int)uVar1);
    }
    if ((y == 0) && (iVar3 = 0, 0 < g_CramRectangleCount)) {
      iVar2 = in_stack_0000001c - height;
      y_00 = in_stack_00000020 - render_mode;
      pSVar4 = g_CramRectangles;
      do {
        if ((g_CramMapNumber == pSVar4->left) && (-1 < pSVar4->active_flag)) {
          x_00 = height + (pSVar4->top * iVar2) / g_CramCurrentAcceptableSize;
          y_01 = render_mode + (pSVar4->right * y_00) / g_CramCurrentAcceptableSize;
          if ((x_00 < in_stack_0000001c) && (y_01 < in_stack_00000020)) {
            g_ActiveRenderColor = pSVar4->active_flag;
            engine_2d_c_plotPixel_FUN_00401140(x_00,y_01);
            engine_2d_c_plotPixel_FUN_00401140(x_00 + 1,y_01);
            y_00 = y_01 + 1;
            engine_2d_c_plotPixel_FUN_00401140(x_00,y_00);
            iVar2 = x_00;
          }
        }
        iVar3 = iVar3 + 1;
        pSVar4 = pSVar4 + 1;
      } while (iVar3 < g_CramRectangleCount);
    }
  }
  return;
}


// Assembly code:
// 00447ab0: PUSH 0x34
//   Label: shape_cramtex.cpp_renderAllTexturesAndRectangles_FUN_00447ab0
// 00447ab5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 00447aba: PUSH EBX
// 00447abb: PUSH ESI
// 00447abc: PUSH EDI
// 00447abd: PUSH EBP
// 00447abe: SUB ESP,0x8
// 00447ac1: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00447ac5: CMP dword ptr [0x0084a894],0x0
//   XREF to: 0084a894 (READ)
// 00447acc: JNZ 0x00447ad6
//   XREF to: 00447ad6 (CONDITIONAL_JUMP)
// 00447ace: ADD ESP,0x8
//   Label: LAB_00447ace
// 00447ad1: POP EBP
// 00447ad2: POP EDI
// 00447ad3: POP ESI
// 00447ad4: POP EBX
// 00447ad5: RET
// 00447ad6: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_00447ad6
//   XREF to: Stack[0x14] (READ)
// 00447ada: PUSH 0x1
// 00447adc: DEC EAX
// 00447add: PUSH EAX
// 00447ade: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x10] (READ)
// 00447ae2: DEC EAX
// 00447ae3: PUSH EAX
// 00447ae4: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0xc] (READ)
// 00447ae8: PUSH ECX
// 00447ae9: MOV EBX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 00447aed: PUSH EBX
// 00447aee: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 00447af3: ADD ESP,0x14
// 00447af6: TEST EDI,EDI
// 00447af8: JZ 0x00447c0c
//   XREF to: 00447c0c (CONDITIONAL_JUMP)
// 00447afe: MOV EAX,[0x0084a854]
//   XREF to: 0084a854 (READ)
// 00447b03: MOV ESI,EAX
//   Label: LAB_00447b03
// 00447b05: XOR EBX,EBX
// 00447b07: TEST EAX,EAX
// 00447b09: JLE 0x00447b40
//   XREF to: 00447b40 (CONDITIONAL_JUMP)
// 00447b0b: MOV EBP,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 00447b10: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_00447b10
//   XREF to: Stack[0x14] (READ)
// 00447b14: PUSH EAX
// 00447b15: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x10] (READ)
// 00447b19: PUSH EDX
// 00447b1a: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 00447b1e: PUSH ECX
// 00447b1f: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 00447b23: PUSH EAX
// 00447b24: PUSH EDI
// 00447b25: PUSH EBP
//   XREF to: 0083c1dc (DATA)
//   XREF to: 0083c228 (DATA)
// 00447b26: INC EBX
// 00447b27: CALL shape_cramtex.cpp_renderTextureEntry_FUN_00447c20
//   XREF to: 00447c20 (UNCONDITIONAL_CALL)
// 00447b2c: ADD ESP,0x18
// 00447b2f: ADD EBP,0x4c
// 00447b32: CMP EBX,ESI
// 00447b34: JL 0x00447b10
//   XREF to: 00447b10 (CONDITIONAL_JUMP)
// 00447b36: LEA EAX,[EAX]
// 00447b3c: LEA EDX,[EDX]
// 00447b40: TEST EDI,EDI
//   Label: LAB_00447b40
// 00447b42: JNZ 0x00447ace
//   XREF to: 00447ace (CONDITIONAL_JUMP)
// 00447b44: MOV EDX,dword ptr [0x0084a860]
//   XREF to: 0084a860 (READ)
// 00447b4a: XOR EBP,EBP
// 00447b4c: TEST EDX,EDX
// 00447b4e: JLE 0x00447ace
//   XREF to: 00447ace (CONDITIONAL_JUMP)
// 00447b54: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x10] (READ)
// 00447b58: SUB EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00447b5c: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 00447b60: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 00447b63: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x14] (READ)
// 00447b67: SUB EAX,ESI
// 00447b69: MOV EBX,0x840c14
//   XREF to: 00840c14 (DATA)
// 00447b6e: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00447b72: MOV EDI,dword ptr [0x0084a890]
//   Label: LAB_00447b72
//   XREF to: 0084a890 (READ)
// 00447b78: CMP EDI,dword ptr [EBX]
//   XREF to: 00840c14 (READ)
//   XREF to: 00840c3c (READ)
// 00447b7a: JNZ 0x00447bf5
//   XREF to: 00447bf5 (CONDITIONAL_JUMP)
// 00447b80: CMP dword ptr [EBX + 0x24],0x0
//   XREF to: 00840c38 (READ)
//   XREF to: 00840c60 (READ)
// 00447b84: JL 0x00447bf5
//   XREF to: 00447bf5 (CONDITIONAL_JUMP)
// 00447b86: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00447b89: MOV EDX,dword ptr [EBX + 0x4]
//   XREF to: 00840c18 (READ)
//   XREF to: 00840c40 (READ)
// 00447b8c: IMUL EDX,ECX
// 00447b8f: MOV ESI,dword ptr [0x0084a884]
//   XREF to: 0084a884 (READ)
// 00447b95: MOV EAX,EDX
// 00447b97: SAR EDX,0x1f
// 00447b9a: IDIV ESI
// 00447b9c: MOV EDI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 00447ba0: MOV EDX,dword ptr [EBX + 0x8]
//   XREF to: 00840c1c (READ)
//   XREF to: 00840c44 (READ)
// 00447ba3: IMUL EDX,EDI
// 00447ba6: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00447baa: MOV ECX,dword ptr [0x0084a884]
//   XREF to: 0084a884 (READ)
// 00447bb0: ADD ESI,EAX
// 00447bb2: MOV EAX,EDX
// 00447bb4: SAR EDX,0x1f
// 00447bb7: IDIV ECX
// 00447bb9: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 00447bbd: ADD EDI,EAX
// 00447bbf: CMP ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x10] (READ)
// 00447bc3: JGE 0x00447bf5
//   XREF to: 00447bf5 (CONDITIONAL_JUMP)
// 00447bc5: CMP EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x14] (READ)
// 00447bc9: JGE 0x00447bf5
//   XREF to: 00447bf5 (CONDITIONAL_JUMP)
// 00447bcb: PUSH EDI
// 00447bcc: MOV EAX,dword ptr [EBX + 0x24]
//   XREF to: 00840c38 (READ)
// 00447bcf: PUSH ESI
// 00447bd0: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 00447bd5: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 00447bda: ADD ESP,0x8
// 00447bdd: PUSH EDI
// 00447bde: LEA EAX,[ESI + 0x1]
// 00447be1: PUSH EAX
// 00447be2: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 00447be7: ADD ESP,0x8
// 00447bea: INC EDI
// 00447beb: PUSH EDI
// 00447bec: PUSH ESI
// 00447bed: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 00447bf2: ADD ESP,0x8
// 00447bf5: MOV ECX,dword ptr [0x0084a860]
//   Label: LAB_00447bf5
//   XREF to: 0084a860 (READ)
// 00447bfb: INC EBP
// 00447bfc: ADD EBX,0x28
// 00447bff: CMP EBP,ECX
// 00447c01: JGE 0x00447ace
//   XREF to: 00447ace (CONDITIONAL_JUMP)
// 00447c07: JMP 0x00447b72
//   XREF to: 00447b72 (UNCONDITIONAL_JUMP)
// 00447c0c: MOV EAX,[0x0084a85c]
//   Label: LAB_00447c0c
//   XREF to: 0084a85c (READ)
// 00447c11: JMP 0x00447b03
//   XREF to: 00447b03 (UNCONDITIONAL_JUMP)
