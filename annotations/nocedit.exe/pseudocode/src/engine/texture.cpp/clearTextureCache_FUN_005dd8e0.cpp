// Name: engine_texture.cpp_clearTextureCache_FUN_005dd8e0
// Address: 005dd8e0
// Address Range: [[005dd8e0, 005dd8ef]]
// Convention: __cdecl
// Signature: void engine_texture.cpp_clearTextureCache_FUN_005dd8e0(void)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0 (0047a3e0) at 0047a7fc [UNCONDITIONAL_CALL]
//   core_menu.cpp_FUN_0050fe60 (0050fe60) at 0050fe65 [UNCONDITIONAL_CALL]
//   core_menu.cpp_showMainGameMenu_FUN_00512f40 (00512f40) at 00512fe2 [UNCONDITIONAL_CALL]
//   core_mission.cpp_FUN_005248e0 (005248e0) at 005248f2 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058de70 (0058de70) at 0058e09b [UNCONDITIONAL_CALL]
//   shape_design.c_cramTextureList_FUN_0046bb80 (0046bb80) at 0046df9c [UNCONDITIONAL_CALL]
//   shape_design.c_tileTextureMaps_FUN_0046a180 (0046a180) at 0046a845 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_fixupAfterCram_FUN_0051bac0 (0051bac0) at 0051bb2f [UNCONDITIONAL_CALL]
// Globals:
//   CTextureCache* g_TextureCacheInstance
// Function calls:
//   engine_texture.cpp_CTextureCache_free_FUN_005dcb30

#include "nocturne.h"

void __cdecl engine_texture_cpp_clearTextureCache_FUN_005dd8e0(void)

{
  engine_texture_cpp_CTextureCache_free_FUN_005dcb30(g_TextureCacheInstance);
  return;
}


// Assembly code:
// 005dd8e0: MOV EDX,dword ptr [0x03f87358]
//   Label: engine_texture.cpp_clearTextureCache_FUN_005dd8e0
//   XREF to: 03f87358 (READ)
// 005dd8e6: PUSH EDX
// 005dd8e7: CALL engine_texture.cpp_CTextureCache_free_FUN_005dcb30
//   XREF to: 005dcb30 (UNCONDITIONAL_CALL)
// 005dd8ec: ADD ESP,0x4
// 005dd8ef: NOP
