; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawTextCenteredAtColorFormatted_FUN_00402c80(int x,int y,char *format_string,...)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; char *           Stack[0xc]:4   format_string
; Local Variables:
; undefined        Stack[-0x100c]:1  local_100c
; undefined4       Stack[-0xc]:4  local_c
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_00563a08
;   engine_2d.c_drawTextCenteredAtColor_FUN_00402c20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402c80
        ;   Label: engine_2d.c_drawTextCenteredAtColorFormatted_FUN_00402c80
    PUSH ESI                            ; 00402c81
    SUB ESP,0x1004                      ; 00402c82
    LEA EAX,[ESP + 0x101c]              ; 00402c88
    MOV dword ptr [ESP + 0x1000],EAX    ; 00402c8f
    LEA EAX,[ESP + 0x1000]              ; 00402c96
    PUSH EAX                            ; 00402c9d
    MOV EDX,dword ptr [ESP + 0x101c]    ; 00402c9e
    PUSH EDX                            ; 00402ca5
    LEA EAX,[ESP + 0x8]                 ; 00402ca6
    PUSH EAX                            ; 00402caa
    CALL crt_stdio.c_vsprintf_FUN_00563a08 ; 00402cab
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_00563a08(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 00402cb0
    MOV EBX,dword ptr [ESP + 0x1014]    ; 00402cb3
    PUSH EBX                            ; 00402cba
    MOV ESI,dword ptr [ESP + 0x1014]    ; 00402cbb
    PUSH ESI                            ; 00402cc2
    LEA EAX,[ESP + 0x8]                 ; 00402cc3
    XOR ECX,ECX                         ; 00402cc7
    PUSH EAX                            ; 00402cc9
    MOV dword ptr [ESP + 0x100c],ECX    ; 00402cca
    CALL engine_2d.c_drawTextCenteredAtColor_FUN_00402c20 ; 00402cd1
        ;   XREF to: 00402c20 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextCenteredAtColor_FUN_00402c20(char * text, int x, int y)
    ADD ESP,0xc                         ; 00402cd6
    ADD ESP,0x1004                      ; 00402cd9
    POP ESI                             ; 00402cdf
    POP EBX                             ; 00402ce0
    RET                                 ; 00402ce1

