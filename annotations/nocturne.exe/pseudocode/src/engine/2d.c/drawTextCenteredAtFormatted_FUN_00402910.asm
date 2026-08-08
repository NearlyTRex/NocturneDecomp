; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawTextCenteredAtFormatted_FUN_00402910(int x,int y,char *format_string,...)
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
;   engine_2d.c_drawTextCenteredAt_FUN_004028b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402910
        ;   Label: engine_2d.c_drawTextCenteredAtFormatted_FUN_00402910
    PUSH ESI                            ; 00402911
    SUB ESP,0x1004                      ; 00402912
    LEA EAX,[ESP + 0x101c]              ; 00402918
    MOV dword ptr [ESP + 0x1000],EAX    ; 0040291f
    LEA EAX,[ESP + 0x1000]              ; 00402926
    PUSH EAX                            ; 0040292d
    MOV EDX,dword ptr [ESP + 0x101c]    ; 0040292e
    PUSH EDX                            ; 00402935
    LEA EAX,[ESP + 0x8]                 ; 00402936
    PUSH EAX                            ; 0040293a
    CALL crt_stdio.c_vsprintf_FUN_00563a08 ; 0040293b
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_00563a08(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 00402940
    MOV EBX,dword ptr [ESP + 0x1014]    ; 00402943
    PUSH EBX                            ; 0040294a
    MOV ESI,dword ptr [ESP + 0x1014]    ; 0040294b
    PUSH ESI                            ; 00402952
    LEA EAX,[ESP + 0x8]                 ; 00402953
    XOR ECX,ECX                         ; 00402957
    PUSH EAX                            ; 00402959
    MOV dword ptr [ESP + 0x100c],ECX    ; 0040295a
    CALL engine_2d.c_drawTextCenteredAt_FUN_004028b0 ; 00402961
        ;   XREF to: 004028b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextCenteredAt_FUN_004028b0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00402966
    ADD ESP,0x1004                      ; 00402969
    POP ESI                             ; 0040296f
    POP EBX                             ; 00402970
    RET                                 ; 00402971

