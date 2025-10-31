// Name: engine_light.cpp_setDirectionalLightVector_FUN_005054d0
// Address: 005054d0
// Address Range: [[005054d0, 005054fe]]
// Convention: __cdecl
// Signature: void engine_light.cpp_setDirectionalLightVector_FUN_005054d0(int dir_x, int dir_y, int dir_z)
// Cross-references:
//   core_texlist.cpp_CTextureList_previewTexture_FUN_005dc760 (005dc760) at 005dc844 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_setLightDirection_FUN_0048c6c0 (0048c6c0) at 0048c6d0 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_scaleAndSetDirectionalLight_FUN_0048c6e0 (0048c6e0) at 0048c72a [UNCONDITIONAL_CALL]
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0 (0045f1d0) at 0045f41e [UNCONDITIONAL_CALL]
// Globals:
//   int g_LightDirectionX
//   int g_LightDirectionY
//   int g_LightDirectionZ
//   int g_LightDirectionX2
//   int g_LightDirectionY2
//   int g_LightDirectionZ2

#include "nocturne.h"

void __cdecl engine_light_cpp_setDirectionalLightVector_FUN_005054d0(int dir_x,int dir_y,int dir_z)

{
  g_LightDirectionX = dir_x;
  g_LightDirectionY2 = dir_y;
  g_LightDirectionY = dir_y;
  g_LightDirectionZ2 = dir_z;
  g_LightDirectionZ = dir_z;
  g_LightDirectionX2 = dir_x;
  return;
}


// Assembly code:
// 005054d0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: engine_light.cpp_setDirectionalLightVector_FUN_005054d0
//   XREF to: Stack[0x4] (READ)
// 005054d4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005054d8: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 005054dc: MOV dword ptr [0x02d052dc],EDX
//   XREF to: 02d052dc (WRITE)
// 005054e2: MOV [0x02dd3098],EAX
//   XREF to: 02dd3098 (WRITE)
// 005054e7: MOV [0x02d052e0],EAX
//   XREF to: 02d052e0 (WRITE)
// 005054ec: MOV dword ptr [0x02dd309c],ECX
//   XREF to: 02dd309c (WRITE)
// 005054f2: MOV dword ptr [0x02d052e4],ECX
//   XREF to: 02d052e4 (WRITE)
// 005054f8: MOV dword ptr [0x02dd3094],EDX
//   XREF to: 02dd3094 (WRITE)
// 005054fe: RET
