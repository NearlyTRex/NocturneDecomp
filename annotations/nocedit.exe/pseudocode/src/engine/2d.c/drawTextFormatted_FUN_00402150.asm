; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_2d_c_drawTextFormatted_FUN_00402150(int x_pos,int y_pos,char *format_string,...)
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
;   engine_2d.c_drawText_FUN_00401fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402150
        ;   Label: engine_2d.c_drawTextFormatted_FUN_00402150
    PUSH ESI                            ; 00402151
    SUB ESP,0x1004                      ; 00402152
    LEA EAX,[ESP + 0x101c]              ; 00402158
    MOV dword ptr [ESP + 0x1000],EAX    ; 0040215f
    LEA EAX,[ESP + 0x1000]              ; 00402166
    PUSH EAX                            ; 0040216d
    MOV EDX,dword ptr [ESP + 0x101c]    ; 0040216e
    PUSH EDX                            ; 00402175
    LEA EAX,[ESP + 0x8]                 ; 00402176
    PUSH EAX                            ; 0040217a
    CALL crt_stdio.c_vsprintf_FUN_005fdba8 ; 0040217b
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t * args)
    ADD ESP,0xc                         ; 00402180
    MOV EBX,dword ptr [ESP + 0x1014]    ; 00402183
    PUSH EBX                            ; 0040218a
    MOV ESI,dword ptr [ESP + 0x1014]    ; 0040218b
    PUSH ESI                            ; 00402192
    LEA EAX,[ESP + 0x8]                 ; 00402193
    XOR ECX,ECX                         ; 00402197
    PUSH EAX                            ; 00402199
    MOV dword ptr [ESP + 0x100c],ECX    ; 0040219a
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004021a1
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004021a6
    ADD ESP,0x1004                      ; 004021a9
    POP ESI                             ; 004021af
    POP EBX                             ; 004021b0
    RET                                 ; 004021b1

