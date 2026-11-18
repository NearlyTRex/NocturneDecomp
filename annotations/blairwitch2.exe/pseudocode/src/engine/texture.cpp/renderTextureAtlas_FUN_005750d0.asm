; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_texture_cpp_renderTextureAtlas_FUN_005750d0(void)
;
;
; Referenced Globals:
;   CTextureCache* g_TextureCacheInstance
;
; Called Functions:
;   engine_texture.cpp_CTextureCache_renderAllTextures_FUN_00574ce0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02652eb0]      ; 005750d0 | g_TextureCacheInstance
        ;   Label: engine_texture.cpp_renderTextureAtlas_FUN_005750d0
    PUSH EDX                            ; 005750d6
    CALL engine_texture.cpp_CTextureCache_renderAllTextures_FUN_00574ce0 ; 005750d7
        ;   XREF to: 00574ce0 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_CTextureCache_renderAllTextures_FUN_00574ce0(CTextureCache * this_ptr)
    ADD ESP,0x4                         ; 005750dc
    RET                                 ; 005750df

