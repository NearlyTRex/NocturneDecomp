; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_2d_c_drawTextColorFormatted_FUN_004024c0(int x_pos,int y_pos,char *format_string,...)
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
;   engine_2d.c_drawTextColor_FUN_00402430
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004024c0
        ;   Label: engine_2d.c_drawTextColorFormatted_FUN_004024c0
    PUSH ESI                            ; 004024c1
    SUB ESP,0x1004                      ; 004024c2
    LEA EAX,[ESP + 0x101c]              ; 004024c8
    MOV dword ptr [ESP + 0x1000],EAX    ; 004024cf
    LEA EAX,[ESP + 0x1000]              ; 004024d6
    PUSH EAX                            ; 004024dd
    MOV EDX,dword ptr [ESP + 0x101c]    ; 004024de
    PUSH EDX                            ; 004024e5
    LEA EAX,[ESP + 0x8]                 ; 004024e6
    PUSH EAX                            ; 004024ea
    CALL crt_stdio.c_vsprintf_FUN_005fdba8 ; 004024eb
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t * args)
    ADD ESP,0xc                         ; 004024f0
    MOV EBX,dword ptr [ESP + 0x1014]    ; 004024f3
    PUSH EBX                            ; 004024fa
    MOV ESI,dword ptr [ESP + 0x1014]    ; 004024fb
    PUSH ESI                            ; 00402502
    LEA EAX,[ESP + 0x8]                 ; 00402503
    XOR ECX,ECX                         ; 00402507
    PUSH EAX                            ; 00402509
    MOV dword ptr [ESP + 0x100c],ECX    ; 0040250a
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 00402511
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 00402516
    ADD ESP,0x1004                      ; 00402519
    POP ESI                             ; 0040251f
    POP EBX                             ; 00402520
    RET                                 ; 00402521

