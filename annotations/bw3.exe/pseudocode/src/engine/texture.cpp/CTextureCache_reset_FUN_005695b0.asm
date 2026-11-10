; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_texture_cpp_CTextureCache_reset_FUN_005695b0(CTextureCache *this_ptr)
;
; Parameters:
; CTextureCache *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   engine_texture.cpp_freeTextureCache_FUN_0056a9c0 at 0056a9c8
;
; Called Functions:
;   engine_texture.cpp_FUN_005695c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005695b0
        ;   Label: engine_texture.cpp_CTextureCache_reset_FUN_005695b0
    PUSH EDX                            ; 005695b4
    CALL engine_texture.cpp_FUN_005695c0 ; 005695b5
        ;   XREF to: 005695c0 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_FUN_005695c0(CTextureCache * this_ptr)
    ADD ESP,0x4                         ; 005695ba
    RET                                 ; 005695bd

