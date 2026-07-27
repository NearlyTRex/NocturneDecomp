; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_00544e50(undefined4 param_1)
;
;
; XREF[1]:
;   engine_texture.cpp_FUN_005458d0 at 005458d8
;
; Called Functions:
;   engine_texture.cpp_FUN_00544e60
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00544e50
        ;   Label: engine_texture.cpp_FUN_00544e50
    PUSH EDX                            ; 00544e54
    CALL engine_texture.cpp_FUN_00544e60 ; 00544e55
        ;   XREF to: 00544e60 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00544e60()
    ADD ESP,0x4                         ; 00544e5a
    RET                                 ; 00544e5d

