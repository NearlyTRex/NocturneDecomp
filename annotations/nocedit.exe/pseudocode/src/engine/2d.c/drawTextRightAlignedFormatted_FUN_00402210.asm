; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawTextRightAlignedFormatted_FUN_00402210(int x,int y,char *format_string,...)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; char *           Stack[0xc]:4   format_string
; Local Variables:
; char[4096]       Stack[-0x100c]:4096  local_100c
; va_list_t        Stack[-0xc]:4  local_c
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005fdba8
;   engine_2d.c_drawTextRightAligned_FUN_004021c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402210
        ;   Label: engine_2d.c_drawTextRightAlignedFormatted_FUN_00402210
    PUSH ESI                            ; 00402211
    SUB ESP,0x1004                      ; 00402212
    LEA EAX,[ESP + 0x101c]              ; 00402218
    MOV dword ptr [ESP + 0x1000],EAX    ; 0040221f
    LEA EAX,[ESP + 0x1000]              ; 00402226
    PUSH EAX                            ; 0040222d
    MOV EDX,dword ptr [ESP + 0x101c]    ; 0040222e
    PUSH EDX                            ; 00402235
    LEA EAX,[ESP + 0x8]                 ; 00402236
    PUSH EAX                            ; 0040223a
    CALL crt_stdio.c_vsprintf_FUN_005fdba8 ; 0040223b
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 00402240
    MOV EBX,dword ptr [ESP + 0x1014]    ; 00402243
    PUSH EBX                            ; 0040224a
    MOV ESI,dword ptr [ESP + 0x1014]    ; 0040224b
    PUSH ESI                            ; 00402252
    LEA EAX,[ESP + 0x8]                 ; 00402253
    XOR ECX,ECX                         ; 00402257
    PUSH EAX                            ; 00402259
    MOV dword ptr [ESP + 0x100c],ECX    ; 0040225a
    CALL engine_2d.c_drawTextRightAligned_FUN_004021c0 ; 00402261
        ;   XREF to: 004021c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextRightAligned_FUN_004021c0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00402266
    ADD ESP,0x1004                      ; 00402269
    POP ESI                             ; 0040226f
    POP EBX                             ; 00402270
    RET                                 ; 00402271

