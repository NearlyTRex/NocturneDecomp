// Name: engine_prim.c_setMaxViewportScanline1200_FUN_00551b70
// Address: 00551b70
// Address Range: [[00551b70, 00551b7a]]
// Convention: __cdecl
// Signature: void engine_prim.c_setMaxViewportScanline1200_FUN_00551b70(void)
// Globals:
//   int g_MaxViewportScanline = 0x4b0

#include "nocturne.h"

void __cdecl engine_prim_c_setMaxViewportScanline1200_FUN_00551b70(void)

{
  g_MaxViewportScanline = 0x4b0;
  return;
}


// Assembly code:
// 00551b70: MOV dword ptr [0x00680cf4],0x4b0
//   Label: engine_prim.c_setMaxViewportScanline1200_FUN_00551b70
//   XREF to: 00680cf4 (WRITE)
// 00551b7a: RET
