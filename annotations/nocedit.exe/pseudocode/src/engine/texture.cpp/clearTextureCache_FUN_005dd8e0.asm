; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_texture.cpp_clearTextureCache_FUN_005dd8e0(void)
;
;
; XREF[8]:
;   core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0 at 0047a7fc
;   core_menu.cpp_cleanupMenuTransition_FUN_0050fe60 at 0050fe65
;   core_menu.cpp_showMainGameMenu_FUN_00512f40 at 00512fe2
;   core_mission.cpp_FUN_005248e0 at 005248f2
;   core_skeledit.cpp_FUN_0058de70 at 0058e09b
;   shape_design.c_cramTextureList_FUN_0046bb80 at 0046df9c
;   shape_design.c_tileTextureMaps_FUN_0046a180 at 0046a845
;   shape_meshlod.cpp_CLodMesh_fixupAfterCram_FUN_0051bac0 at 0051bb2f
;
; Referenced Globals:
;   CTextureCache* g_TextureCacheInstance
;
; Called Functions:
;   engine_texture.cpp_CTextureCache_free_FUN_005dcb30
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x03f87358]      ; 005dd8e0 | CTextureCache * g_TextureCacheInstance
        ;   Label: engine_texture.cpp_clearTextureCache_FUN_005dd8e0
    PUSH EDX                            ; 005dd8e6
    CALL engine_texture.cpp_CTextureCache_free_FUN_005dcb30 ; 005dd8e7 | void engine_texture.cpp_CTextureCache_free_FUN_005dcb30(CTextureCache * cache)
        ;   XREF to: 005dcb30 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005dd8ec
    NOP                                 ; 005dd8ef

