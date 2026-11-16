; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_texture_cpp_renderTextureAtlas_FUN_00597cf0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02c8a680
;
; Called Functions:
;   engine_texture.cpp_CTextureCache_renderAllTextures_FUN_00597900
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02c8a680]      ; 00597cf0 | DAT_02c8a680
        ;   Label: engine_texture.cpp_renderTextureAtlas_FUN_00597cf0
    PUSH EDX                            ; 00597cf6
    CALL engine_texture.cpp_CTextureCache_renderAllTextures_FUN_00597900 ; 00597cf7
        ;   XREF to: 00597900 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_CTextureCache_renderAllTextures_FUN_00597900(CTextureCache * this_ptr)
    ADD ESP,0x4                         ; 00597cfc
    RET                                 ; 00597cff

