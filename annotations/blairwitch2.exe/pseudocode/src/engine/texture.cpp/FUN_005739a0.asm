; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_texture_cpp_FUN_005739a0(CTextureCache *this_ptr)
;
; Parameters:
; CTextureCache *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   engine_texture.cpp_FUN_00574db0 at 00574db8
;
; Called Functions:
;   engine_texture.cpp_FUN_005739b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005739a0
        ;   Label: engine_texture.cpp_FUN_005739a0
    PUSH EDX                            ; 005739a4
    CALL engine_texture.cpp_FUN_005739b0 ; 005739a5
        ;   XREF to: 005739b0 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_FUN_005739b0(CTextureCache * this_ptr)
    ADD ESP,0x4                         ; 005739aa
    RET                                 ; 005739ad

