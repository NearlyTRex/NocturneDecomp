; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_texture_cpp_CTextureCache_free_FUN_00544e30(CTextureCache *this_ptr)
;
; Parameters:
; CTextureCache *  Stack[0x4]:4   this_ptr
;
; Called Functions:
;   engine_texture.cpp_CTextureCache_freeTextures_FUN_00544e60
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00544e30
        ;   Label: engine_texture.cpp_CTextureCache_free_FUN_00544e30
    PUSH EDX                            ; 00544e34
    CALL engine_texture.cpp_CTextureCache_freeTextures_FUN_00544e60 ; 00544e35
        ;   XREF to: 00544e60 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_CTextureCache_freeTextures_FUN_00544e60(CTextureCache * this_ptr)
    MOV EAX,0x1                         ; 00544e3a
    ADD ESP,0x4                         ; 00544e3f
    RET                                 ; 00544e42

