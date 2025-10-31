// Name: engine_prim.c_setMaxViewportScanline_FUN_00551b80
// Address: 00551b80
// Address Range: [[00551b80, 00551b89]]
// Convention: __cdecl
// Signature: void engine_prim.c_setMaxViewportScanline_FUN_00551b80(int max)
// Globals:
//   int g_MaxViewportScanline = 0x4b0

#include "nocturne.h"

void __cdecl engine_prim_c_setMaxViewportScanline_FUN_00551b80(int max)

{
  g_MaxViewportScanline = max;
  return;
}


// Assembly code:
// 00551b80: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_prim.c_setMaxViewportScanline_FUN_00551b80
//   XREF to: Stack[0x4] (READ)
// 00551b84: MOV [0x00680cf4],EAX
//   XREF to: 00680cf4 (WRITE)
// 00551b89: RET
