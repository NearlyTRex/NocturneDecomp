; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_font_cpp_FUN_004c2190(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; Called Functions:
;   engine_font.cpp_FUN_004c21e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c2190
        ;   Label: engine_font.cpp_FUN_004c2190
    PUSH ESI                            ; 004c2191
    PUSH EDI                            ; 004c2192
    PUSH EBP                            ; 004c2193
    SUB ESP,0x4                         ; 004c2194
    LEA EAX,[ESP + 0x30]                ; 004c2197
    MOV dword ptr [ESP],EAX             ; 004c219b
    MOV EAX,ESP                         ; 004c219e
    PUSH EAX                            ; 004c21a0
    MOV EDX,dword ptr [ESP + 0x30]      ; 004c21a1
    PUSH EDX                            ; 004c21a5
    MOV ECX,dword ptr [ESP + 0x30]      ; 004c21a6
    PUSH ECX                            ; 004c21aa
    MOV EBX,dword ptr [ESP + 0x30]      ; 004c21ab
    PUSH EBX                            ; 004c21af
    MOV ESI,dword ptr [ESP + 0x30]      ; 004c21b0
    PUSH ESI                            ; 004c21b4
    MOV EDI,dword ptr [ESP + 0x30]      ; 004c21b5
    PUSH EDI                            ; 004c21b9
    MOV EBP,dword ptr [ESP + 0x30]      ; 004c21ba
    PUSH EBP                            ; 004c21be
    CALL engine_font.cpp_FUN_004c21e0   ; 004c21bf
        ;   XREF to: 004c21e0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c21e0()
    ADD ESP,0x1c                        ; 004c21c4
    XOR EDX,EDX                         ; 004c21c7
    MOV dword ptr [ESP],EDX             ; 004c21c9
    ADD ESP,0x4                         ; 004c21cc
    POP EBP                             ; 004c21cf
    POP EDI                             ; 004c21d0
    POP ESI                             ; 004c21d1
    POP EBX                             ; 004c21d2
    RET                                 ; 004c21d3

