; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_font_cpp_CBitFont_FUN_00490d20(CBitFont *param_1,int param_2,int param_3,int param_4,int param_5,char *param_6)
;
;
; Called Functions:
;   engine_font.cpp_CBitFont_FUN_00490d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490d20
        ;   Label: engine_font.cpp_CBitFont_FUN_00490d20
    PUSH ESI                            ; 00490d21
    PUSH EDI                            ; 00490d22
    PUSH EBP                            ; 00490d23
    SUB ESP,0x4                         ; 00490d24
    LEA EAX,[ESP + 0x30]                ; 00490d27
    MOV dword ptr [ESP],EAX             ; 00490d2b
    MOV EAX,ESP                         ; 00490d2e
    PUSH EAX                            ; 00490d30
    MOV EDX,dword ptr [ESP + 0x30]      ; 00490d31
    PUSH EDX                            ; 00490d35
    MOV ECX,dword ptr [ESP + 0x30]      ; 00490d36
    PUSH ECX                            ; 00490d3a
    MOV EBX,dword ptr [ESP + 0x30]      ; 00490d3b
    PUSH EBX                            ; 00490d3f
    MOV ESI,dword ptr [ESP + 0x30]      ; 00490d40
    PUSH ESI                            ; 00490d44
    MOV EDI,dword ptr [ESP + 0x30]      ; 00490d45
    PUSH EDI                            ; 00490d49
    MOV EBP,dword ptr [ESP + 0x30]      ; 00490d4a
    PUSH EBP                            ; 00490d4e
    CALL engine_font.cpp_CBitFont_FUN_00490d70 ; 00490d4f
        ;   XREF to: 00490d70 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_FUN_00490d70(CBitFont * this_ptr, int center_x, int y_pos, int color_mode, ...)
    ADD ESP,0x1c                        ; 00490d54
    XOR EDX,EDX                         ; 00490d57
    MOV dword ptr [ESP],EDX             ; 00490d59
    ADD ESP,0x4                         ; 00490d5c
    POP EBP                             ; 00490d5f
    POP EDI                             ; 00490d60
    POP ESI                             ; 00490d61
    POP EBX                             ; 00490d62
    RET                                 ; 00490d63

