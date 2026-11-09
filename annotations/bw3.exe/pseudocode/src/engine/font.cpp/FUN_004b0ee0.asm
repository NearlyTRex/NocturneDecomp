; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_font_cpp_FUN_004b0ee0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; Called Functions:
;   engine_font.cpp_FUN_004b0f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0ee0
        ;   Label: engine_font.cpp_FUN_004b0ee0
    PUSH ESI                            ; 004b0ee1
    PUSH EDI                            ; 004b0ee2
    PUSH EBP                            ; 004b0ee3
    SUB ESP,0x4                         ; 004b0ee4
    LEA EAX,[ESP + 0x30]                ; 004b0ee7
    MOV dword ptr [ESP],EAX             ; 004b0eeb
    MOV EAX,ESP                         ; 004b0eee
    PUSH EAX                            ; 004b0ef0
    MOV EDX,dword ptr [ESP + 0x30]      ; 004b0ef1
    PUSH EDX                            ; 004b0ef5
    MOV ECX,dword ptr [ESP + 0x30]      ; 004b0ef6
    PUSH ECX                            ; 004b0efa
    MOV EBX,dword ptr [ESP + 0x30]      ; 004b0efb
    PUSH EBX                            ; 004b0eff
    MOV ESI,dword ptr [ESP + 0x30]      ; 004b0f00
    PUSH ESI                            ; 004b0f04
    MOV EDI,dword ptr [ESP + 0x30]      ; 004b0f05
    PUSH EDI                            ; 004b0f09
    MOV EBP,dword ptr [ESP + 0x30]      ; 004b0f0a
    PUSH EBP                            ; 004b0f0e
    CALL engine_font.cpp_FUN_004b0f30   ; 004b0f0f
        ;   XREF to: 004b0f30 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b0f30(CBitFont * this_ptr, int center_x, int y_pos, int color_mode, ...)
    ADD ESP,0x1c                        ; 004b0f14
    XOR EDX,EDX                         ; 004b0f17
    MOV dword ptr [ESP],EDX             ; 004b0f19
    ADD ESP,0x4                         ; 004b0f1c
    POP EBP                             ; 004b0f1f
    POP EDI                             ; 004b0f20
    POP ESI                             ; 004b0f21
    POP EBX                             ; 004b0f22
    RET                                 ; 004b0f23

