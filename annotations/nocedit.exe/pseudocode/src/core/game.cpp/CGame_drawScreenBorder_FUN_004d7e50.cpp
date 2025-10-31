// Name: core_game.cpp_CGame_drawScreenBorder_FUN_004d7e50
// Address: 004d7e50
// Address Range: [[004d7e50, 004d7f1f]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_drawScreenBorder_FUN_004d7e50(CGame * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da4e3 [UNCONDITIONAL_CALL]
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_ActiveRenderColor
// Function calls:
//   engine_2d.c_drawLine_FUN_004011b0

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_drawScreenBorder_FUN_004d7e50(CGame *this_ptr)

{
  g_ActiveRenderColor = 0;
  engine_2d_c_drawLine_FUN_004011b0(0,0,g_WindowWidth + -1,0);
  engine_2d_c_drawLine_FUN_004011b0(1,1,g_WindowWidth + -2,1);
  engine_2d_c_drawLine_FUN_004011b0(0,g_WindowHeight + -1,g_WindowWidth + -1,g_WindowHeight + -1);
  engine_2d_c_drawLine_FUN_004011b0(1,g_WindowHeight + -2,g_WindowWidth + -2,g_WindowHeight + -2);
  engine_2d_c_drawLine_FUN_004011b0(0,1,0,g_WindowHeight + -2);
  engine_2d_c_drawLine_FUN_004011b0(1,2,1,g_WindowHeight + -3);
  engine_2d_c_drawLine_FUN_004011b0(g_WindowWidth + -1,1,g_WindowWidth + -1,g_WindowHeight + -2);
  engine_2d_c_drawLine_FUN_004011b0(g_WindowWidth + -2,2,g_WindowWidth + -2,g_WindowHeight + -3);
  return;
}


// Assembly code:
// 004d7e50: XOR EDX,EDX
//   Label: core_game.cpp_CGame_drawScreenBorder_FUN_004d7e50
// 004d7e52: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 004d7e57: PUSH EDX
// 004d7e58: DEC EAX
// 004d7e59: PUSH EAX
// 004d7e5a: PUSH EDX
// 004d7e5b: PUSH EDX
// 004d7e5c: MOV dword ptr [0x02d02570],EDX
//   XREF to: 02d02570 (WRITE)
// 004d7e62: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d7e67: ADD ESP,0x10
// 004d7e6a: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 004d7e6f: PUSH 0x1
// 004d7e71: SUB EAX,0x2
// 004d7e74: PUSH EAX
// 004d7e75: PUSH 0x1
// 004d7e77: PUSH 0x1
// 004d7e79: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d7e7e: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 004d7e83: ADD ESP,0x10
// 004d7e86: DEC EAX
// 004d7e87: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d7e8d: PUSH EAX
// 004d7e8e: DEC EDX
// 004d7e8f: PUSH EDX
// 004d7e90: PUSH EAX
// 004d7e91: PUSH 0x0
// 004d7e93: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d7e98: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 004d7e9d: ADD ESP,0x10
// 004d7ea0: SUB EAX,0x2
// 004d7ea3: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d7ea9: PUSH EAX
// 004d7eaa: SUB EDX,0x2
// 004d7ead: PUSH EDX
// 004d7eae: PUSH EAX
// 004d7eaf: PUSH 0x1
// 004d7eb1: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d7eb6: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 004d7ebb: ADD ESP,0x10
// 004d7ebe: SUB EAX,0x2
// 004d7ec1: PUSH EAX
// 004d7ec2: PUSH 0x0
// 004d7ec4: PUSH 0x1
// 004d7ec6: PUSH 0x0
// 004d7ec8: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d7ecd: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 004d7ed2: ADD ESP,0x10
// 004d7ed5: SUB EAX,0x3
// 004d7ed8: PUSH EAX
// 004d7ed9: PUSH 0x1
// 004d7edb: PUSH 0x2
// 004d7edd: PUSH 0x1
// 004d7edf: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d7ee4: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 004d7ee9: ADD ESP,0x10
// 004d7eec: SUB EAX,0x2
// 004d7eef: PUSH EAX
// 004d7ef0: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 004d7ef5: DEC EAX
// 004d7ef6: PUSH EAX
// 004d7ef7: PUSH 0x1
// 004d7ef9: PUSH EAX
// 004d7efa: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d7eff: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 004d7f04: ADD ESP,0x10
// 004d7f07: SUB EAX,0x3
// 004d7f0a: PUSH EAX
// 004d7f0b: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 004d7f10: SUB EAX,0x2
// 004d7f13: PUSH EAX
// 004d7f14: PUSH 0x2
// 004d7f16: PUSH EAX
// 004d7f17: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004d7f1c: ADD ESP,0x10
// 004d7f1f: RET
