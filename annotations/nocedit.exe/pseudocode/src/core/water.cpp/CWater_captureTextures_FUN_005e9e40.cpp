// Name: core_water.cpp_CWater_captureTextures_FUN_005e9e40
// Address: 005e9e40
// Address Range: [[005e9e40, 005e9e66]]
// Convention: __cdecl
// Signature: void core_water.cpp_CWater_captureTextures_FUN_005e9e40(CWater * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056fb80 (0056fb80) at 0056fb8c [UNCONDITIONAL_CALL]
// Globals:
//   SMRGLTextureBasic[16] g_WaterTextures
//   undefined4 DAT_00684510
//   SMRGLTextureBasic* g_WaterTexturesEnd = 00000000
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80

#include "nocturne.h"

void __cdecl core_water_cpp_CWater_captureTextures_FUN_005e9e40(CWater *this_ptr)

{
  SMRGLTextureBasic *texture;
  
  texture = g_WaterTextures;
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,texture);
    texture = texture + 1;
  } while (texture != (SMRGLTextureBasic *)&g_WaterTexturesEnd);
  return;
}


// Assembly code:
// 005e9e40: PUSH EBX
//   Label: core_water.cpp_CWater_captureTextures_FUN_005e9e40
// 005e9e41: PUSH ESI
// 005e9e42: MOV EBX,0x6844f8
//   XREF to: 006844f8 (PARAM)
// 005e9e47: LEA ESI,[EBX + 0x180]
//   XREF to: 00684678 (DATA)
// 005e9e4d: PUSH EBX
//   Label: LAB_005e9e4d
//   XREF to: 006844f8 (DATA)
//   XREF to: 00684510 (DATA)
// 005e9e4e: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005e9e54: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005e9e55: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 005e9e5a: ADD EBX,0x18
//   XREF to: 00684510 (PARAM)
// 005e9e5d: ADD ESP,0x8
// 005e9e60: CMP EBX,ESI
// 005e9e62: JNZ 0x005e9e4d
//   XREF to: 005e9e4d (CONDITIONAL_JUMP)
// 005e9e64: POP ESI
// 005e9e65: POP EBX
// 005e9e66: RET
