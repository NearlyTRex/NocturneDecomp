; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_palette_cpp_FUN_00510d50(int *param_1)
;
;
; XREF[1]:
;   engine_font.cpp_FUN_004a97a0 at 004a97df
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004f23d0
;   engine_mini3d.cpp_FUN_004f23e0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00510d50
        ;   Label: engine_palette.cpp_FUN_00510d50
    PUSH EBP                            ; 00510d51
    MOV ESI,dword ptr [ESP + 0xc]       ; 00510d52
    CALL engine_mini3d.cpp_FUN_004f23d0 ; 00510d56
        ;   XREF to: 004f23d0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f23d0()
    MOV EDX,dword ptr [ESI]             ; 00510d5b
    XOR EBP,EBP                         ; 00510d5d
    TEST EDX,EDX                        ; 00510d5f
    JLE 0x00510da6                      ; 00510d61
        ;   XREF to: 00510da6 (CONDITIONAL_JUMP)  ; LAB_00510da6
    PUSH EDI                            ; 00510d63
    PUSH EBX                            ; 00510d64
    LEA EDI,[ESI + 0x324]               ; 00510d65
    MOV EBX,ESI                         ; 00510d6b
    MOV ECX,dword ptr [EBX + 0x68b4]    ; 00510d6d
        ;   Label: LAB_00510d6d
    PUSH ECX                            ; 00510d73
    MOV EDX,dword ptr [EBX + 0x6724]    ; 00510d74
    PUSH EDX                            ; 00510d7a
    MOV ECX,dword ptr [EBX + 0x194]     ; 00510d7b
    PUSH ECX                            ; 00510d81
    MOV EDX,dword ptr [EBX + 0x4]       ; 00510d82
    PUSH EDX                            ; 00510d85
    PUSH EDI                            ; 00510d86
    ADD EBX,0x4                         ; 00510d87
    MOV EAX,dword ptr [ESI + 0x6a44]    ; 00510d8a
    PUSH ESI                            ; 00510d90
    INC EBP                             ; 00510d91
    ADD EDI,0x100                       ; 00510d92
    CALL dword ptr [EAX + 0x4]          ; 00510d98
    MOV ECX,dword ptr [ESI]             ; 00510d9b
    ADD ESP,0x18                        ; 00510d9d
    CMP EBP,ECX                         ; 00510da0
    JL 0x00510d6d                       ; 00510da2
        ;   XREF to: 00510d6d (CONDITIONAL_JUMP)  ; LAB_00510d6d
    POP EBX                             ; 00510da4
    POP EDI                             ; 00510da5
    CALL engine_mini3d.cpp_FUN_004f23e0 ; 00510da6
        ;   XREF to: 004f23e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f23e0()
        ;   Label: LAB_00510da6
    MOV dword ptr [ESI],0x0             ; 00510dab
    POP EBP                             ; 00510db1
    POP ESI                             ; 00510db2
    RET                                 ; 00510db3

