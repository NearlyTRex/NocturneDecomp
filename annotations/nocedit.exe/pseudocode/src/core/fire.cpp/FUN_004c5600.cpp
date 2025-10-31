// Name: core_fire.cpp_FUN_004c5600
// Address: 004c5600
// Address Range: [[004c5600, 004c5626]]
// Convention: unknown
// Signature: undefined core_fire.cpp_FUN_004c5600()
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c7ab0 (004c7ab0) at 004c7b0b [UNCONDITIONAL_CALL]
// Globals:
//   SMRGLTextureBasic[6] g_FireEffectLightningBoltTextures
//   undefined4 DAT_0067ae0c
//   SMRGLTextureBasic g_FireEffectPopcornTexture
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80

#include "nocturne.h"

void core_fire_cpp_FUN_004c5600(void)

{
  SMRGLTextureBasic *texture;
  
  texture = g_FireEffectLightningBoltTextures;
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,texture);
    texture = texture + 1;
  } while (texture != &g_FireEffectPopcornTexture);
  return;
}


// Assembly code:
// 004c5600: PUSH EBX
//   Label: core_fire.cpp_FUN_004c5600
// 004c5601: PUSH ESI
// 004c5602: MOV EBX,0x67adf4
//   XREF to: 0067adf4 (PARAM)
// 004c5607: LEA ESI,[EBX + 0x90]
//   XREF to: 0067ae84 (DATA)
// 004c560d: PUSH EBX
//   Label: LAB_004c560d
//   XREF to: 0067adf4 (DATA)
//   XREF to: 0067ae0c (DATA)
// 004c560e: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004c5614: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c5615: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004c561a: ADD EBX,0x18
//   XREF to: 0067ae0c (PARAM)
// 004c561d: ADD ESP,0x8
// 004c5620: CMP EBX,ESI
// 004c5622: JNZ 0x004c560d
//   XREF to: 004c560d (CONDITIONAL_JUMP)
// 004c5624: POP ESI
// 004c5625: POP EBX
// 004c5626: RET
