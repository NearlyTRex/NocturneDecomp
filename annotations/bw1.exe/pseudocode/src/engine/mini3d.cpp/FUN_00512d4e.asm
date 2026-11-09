; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_00512d4e(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d227e0
;   undefined4 DAT_01d25f18
;
; Called Functions:
;   engine_mini3d.cpp_FUN_00515ae0
;   engine_mini3d.cpp_FUN_00517660
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 00512d4e
        ;   Label: engine_mini3d.cpp_FUN_00512d4e
    CMP dword ptr [0x01d25f18],0x0      ; 00512d50 | DAT_01d25f18
        ;   Label: LAB_00512d50
    JZ 0x00512db8                       ; 00512d57
        ;   XREF to: 00512db8 (CONDITIONAL_JUMP)  ; LAB_00512db8
    MOV EBP,dword ptr [ESP + 0x20]      ; 00512d59
    PUSH EBP                            ; 00512d5d
    MOV EAX,dword ptr [ESP + 0x20]      ; 00512d5e
    PUSH EAX                            ; 00512d62
    MOV EDX,dword ptr [ESP + 0x20]      ; 00512d63
    PUSH EDX                            ; 00512d67
    MOV ECX,dword ptr [0x01d227e0]      ; 00512d68 | DAT_01d227e0
    PUSH ECX                            ; 00512d6e
    CALL engine_mini3d.cpp_FUN_00517660 ; 00512d6f
        ;   XREF to: 00517660 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517660()
    ADD ESP,0x10                        ; 00512d74
        ;   Label: LAB_00512d74
    POP EBP                             ; 00512d77
    POP EDI                             ; 00512d78
    POP ESI                             ; 00512d79
    POP EBX                             ; 00512d7a
    RET                                 ; 00512d7b
    PUSH EBP                            ; 00512db8
        ;   Label: LAB_00512db8
    MOV ECX,dword ptr [ESP + 0x24]      ; 00512db9
    PUSH ECX                            ; 00512dbd
    MOV EBX,dword ptr [ESP + 0x24]      ; 00512dbe
    PUSH EBX                            ; 00512dc2
    MOV ESI,dword ptr [ESP + 0x24]      ; 00512dc3
    PUSH ESI                            ; 00512dc7
    MOV EDI,dword ptr [0x01d227e0]      ; 00512dc8 | DAT_01d227e0
    PUSH EDI                            ; 00512dce
    CALL engine_mini3d.cpp_FUN_00515ae0 ; 00512dcf
        ;   XREF to: 00515ae0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00515ae0()
    ADD ESP,0x14                        ; 00512dd4
    POP EBP                             ; 00512dd7
    POP EDI                             ; 00512dd8
    POP ESI                             ; 00512dd9
    POP EBX                             ; 00512dda
    RET                                 ; 00512ddb

