// Name: engine_2d.c_clipLineGlobal_FUN_00402c50
// Address: 00402c50
// Address Range: [[00402c50, 00402c90]]
// Convention: __cdecl
// Signature: void engine_2d.c_clipLineGlobal_FUN_00402c50(int * x1, int * y1, int * x2, int * y2)
// Cross-references:
//   shape_edittool.cpp_CEdCheck_render_FUN_004a6c00 (004a6c00) at 004a6d07 [UNCONDITIONAL_CALL]
// Globals:
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
// Function calls:
//   engine_2d.c_clipAndDrawLine_FUN_00402ca0

#include "nocturne.h"

void __cdecl engine_2d_c_clipLineGlobal_FUN_00402c50(int *x1,int *y1,int *x2,int *y2)

{
  engine_2d_c_clipAndDrawLine_FUN_00402ca0
            (x1,y1,x2,y2,g_ClipLeft,g_ClipTop,g_ClipRight,g_ClipBottom);
  return;
}


// Assembly code:
// 00402c50: PUSH EBX
//   Label: engine_2d.c_clipLineGlobal_FUN_00402c50
// 00402c51: PUSH ESI
// 00402c52: PUSH EDI
// 00402c53: PUSH EBP
// 00402c54: MOV EDX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 00402c5a: PUSH EDX
// 00402c5b: MOV ECX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 00402c61: PUSH ECX
// 00402c62: MOV EBX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 00402c68: PUSH EBX
// 00402c69: MOV ESI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00402c6f: PUSH ESI
// 00402c70: MOV EDI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x10] (READ)
// 00402c74: PUSH EDI
// 00402c75: MOV EBP,dword ptr [ESP + 0x30]
//   XREF to: Stack[0xc] (READ)
// 00402c79: PUSH EBP
// 00402c7a: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 00402c7e: PUSH EAX
// 00402c7f: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 00402c83: PUSH EDX
// 00402c84: CALL engine_2d.c_clipAndDrawLine_FUN_00402ca0
//   XREF to: 00402ca0 (UNCONDITIONAL_CALL)
// 00402c89: ADD ESP,0x20
// 00402c8c: POP EBP
// 00402c8d: POP EDI
// 00402c8e: POP ESI
// 00402c8f: POP EBX
// 00402c90: RET
