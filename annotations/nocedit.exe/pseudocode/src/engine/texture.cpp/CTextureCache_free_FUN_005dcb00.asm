; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl engine_texture_cpp_CTextureCache_free_FUN_005dcb00(CTextureCache *this_ptr)
;
; Parameters:
; CTextureCache *  Stack[0x4]:4   this_ptr
;
; Called Functions:
;   engine_texture.cpp_CTextureCache_freeTextures_FUN_005dcb30
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005dcb00
        ;   Label: engine_texture.cpp_CTextureCache_free_FUN_005dcb00
    PUSH EDX                            ; 005dcb04
    CALL engine_texture.cpp_CTextureCache_freeTextures_FUN_005dcb30 ; 005dcb05
        ;   XREF to: 005dcb30 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_CTextureCache_freeTextures_FUN_005dcb30(CTextureCache * this_ptr)
    MOV EAX,0x1                         ; 005dcb0a
    ADD ESP,0x4                         ; 005dcb0f
    RET                                 ; 005dcb12

