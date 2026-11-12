; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_font_cpp_FUN_004b0de0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; Called Functions:
;   engine_font.cpp_FUN_004b0e30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0de0
        ;   Label: engine_font.cpp_FUN_004b0de0
    PUSH ESI                            ; 004b0de1
    PUSH EDI                            ; 004b0de2
    PUSH EBP                            ; 004b0de3
    SUB ESP,0x4                         ; 004b0de4
    LEA EAX,[ESP + 0x30]                ; 004b0de7
    MOV dword ptr [ESP],EAX             ; 004b0deb
    MOV EAX,ESP                         ; 004b0dee
    PUSH EAX                            ; 004b0df0
    MOV EDX,dword ptr [ESP + 0x30]      ; 004b0df1
    PUSH EDX                            ; 004b0df5
    MOV ECX,dword ptr [ESP + 0x30]      ; 004b0df6
    PUSH ECX                            ; 004b0dfa
    MOV EBX,dword ptr [ESP + 0x30]      ; 004b0dfb
    PUSH EBX                            ; 004b0dff
    MOV ESI,dword ptr [ESP + 0x30]      ; 004b0e00
    PUSH ESI                            ; 004b0e04
    MOV EDI,dword ptr [ESP + 0x30]      ; 004b0e05
    PUSH EDI                            ; 004b0e09
    MOV EBP,dword ptr [ESP + 0x30]      ; 004b0e0a
    PUSH EBP                            ; 004b0e0e
    CALL engine_font.cpp_FUN_004b0e30   ; 004b0e0f
        ;   XREF to: 004b0e30 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0e30()
    ADD ESP,0x1c                        ; 004b0e14
    XOR EDX,EDX                         ; 004b0e17
    MOV dword ptr [ESP],EDX             ; 004b0e19
    ADD ESP,0x4                         ; 004b0e1c
    POP EBP                             ; 004b0e1f
    POP EDI                             ; 004b0e20
    POP ESI                             ; 004b0e21
    POP EBX                             ; 004b0e22
    RET                                 ; 004b0e23

