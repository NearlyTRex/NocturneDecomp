// Name: engine_texture.cpp_getTextureCacheStats_FUN_005dd970
// Address: 005dd970
// Address Range: [[005dd970, 005dd984]]
// Convention: __cdecl
// Signature: void engine_texture.cpp_getTextureCacheStats_FUN_005dd970(char * output_buffer)
// Cross-references:
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da839 [UNCONDITIONAL_CALL]
// Globals:
//   CTextureCache* g_TextureCacheInstance
// Function calls:
//   engine_texture.cpp_CTextureCache_getTextureCacheStats_FUN_005dd690

#include "nocturne.h"

void __cdecl engine_texture_cpp_getTextureCacheStats_FUN_005dd970(char *output_buffer)

{
  engine_texture_cpp_CTextureCache_getTextureCacheStats_FUN_005dd690
            (g_TextureCacheInstance,output_buffer);
  return;
}


// Assembly code:
// 005dd970: MOV EDX,dword ptr [ESP + 0x4]
//   Label: engine_texture.cpp_getTextureCacheStats_FUN_005dd970
//   XREF to: Stack[0x4] (READ)
// 005dd974: PUSH EDX
// 005dd975: MOV ECX,dword ptr [0x03f87358]
//   XREF to: 03f87358 (READ)
// 005dd97b: PUSH ECX
// 005dd97c: CALL engine_texture.cpp_CTextureCache_getTextureCacheStats_FUN_005dd690
//   XREF to: 005dd690 (UNCONDITIONAL_CALL)
// 005dd981: ADD ESP,0x8
// 005dd984: RET
