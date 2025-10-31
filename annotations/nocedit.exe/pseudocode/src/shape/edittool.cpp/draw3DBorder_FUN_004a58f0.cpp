// Name: shape_edittool.cpp_draw3DBorder_FUN_004a58f0
// Address: 004a58f0
// Address Range: [[004a58f0, 004a599e]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_draw3DBorder_FUN_004a58f0(int left, int top, int width, int height, int border_style_flag)
// Cross-references:
//   shape_edittool.cpp_CEdButton_paint_FUN_004a65e0 (004a65e0) at 004a6610 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEdCheck_render_FUN_004a6c00 (004a6c00) at 004a6ca6 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10 (004a5c10) at 004a5de3 [UNCONDITIONAL_CALL]
// Globals:
//   int g_ButtonFaceColor
//   int g_HighlightColor
//   int g_BackgroundColor2
//   int g_ActiveRenderColor
// Function calls:
//   engine_2d.c_drawHLine_FUN_00402ee0
//   engine_2d.c_drawVLine_FUN_00402ff0
//   engine_2d.c_fillRectColor_FUN_00403170

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_draw3DBorder_FUN_004a58f0
          (int left,int top,int width,int height,int border_style_flag)

{
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  
  g_ActiveRenderColor = g_HighlightColor;
  if (border_style_flag != 0) {
    g_ActiveRenderColor = g_BackgroundColor2;
  }
  engine_2d_c_drawHLine_FUN_00402ee0(left,top,width + -1);
  engine_2d_c_drawVLine_FUN_00402ff0(left,top,border_style_flag + -1);
  g_ActiveRenderColor = g_BackgroundColor2;
  if (border_style_flag != 0) {
    g_ActiveRenderColor = g_HighlightColor;
  }
  engine_2d_c_drawHLine_FUN_00402ee0(left,in_stack_00000018 + -1,border_style_flag + -1);
  engine_2d_c_drawVLine_FUN_00402ff0(border_style_flag + -1,top,in_stack_00000018 + -1);
  engine_2d_c_fillRectColor_FUN_00403170
            (left + 1,top + 1,in_stack_0000001c + -2,in_stack_00000020 + -2,g_ButtonFaceColor);
  return;
}


// Assembly code:
// 004a58f0: PUSH EBX
//   Label: shape_edittool.cpp_draw3DBorder_FUN_004a58f0
// 004a58f1: PUSH ESI
// 004a58f2: PUSH EDI
// 004a58f3: PUSH EBP
// 004a58f4: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004a58f8: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004a58fc: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 004a5900: TEST ESI,ESI
// 004a5902: JZ 0x004a598c
//   XREF to: 004a598c (CONDITIONAL_JUMP)
// 004a5908: MOV EBX,dword ptr [0x02cf2af4]
//   XREF to: 02cf2af4 (READ)
// 004a590e: MOV dword ptr [0x02d02570],EBX
//   Label: LAB_004a590e
//   XREF to: 02d02570 (WRITE)
// 004a5914: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004a5918: DEC EBX
// 004a5919: PUSH EBX
// 004a591a: PUSH EDI
// 004a591b: PUSH EBP
// 004a591c: CALL engine_2d.c_drawHLine_FUN_00402ee0
//   XREF to: 00402ee0 (UNCONDITIONAL_CALL)
// 004a5921: ADD ESP,0xc
// 004a5924: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004a5928: DEC EBX
// 004a5929: PUSH EBX
// 004a592a: PUSH EDI
// 004a592b: PUSH EBP
// 004a592c: CALL engine_2d.c_drawVLine_FUN_00402ff0
//   XREF to: 00402ff0 (UNCONDITIONAL_CALL)
// 004a5931: ADD ESP,0xc
// 004a5934: TEST ESI,ESI
// 004a5936: JZ 0x004a5997
//   XREF to: 004a5997 (CONDITIONAL_JUMP)
// 004a5938: MOV EBX,dword ptr [0x02cf2af0]
//   XREF to: 02cf2af0 (READ)
// 004a593e: MOV ESI,dword ptr [ESP + 0x1c]
//   Label: LAB_004a593e
//   XREF to: Stack[0xc] (READ)
// 004a5942: MOV dword ptr [0x02d02570],EBX
//   XREF to: 02d02570 (WRITE)
// 004a5948: DEC ESI
// 004a5949: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004a594d: PUSH ESI
// 004a594e: DEC EBX
// 004a594f: PUSH EBX
// 004a5950: PUSH EBP
// 004a5951: CALL engine_2d.c_drawHLine_FUN_00402ee0
//   XREF to: 00402ee0 (UNCONDITIONAL_CALL)
// 004a5956: ADD ESP,0xc
// 004a5959: PUSH EBX
// 004a595a: PUSH EDI
// 004a595b: PUSH ESI
// 004a595c: CALL engine_2d.c_drawVLine_FUN_00402ff0
//   XREF to: 00402ff0 (UNCONDITIONAL_CALL)
// 004a5961: ADD ESP,0xc
// 004a5964: MOV EDX,dword ptr [0x02cf2ae4]
//   XREF to: 02cf2ae4 (READ)
// 004a596a: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004a596e: PUSH EDX
// 004a596f: SUB EBX,0x2
// 004a5972: PUSH EBX
// 004a5973: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 004a5977: SUB EBX,0x2
// 004a597a: PUSH EBX
// 004a597b: INC EDI
// 004a597c: PUSH EDI
// 004a597d: INC EBP
// 004a597e: PUSH EBP
// 004a597f: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 004a5984: ADD ESP,0x14
// 004a5987: POP EBP
// 004a5988: POP EDI
// 004a5989: POP ESI
// 004a598a: POP EBX
// 004a598b: RET
// 004a598c: MOV EBX,dword ptr [0x02cf2af0]
//   Label: LAB_004a598c
//   XREF to: 02cf2af0 (READ)
// 004a5992: JMP 0x004a590e
//   XREF to: 004a590e (UNCONDITIONAL_JUMP)
// 004a5997: MOV EBX,dword ptr [0x02cf2af4]
//   Label: LAB_004a5997
//   XREF to: 02cf2af4 (READ)
// 004a599d: JMP 0x004a593e
//   XREF to: 004a593e (UNCONDITIONAL_JUMP)
