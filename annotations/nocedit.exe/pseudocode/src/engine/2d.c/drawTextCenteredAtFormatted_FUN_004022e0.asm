; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_2d.c_drawTextCenteredAtFormatted_FUN_004022e0(int x_pos, int y_pos, char * format_string, ...)
;
; Parameters:
; int              Stack[0x4]:4   x_pos
; int              Stack[0x8]:4   y_pos
; char *           Stack[0xc]:4   format_string
; Local Variables:
; undefined        Stack[-0x100c]:1  local_100c
; undefined4       Stack[-0xc]:4  local_c
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005fdba8
;   engine_2d.c_drawTextCenteredAt_FUN_00402280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004022e0
        ;   Label: engine_2d.c_drawTextCenteredAtFormatted_FUN_004022e0
    PUSH ESI                            ; 004022e1
    SUB ESP,0x1004                      ; 004022e2
    LEA EAX,[ESP + 0x101c]              ; 004022e8
    MOV dword ptr [ESP + 0x1000],EAX    ; 004022ef
    LEA EAX,[ESP + 0x1000]              ; 004022f6
    PUSH EAX                            ; 004022fd
    MOV EDX,dword ptr [ESP + 0x101c]    ; 004022fe
    PUSH EDX                            ; 00402305
    LEA EAX,[ESP + 0x8]                 ; 00402306
    PUSH EAX                            ; 0040230a
    CALL crt_stdio.c_vsprintf_FUN_005fdba8 ; 0040230b
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t * args)
    ADD ESP,0xc                         ; 00402310
    MOV EBX,dword ptr [ESP + 0x1014]    ; 00402313
    PUSH EBX                            ; 0040231a
    MOV ESI,dword ptr [ESP + 0x1014]    ; 0040231b
    PUSH ESI                            ; 00402322
    LEA EAX,[ESP + 0x8]                 ; 00402323
    XOR ECX,ECX                         ; 00402327
    PUSH EAX                            ; 00402329
    MOV dword ptr [ESP + 0x100c],ECX    ; 0040232a
    CALL engine_2d.c_drawTextCenteredAt_FUN_00402280 ; 00402331
        ;   XREF to: 00402280 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextCenteredAt_FUN_00402280(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 00402336
    ADD ESP,0x1004                      ; 00402339
    POP ESI                             ; 0040233f
    POP EBX                             ; 00402340
    RET                                 ; 00402341

