; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_texture_cpp_FUN_005965c0(CTextureCache *this_ptr)
;
; Parameters:
; CTextureCache *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   engine_texture.cpp_FUN_005979d0 at 005979d8
;
; Called Functions:
;   engine_texture.cpp_FUN_005965d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005965c0
        ;   Label: engine_texture.cpp_FUN_005965c0
    PUSH EDX                            ; 005965c4
    CALL engine_texture.cpp_FUN_005965d0 ; 005965c5
        ;   XREF to: 005965d0 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_FUN_005965d0(CTextureCache * this_ptr)
    ADD ESP,0x4                         ; 005965ca
    RET                                 ; 005965cd

