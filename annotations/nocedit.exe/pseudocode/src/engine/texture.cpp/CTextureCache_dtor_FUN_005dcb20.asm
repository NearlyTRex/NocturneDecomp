; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_texture_cpp_CTextureCache_dtor_FUN_005dcb20(CTextureCache *cache)
;
; Parameters:
; CTextureCache *  Stack[0x4]:4   cache
;
; XREF[1]:
;   engine_texture.cpp_freeTextureCache_FUN_005dd7a0 at 005dd7af
;
; Called Functions:
;   engine_texture.cpp_CTextureCache_free_FUN_005dcb30
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005dcb20
        ;   Label: engine_texture.cpp_CTextureCache_dtor_FUN_005dcb20
    PUSH EDX                            ; 005dcb24
    CALL engine_texture.cpp_CTextureCache_free_FUN_005dcb30 ; 005dcb25
        ;   XREF to: 005dcb30 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_CTextureCache_free_FUN_005dcb30(CTextureCache * cache)
    ADD ESP,0x4                         ; 005dcb2a
    RET                                 ; 005dcb2d

