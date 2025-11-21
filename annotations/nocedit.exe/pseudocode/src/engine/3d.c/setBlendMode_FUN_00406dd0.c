// Name: engine_3d.c_setBlendMode_FUN_00406dd0
// Address: 00406dd0
// Address Range: [[00406dd0, 00406dd9]]
// Convention: __cdecl
// Signature: void engine_3d.c_setBlendMode_FUN_00406dd0(int blend_mode)
// Cross-references:
//   core_moon.cpp_CMoon_render_FUN_00529ed0 (00529ed0) at 0052a252 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_004070c0 (004070c0) at 0040723b [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 (0048ca50) at 0048ca55 [UNCONDITIONAL_CALL]
//   support_newmsg.cpp_FUN_005445c0 (005445c0) at 005446b3 [UNCONDITIONAL_CALL]
// Globals:
//   int g_BlendMode

#include "nocturne.h"

void __cdecl engine_3d_c_setBlendMode_FUN_00406dd0(int blend_mode)

{
  g_BlendMode = blend_mode;
  return;
}


// Assembly code:
// 00406dd0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_3d.c_setBlendMode_FUN_00406dd0
//   XREF to: Stack[0x4] (READ)
// 00406dd4: MOV [0x02d05298],EAX
//   XREF to: 02d05298 (WRITE)
// 00406dd9: RET
