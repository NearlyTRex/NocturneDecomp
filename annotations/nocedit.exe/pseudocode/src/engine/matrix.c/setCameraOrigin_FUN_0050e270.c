// Name: engine_matrix.c_setCameraOrigin_FUN_0050e270
// Address: 0050e270
// Address Range: [[0050e270, 0050e28b]]
// Convention: __cdecl
// Signature: void engine_matrix.c_setCameraOrigin_FUN_0050e270(int x, int y, int z)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150 (0048c150) at 0048c19a [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_0048c130 (0048c130) at 0048c140 [UNCONDITIONAL_CALL]
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0 (0045f1d0) at 0045f44d [UNCONDITIONAL_CALL]
// Globals:
//   int g_CameraOriginX
//   int g_CameraOriginY
//   int g_CameraOriginZ

#include "nocturne.h"

void __cdecl engine_matrix_c_setCameraOrigin_FUN_0050e270(int x,int y,int z)

{
  g_CameraOriginX = x;
  g_CameraOriginY = y;
  g_CameraOriginZ = z;
  return;
}


// Assembly code:
// 0050e270: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_matrix.c_setCameraOrigin_FUN_0050e270
//   XREF to: Stack[0x4] (READ)
// 0050e274: MOV [0x02d052c4],EAX
//   XREF to: 02d052c4 (WRITE)
// 0050e279: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0050e27d: MOV [0x02d052c8],EAX
//   XREF to: 02d052c8 (WRITE)
// 0050e282: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 0050e286: MOV [0x02d052cc],EAX
//   XREF to: 02d052cc (WRITE)
// 0050e28b: RET
