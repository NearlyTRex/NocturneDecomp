// Name: engine_2d.c_project3DPointToScreen_FUN_00401770
// Address: 00401770
// Address Range: [[00401770, 004017b6]]
// Convention: __cdecl
// Signature: void engine_2d.c_project3DPointToScreen_FUN_00401770(int x_3d, int y_3d, int z_depth)
// Cross-references:
//   engine_2d.c_draw320x200SizeDot_FUN_00402a8e (00402a8e) at 00402ad9 [UNCONDITIONAL_CALL]
//   engine_2d.c_project3DPointClipped_FUN_004017c0 (004017c0) at 004017ea [UNCONDITIONAL_CALL]
// Globals:
//   int g_ViewportCenterXFixed
//   int g_ViewportCenterYFixed
//   int g_ViewportRightFixed
//   int g_ViewportBottomFixed
// Function calls:
//   engine_2d.c_plotPixel_FUN_00401140

#include "nocturne.h"

void __cdecl engine_2d_c_project3DPointToScreen_FUN_00401770(int x_3d,int y_3d,int z_depth)

{
  engine_2d_c_plotPixel_FUN_00401140
            (g_ViewportRightFixed +
             (int)(((longlong)x_3d * (longlong)g_ViewportCenterXFixed) / (longlong)z_depth) >> 0x10,
             (int)(((longlong)y_3d * (longlong)g_ViewportCenterYFixed) / (longlong)z_depth) +
             g_ViewportBottomFixed >> 0x10);
  return;
}


// Assembly code:
// 00401770: PUSH EBX
//   Label: engine_2d.c_project3DPointToScreen_FUN_00401770
// 00401771: PUSH ESI
// 00401772: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00401776: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0040177a: MOV EDX,dword ptr [0x02d02548]
//   XREF to: 02d02548 (READ)
// 00401780: MOV EBX,ECX
// 00401782: IMUL EDX
// 00401784: IDIV EBX
// 00401786: MOV ESI,dword ptr [0x02d02550]
//   XREF to: 02d02550 (READ)
// 0040178c: MOV EDX,dword ptr [0x02d0254c]
//   XREF to: 02d0254c (READ)
// 00401792: MOV EBX,ECX
// 00401794: ADD ESI,EAX
// 00401796: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0040179a: IMUL EDX
// 0040179c: IDIV EBX
// 0040179e: ADD EAX,dword ptr [0x02d02554]
//   XREF to: 02d02554 (READ)
// 004017a4: SAR EAX,0x10
// 004017a7: PUSH EAX
// 004017a8: SAR ESI,0x10
// 004017ab: PUSH ESI
// 004017ac: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 004017b1: ADD ESP,0x8
// 004017b4: POP ESI
// 004017b5: POP EBX
// 004017b6: RET
