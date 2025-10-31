// Name: engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
// Address: 005dd800
// Address Range: [[005dd800, 005dd8be]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_texture.cpp_ensureTextureLoaded_FUN_005dd800(SMRGLTextureBasic * texture)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042af60 (0042af60) at 0042afff [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043bae0 (0043bae0) at 0043bb77 [UNCONDITIONAL_CALL]
//   core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0 (004715e0) at 004716d9 [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004cc300 (004cc300) at 004cc4a5 [UNCONDITIONAL_CALL]
//   engine_3d.c_dispatchMRGLToRenderer_FUN_00407aa0 (00407aa0) at 00407ba2 [UNCONDITIONAL_CALL]
//   engine_3d.c_updateAnimatedTexture_FUN_004050c0 (004050c0) at 0040512d [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 (0048db80) at 0048db87 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_render3DCharacter_FUN_004ce2d0 (004ce2d0) at 004ce32d [UNCONDITIONAL_CALL]
//   engine_model.c_loadMRGLTextures_FUN_00528870 (00528870) at 0052889d [UNCONDITIONAL_CALL]
//   engine_texture.cpp_loadAndUpdateTexture_FUN_005dd930 (005dd930) at 005dd936 [UNCONDITIONAL_CALL]
//   engine_texture.cpp_loadTextureAndGetData_FUN_005dd8c0 (005dd8c0) at 005dd8c5 [UNCONDITIONAL_CALL]
//   engine_texture.cpp_updateTextureWithPalette_FUN_005dd900 (005dd900) at 005dd906 [UNCONDITIONAL_CALL]
//   shape_design.c_renderSinglePolygon_FUN_0045ce20 (0045ce20) at 0045cff9 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051ead0 (0051ead0) at 0051ec44 [UNCONDITIONAL_CALL]
// Globals:
//   int g_TexturesDisabled
//   byte* g_CurrentPalette
//   int g_UseExternalRenderer
//   int g_CurrentTextureIndex
//   CTextureCache* g_TextureCacheInstance
// Function calls:
//   engine_texture.cpp_CTextureCache_findTexture_FUN_005dd180
//   engine_texture.cpp_CTextureCache_loadTexture_FUN_005dcc00
//   engine_texture.cpp_CTextureCache_setupTexture_FUN_005dd200
//   wincore_windll.cpp_selectTexture_FUN_005b7340
//   wincore_windll.cpp_updateTexture_FUN_005b7380

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(SMRGLTextureBasic *texture)

{
  int texture_index;
  int extraout_EAX;
  bool bVar1;
  
  if ((g_TexturesDisabled == 0) && (texture->texture_name[0] != '\0')) {
    texture_index =
         engine_texture_cpp_CTextureCache_findTexture_FUN_005dd180
                   (g_TextureCacheInstance,(texture->base).count & 0xffff,texture->texture_name);
    bVar1 = texture_index == -1;
    if (bVar1) {
      engine_texture_cpp_CTextureCache_loadTexture_FUN_005dcc00
                (g_TextureCacheInstance,texture->texture_name);
      texture_index = extraout_EAX;
    }
    (texture->base).count = texture_index;
    g_CurrentTextureIndex = texture_index;
    engine_texture_cpp_CTextureCache_setupTexture_FUN_005dd200(g_TextureCacheInstance,texture_index)
    ;
    if (g_UseExternalRenderer != 0) {
      if (bVar1) {
        wincore_windll_cpp_updateTexture_FUN_005b7380(texture,(SRGBColorPalette *)g_CurrentPalette);
        return (SMRGLHeaderExtended *)(texture + 1);
      }
      wincore_windll_cpp_selectTexture_FUN_005b7340(texture,g_CurrentPalette);
    }
    return (SMRGLHeaderExtended *)(texture + 1);
  }
  return (SMRGLHeaderExtended *)(texture + 1);
}


// Assembly code:
// 005dd800: PUSH EBX
//   Label: engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
// 005dd801: PUSH ESI
// 005dd802: PUSH EBP
// 005dd803: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005dd807: MOV EDX,dword ptr [0x00772a74]
//   XREF to: 00772a74 (READ)
// 005dd80d: LEA EAX,[EBX + 0x18]
// 005dd810: XOR ESI,ESI
// 005dd812: TEST EDX,EDX
// 005dd814: JNZ 0x005dd81c
//   XREF to: 005dd81c (CONDITIONAL_JUMP)
// 005dd816: CMP byte ptr [EBX + 0x8],0x0
// 005dd81a: JNZ 0x005dd820
//   XREF to: 005dd820 (CONDITIONAL_JUMP)
// 005dd81c: POP EBP
//   Label: LAB_005dd81c
// 005dd81d: POP ESI
// 005dd81e: POP EBX
// 005dd81f: RET
// 005dd820: PUSH EDI
//   Label: LAB_005dd820
// 005dd821: LEA EDI,[EBX + 0x8]
// 005dd824: MOV EAX,dword ptr [EBX + 0x4]
// 005dd827: PUSH EDI
// 005dd828: AND EAX,0xffff
// 005dd82d: PUSH EAX
// 005dd82e: MOV ECX,dword ptr [0x03f87358]
//   XREF to: 03f87358 (READ)
// 005dd834: PUSH ECX
// 005dd835: CALL engine_texture.cpp_CTextureCache_findTexture_FUN_005dd180
//   XREF to: 005dd180 (UNCONDITIONAL_CALL)
// 005dd83a: MOV EDX,EAX
// 005dd83c: ADD ESP,0xc
// 005dd83f: CMP EAX,-0x1
// 005dd842: JNZ 0x005dd859
//   XREF to: 005dd859 (CONDITIONAL_JUMP)
// 005dd844: PUSH EDI
// 005dd845: MOV ESI,dword ptr [0x03f87358]
//   XREF to: 03f87358 (READ)
// 005dd84b: PUSH ESI
// 005dd84c: CALL engine_texture.cpp_CTextureCache_loadTexture_FUN_005dcc00
//   XREF to: 005dcc00 (UNCONDITIONAL_CALL)
// 005dd851: MOV ESI,0x1
// 005dd856: ADD ESP,0x8
// 005dd859: MOV dword ptr [EBX + 0x4],EAX
//   Label: LAB_005dd859
// 005dd85c: PUSH EAX
// 005dd85d: MOV EDI,dword ptr [0x03f87358]
//   XREF to: 03f87358 (READ)
// 005dd863: PUSH EDI
// 005dd864: MOV [0x03f87354],EAX
//   XREF to: 03f87354 (WRITE)
// 005dd869: CALL engine_texture.cpp_CTextureCache_setupTexture_FUN_005dd200
//   XREF to: 005dd200 (UNCONDITIONAL_CALL)
// 005dd86e: MOV EBP,dword ptr [0x02d03e94]
//   XREF to: 02d03e94 (READ)
// 005dd874: ADD ESP,0x8
// 005dd877: TEST EBP,EBP
// 005dd879: JZ 0x005dd88f
//   XREF to: 005dd88f (CONDITIONAL_JUMP)
// 005dd87b: TEST ESI,ESI
// 005dd87d: JNZ 0x005dd897
//   XREF to: 005dd897 (CONDITIONAL_JUMP)
// 005dd87f: MOV ESI,dword ptr [0x02d01920]
//   XREF to: 02d01920 (READ)
// 005dd885: PUSH ESI
// 005dd886: PUSH EBX
// 005dd887: CALL wincore_windll.cpp_selectTexture_FUN_005b7340
//   XREF to: 005b7340 (UNCONDITIONAL_CALL)
// 005dd88c: ADD ESP,0x8
// 005dd88f: LEA EAX,[EBX + 0x18]
//   Label: LAB_005dd88f
// 005dd892: POP EDI
// 005dd893: POP EBP
// 005dd894: POP ESI
// 005dd895: POP EBX
// 005dd896: RET
// 005dd897: MOV EAX,[0x02d01920]
//   Label: LAB_005dd897
//   XREF to: 02d01920 (READ)
// 005dd89c: PUSH EAX
// 005dd89d: PUSH EBX
// 005dd89e: CALL wincore_windll.cpp_updateTexture_FUN_005b7380
//   XREF to: 005b7380 (UNCONDITIONAL_CALL)
// 005dd8a3: ADD ESP,0x8
// 005dd8a6: MOV EDX,dword ptr [0x03f87354]
//   XREF to: 03f87354 (READ)
// 005dd8ac: PUSH EDX
// 005dd8ad: MOV ECX,dword ptr [0x03f87358]
//   XREF to: 03f87358 (READ)
// 005dd8b3: PUSH ECX
// 005dd8b4: ADD ESP,0x8
// 005dd8b7: LEA EAX,[EBX + 0x18]
// 005dd8ba: POP EDI
// 005dd8bb: POP EBP
// 005dd8bc: POP ESI
// 005dd8bd: POP EBX
// 005dd8be: RET
