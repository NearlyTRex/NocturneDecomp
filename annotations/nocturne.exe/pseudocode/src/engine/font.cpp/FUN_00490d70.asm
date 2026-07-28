; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_font_cpp_FUN_00490d70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,char *param_6,va_list_t param_7)
;
;
; XREF[1]:
;   engine_font.cpp_FUN_00490d20 at 00490d4f
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_00563a08
;   engine_font.cpp_CBitFont_drawTextCenter_FUN_00490ce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490d70
        ;   Label: engine_font.cpp_FUN_00490d70
    PUSH ESI                            ; 00490d71
    PUSH EDI                            ; 00490d72
    PUSH EBP                            ; 00490d73
    SUB ESP,0x1000                      ; 00490d74
    MOV EDX,dword ptr [ESP + 0x102c]    ; 00490d7a
    PUSH EDX                            ; 00490d81
    MOV ECX,dword ptr [ESP + 0x102c]    ; 00490d82
    PUSH ECX                            ; 00490d89
    LEA EAX,[ESP + 0x8]                 ; 00490d8a
    PUSH EAX                            ; 00490d8e
    CALL crt_stdio.c_vsprintf_FUN_00563a08 ; 00490d8f
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_00563a08(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 00490d94
    MOV EAX,ESP                         ; 00490d97
    PUSH EAX                            ; 00490d99
    MOV EBX,dword ptr [ESP + 0x1028]    ; 00490d9a
    PUSH EBX                            ; 00490da1
    MOV ESI,dword ptr [ESP + 0x1028]    ; 00490da2
    PUSH ESI                            ; 00490da9
    MOV EDI,dword ptr [ESP + 0x1028]    ; 00490daa
    PUSH EDI                            ; 00490db1
    MOV EBP,dword ptr [ESP + 0x1028]    ; 00490db2
    PUSH EBP                            ; 00490db9
    MOV EAX,dword ptr [ESP + 0x1028]    ; 00490dba
    PUSH EAX                            ; 00490dc1
    CALL engine_font.cpp_CBitFont_drawTextCenter_FUN_00490ce0 ; 00490dc2
        ;   XREF to: 00490ce0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawTextCenter_FUN_00490ce0()
    ADD ESP,0x18                        ; 00490dc7
    ADD ESP,0x1000                      ; 00490dca
    POP EBP                             ; 00490dd0
    POP EDI                             ; 00490dd1
    POP ESI                             ; 00490dd2
    POP EBX                             ; 00490dd3
    RET                                 ; 00490dd4

