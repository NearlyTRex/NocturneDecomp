; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_updateTextureWithPalette_FUN_00597c60(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_02c8a680
;
; Called Functions:
;   engine_texture.cpp_FUN_005976a0
;   engine_texture.cpp_FUN_00597a20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00597c60
        ;   Label: engine_texture.cpp_updateTextureWithPalette_FUN_00597c60
    MOV EDX,dword ptr [ESP + 0x8]       ; 00597c61
    PUSH EDX                            ; 00597c65
    CALL engine_texture.cpp_FUN_00597a20 ; 00597c66
        ;   XREF to: 00597a20 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00597a20()
    ADD ESP,0x4                         ; 00597c6b
    MOV ECX,dword ptr [ESP + 0x8]       ; 00597c6e
    PUSH ECX                            ; 00597c72
    MOV EBX,dword ptr [0x02c8a680]      ; 00597c73 | DAT_02c8a680
    PUSH EBX                            ; 00597c79
    CALL engine_texture.cpp_FUN_005976a0 ; 00597c7a
        ;   XREF to: 005976a0 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_005976a0()
    ADD ESP,0x8                         ; 00597c7f
    POP EBX                             ; 00597c82
    RET                                 ; 00597c83

