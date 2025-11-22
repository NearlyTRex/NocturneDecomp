// Name: engine_2d.c_fillRectWithBorder_FUN_00403200
// Address: 00403200
// Address Range: [[00403200, 00403258]]
// Convention: __cdecl
// Signature: void engine_2d.c_fillRectWithBorder_FUN_00403200(int x1, int y1, int x2, int y2, int fill_color, int border_color)
// Cross-references:
//   core_actor.cpp_CActorPropertyList_FUN_0040e850 (0040e850) at 0040e910 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_renderOverlay_FUN_004d8040 (004d8040) at 004d8328 [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004d7fa0 (004d7fa0) at 004d7fec [UNCONDITIONAL_CALL]
//   core_menu.cpp_adjustMouseSensitivity_FUN_005107c0 (005107c0) at 0051090a [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00536e20 (00536e20) at 00536ef9 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10 (004a5c10) at 004a5c4b [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80 (004a0f80) at 004a104c [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 (004a0530) at 004a0676 [UNCONDITIONAL_CALL]
// Globals:
//   int g_ActiveRenderColor
// Function calls:
//   engine_2d.c_drawRect_FUN_00403120
//   engine_2d.c_fillRectColor_FUN_00403170

#include "nocturne.h"

void __cdecl
engine_2d_c_fillRectWithBorder_FUN_00403200
          (int x1,int y1,int x2,int y2,int fill_color,int border_color)

{
  int iVar1;
  int in_stack_0000001c;
  
  engine_2d_c_fillRectColor_FUN_00403170(x1,y1,x2,y2,fill_color);
  iVar1 = g_ActiveRenderColor;
  g_ActiveRenderColor = in_stack_0000001c;
  engine_2d_c_drawRect_FUN_00403120(x1 + -1,y1 + -1,y2 + 1,fill_color + 1);
  g_ActiveRenderColor = iVar1;
  return;
}


// Assembly code:
// 00403200: PUSH EBX
//   Label: engine_2d.c_fillRectWithBorder_FUN_00403200
// 00403201: PUSH ESI
// 00403202: PUSH EDI
// 00403203: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 00403207: PUSH EDX
// 00403208: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0040320c: PUSH ECX
// 0040320d: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 00403211: PUSH EBX
// 00403212: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00403216: PUSH ESI
// 00403217: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0040321b: PUSH EDI
// 0040321c: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 00403221: ADD ESP,0x14
// 00403224: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x18] (READ)
// 00403228: MOV EBX,dword ptr [0x02d02570]
//   XREF to: 02d02570 (READ)
// 0040322e: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 00403233: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 00403237: INC EAX
// 00403238: PUSH EAX
// 00403239: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0040323d: INC EAX
// 0040323e: PUSH EAX
// 0040323f: LEA EAX,[ESI + -0x1]
// 00403242: PUSH EAX
// 00403243: LEA EAX,[EDI + -0x1]
// 00403246: PUSH EAX
// 00403247: CALL engine_2d.c_drawRect_FUN_00403120
//   XREF to: 00403120 (UNCONDITIONAL_CALL)
// 0040324c: ADD ESP,0x10
// 0040324f: MOV dword ptr [0x02d02570],EBX
//   XREF to: 02d02570 (WRITE)
// 00403255: POP EDI
// 00403256: POP ESI
// 00403257: POP EBX
// 00403258: RET
