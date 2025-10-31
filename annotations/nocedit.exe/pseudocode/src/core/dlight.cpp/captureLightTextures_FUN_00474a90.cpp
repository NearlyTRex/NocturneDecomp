// Name: core_dlight.cpp_captureLightTextures_FUN_00474a90
// Address: 00474a90
// Address Range: [[00474a90, 00474aca]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_captureLightTextures_FUN_00474a90(void)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056fb80 (0056fb80) at 0056fb80 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0066fef0
//   undefined4 DAT_0066ff08
//   undefined4 DAT_0066ff38
//   SMRGLTextureBasic* g_LightTexturesEnd = 00000000
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80

#include "nocturne.h"

void __cdecl core_dlight_cpp_captureLightTextures_FUN_00474a90(void)

{
  SMRGLTextureBasic *texture;
  
  texture = g_LightTextures + 2;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,g_LightTextures + 1);
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,texture);
    texture = texture + 2;
  } while (texture != (SMRGLTextureBasic *)&g_LightTexturesEnd);
  return;
}


// Assembly code:
// 00474a90: PUSH EBX
//   Label: core_dlight.cpp_captureLightTextures_FUN_00474a90
// 00474a91: PUSH ESI
// 00474a92: PUSH 0x66fef0
//   XREF to: 0066fef0 (DATA)
// 00474a97: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00474a9d: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00474a9e: MOV EBX,0x66ff08
//   XREF to: 0066ff08 (PARAM)
// 00474aa3: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 00474aa8: LEA ESI,[EBX + 0x1b0]
//   XREF to: 006700b8 (DATA)
// 00474aae: ADD ESP,0x8
// 00474ab1: PUSH EBX
//   Label: LAB_00474ab1
//   XREF to: 0066ff08 (DATA)
//   XREF to: 0066ff38 (DATA)
// 00474ab2: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00474ab8: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00474ab9: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 00474abe: ADD EBX,0x30
//   XREF to: 0066ff38 (PARAM)
// 00474ac1: ADD ESP,0x8
// 00474ac4: CMP EBX,ESI
// 00474ac6: JNZ 0x00474ab1
//   XREF to: 00474ab1 (CONDITIONAL_JUMP)
// 00474ac8: POP ESI
// 00474ac9: POP EBX
// 00474aca: RET
