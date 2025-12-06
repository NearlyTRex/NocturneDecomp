; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_2d.c_getStringWidthFormatted_FUN_004027a0(char * format_string, ...)
;
; Parameters:
; char *           Stack[0x4]:4   format_string
; Local Variables:
; undefined        Stack[-0x1004]:1  local_1004
; undefined4       Stack[-0x4]:4  local_4
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005fdba8
;   engine_2d.c_getStringWidth_FUN_004018a0
;
; *****************************************************************************

section .text

    SUB ESP,0x1004                      ; 004027a0
        ;   Label: engine_2d.c_getStringWidthFormatted_FUN_004027a0
    LEA EAX,[ESP + 0x100c]              ; 004027a6
    MOV dword ptr [ESP + 0x1000],EAX    ; 004027ad
    LEA EAX,[ESP + 0x1000]              ; 004027b4
    PUSH EAX                            ; 004027bb
    MOV EDX,dword ptr [ESP + 0x100c]    ; 004027bc
    PUSH EDX                            ; 004027c3
    LEA EAX,[ESP + 0x8]                 ; 004027c4
    PUSH EAX                            ; 004027c8
    CALL crt_stdio.c_vsprintf_FUN_005fdba8 ; 004027c9 | int crt_stdio.c_vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t * args)
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004027ce
    MOV EAX,ESP                         ; 004027d1
    XOR ECX,ECX                         ; 004027d3
    PUSH EAX                            ; 004027d5
    MOV dword ptr [ESP + 0x1004],ECX    ; 004027d6
    CALL engine_2d.c_getStringWidth_FUN_004018a0 ; 004027dd | int engine_2d.c_getStringWidth_FUN_004018a0(char * text)
        ;   XREF to: 004018a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004027e2
    ADD ESP,0x1004                      ; 004027e5
    RET                                 ; 004027eb

