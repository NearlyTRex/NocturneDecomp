// Name: engine_light.cpp_setAmbientLightLevel_FUN_00505490
// Address: 00505490
// Address Range: [[00505490, 005054b1]]
// Convention: __cdecl
// Signature: void engine_light.cpp_setAmbientLightLevel_FUN_00505490(int light_level)
// Cross-references:
//   core_texlist.cpp_CTextureList_previewTexture_FUN_005dc760 (005dc760) at 005dc829 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_setLightIntensity_FUN_0048c690 (0048c690) at 0048c6a9 [UNCONDITIONAL_CALL]
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0 (0045f1d0) at 0045f42b [UNCONDITIONAL_CALL]
// Globals:
//   int g_AmbientLightLevel = 0x8000

#include "nocturne.h"

void __cdecl engine_light_cpp_setAmbientLightLevel_FUN_00505490(int light_level)

{
  if (-1 < light_level) {
    if (0xffff < light_level) {
      light_level = 0xffff;
    }
    g_AmbientLightLevel = light_level;
    return;
  }
  g_AmbientLightLevel = 0;
  return;
}


// Assembly code:
// 00505490: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_light.cpp_setAmbientLightLevel_FUN_00505490
//   XREF to: Stack[0x4] (READ)
// 00505494: TEST EAX,EAX
// 00505496: JL 0x005054aa
//   XREF to: 005054aa (CONDITIONAL_JUMP)
// 00505498: CMP EAX,0xffff
// 0050549d: JLE 0x005054a4
//   XREF to: 005054a4 (CONDITIONAL_JUMP)
// 0050549f: MOV EAX,0xffff
// 005054a4: MOV [0x0067cfc8],EAX
//   Label: LAB_005054a4
//   XREF to: 0067cfc8 (WRITE)
// 005054a9: RET
// 005054aa: XOR EAX,EAX
//   Label: LAB_005054aa
// 005054ac: MOV [0x0067cfc8],EAX
//   XREF to: 0067cfc8 (WRITE)
// 005054b1: RET
