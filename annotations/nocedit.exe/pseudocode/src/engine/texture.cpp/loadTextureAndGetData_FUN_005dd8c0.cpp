// Name: engine_texture.cpp_loadTextureAndGetData_FUN_005dd8c0
// Address: 005dd8c0
// Address Range: [[005dd8c0, 005dd8d4]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_texture.cpp_loadTextureAndGetData_FUN_005dd8c0(SMRGLTextureBasic * texture_info)
// Cross-references:
//   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_004070c0 (004070c0) at 004071d0 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_texture_cpp_loadTextureAndGetData_FUN_005dd8c0(SMRGLTextureBasic *texture_info)

{
  int in_stack_00000008;
  
  engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(texture_info);
  return (SMRGLHeaderExtended *)(in_stack_00000008 + 0x48);
}


// Assembly code:
// 005dd8c0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: engine_texture.cpp_loadTextureAndGetData_FUN_005dd8c0
//   XREF to: Stack[0x4] (READ)
// 005dd8c4: PUSH EDX
// 005dd8c5: CALL engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
//   XREF to: 005dd800 (UNCONDITIONAL_CALL)
// 005dd8ca: ADD ESP,0x4
// 005dd8cd: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005dd8d1: ADD EAX,0x48
// 005dd8d4: RET
