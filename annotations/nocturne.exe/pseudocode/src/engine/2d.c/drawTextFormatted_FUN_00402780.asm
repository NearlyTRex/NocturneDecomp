; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawTextFormatted_FUN_00402780(int x,int y,char *format_string,...)
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
;   engine_2d.c_drawText_FUN_00402600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402780
        ;   Label: engine_2d.c_drawTextFormatted_FUN_00402780
    PUSH ESI                            ; 00402781
    SUB ESP,0x1004                      ; 00402782
    LEA EAX,[ESP + 0x101c]              ; 00402788
    MOV dword ptr [ESP + 0x1000],EAX    ; 0040278f
    LEA EAX,[ESP + 0x1000]              ; 00402796
    PUSH EAX                            ; 0040279d
    MOV EDX,dword ptr [ESP + 0x101c]    ; 0040279e
    PUSH EDX                            ; 004027a5
    LEA EAX,[ESP + 0x8]                 ; 004027a6
    PUSH EAX                            ; 004027aa
    CALL crt_stdio.c_vsprintf_FUN_00563a08 ; 004027ab
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_00563a08(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 004027b0
    MOV EBX,dword ptr [ESP + 0x1014]    ; 004027b3
    PUSH EBX                            ; 004027ba
    MOV ESI,dword ptr [ESP + 0x1014]    ; 004027bb
    PUSH ESI                            ; 004027c2
    LEA EAX,[ESP + 0x8]                 ; 004027c3
    XOR ECX,ECX                         ; 004027c7
    PUSH EAX                            ; 004027c9
    MOV dword ptr [ESP + 0x100c],ECX    ; 004027ca
    CALL engine_2d.c_drawText_FUN_00402600 ; 004027d1
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 004027d6
    ADD ESP,0x1004                      ; 004027d9
    POP ESI                             ; 004027df
    POP EBX                             ; 004027e0
    RET                                 ; 004027e1

