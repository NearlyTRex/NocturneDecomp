; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_0056ac50(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_02cfd0d0
;
; Called Functions:
;   engine_texture.cpp_FUN_0056a690
;   engine_texture.cpp_FUN_0056aa10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056ac50
        ;   Label: engine_texture.cpp_FUN_0056ac50
    MOV EDX,dword ptr [ESP + 0x8]       ; 0056ac51
    PUSH EDX                            ; 0056ac55
    CALL engine_texture.cpp_FUN_0056aa10 ; 0056ac56
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_0056aa10()
    ADD ESP,0x4                         ; 0056ac5b
    MOV ECX,dword ptr [ESP + 0x8]       ; 0056ac5e
    PUSH ECX                            ; 0056ac62
    MOV EBX,dword ptr [0x02cfd0d0]      ; 0056ac63 | DAT_02cfd0d0
    PUSH EBX                            ; 0056ac69
    CALL engine_texture.cpp_FUN_0056a690 ; 0056ac6a
        ;   XREF to: 0056a690 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_0056a690()
    ADD ESP,0x8                         ; 0056ac6f
    POP EBX                             ; 0056ac72
    RET                                 ; 0056ac73

