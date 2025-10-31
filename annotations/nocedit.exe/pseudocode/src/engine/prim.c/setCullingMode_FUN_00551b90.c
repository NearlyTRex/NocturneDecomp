// Name: engine_prim.c_setCullingMode_FUN_00551b90
// Address: 00551b90
// Address Range: [[00551b90, 00551b99]]
// Convention: __cdecl
// Signature: void engine_prim.c_setCullingMode_FUN_00551b90(int culling_mode)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 (0048ca00) at 0048ca15 [UNCONDITIONAL_CALL]
// Globals:
//   int g_CullingMode

#include "nocturne.h"

void __cdecl engine_prim_c_setCullingMode_FUN_00551b90(int culling_mode)

{
  g_CullingMode = culling_mode;
  return;
}


// Assembly code:
// 00551b90: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_prim.c_setCullingMode_FUN_00551b90
//   XREF to: Stack[0x4] (READ)
// 00551b94: MOV [0x00772a7c],EAX
//   XREF to: 00772a7c (WRITE)
// 00551b99: RET
