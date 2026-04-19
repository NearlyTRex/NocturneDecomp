; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawTextCenteredFormatted_FUN_004023c0(int left_x,int right_x,int y,char *format_string,...)
;
; Parameters:
; int              Stack[0x4]:4   left_x
; int              Stack[0x8]:4   right_x
; int              Stack[0xc]:4   y
; char *           Stack[0x10]:4   format_string
; Local Variables:
; char[4096]       Stack[-0x1010]:4096  local_1010
; va_list_t        Stack[-0x10]:4  local_10
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005fdba8
;   engine_2d.c_drawTextCentered_FUN_00402350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004023c0
        ;   Label: engine_2d.c_drawTextCenteredFormatted_FUN_004023c0
    PUSH ESI                            ; 004023c1
    PUSH EDI                            ; 004023c2
    SUB ESP,0x1004                      ; 004023c3
    LEA EAX,[ESP + 0x1024]              ; 004023c9
    MOV dword ptr [ESP + 0x1000],EAX    ; 004023d0
    LEA EAX,[ESP + 0x1000]              ; 004023d7
    PUSH EAX                            ; 004023de
    MOV EDX,dword ptr [ESP + 0x1024]    ; 004023df
    PUSH EDX                            ; 004023e6
    LEA EAX,[ESP + 0x8]                 ; 004023e7
    PUSH EAX                            ; 004023eb
    CALL crt_stdio.c_vsprintf_FUN_005fdba8 ; 004023ec
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 004023f1
    MOV EBX,dword ptr [ESP + 0x101c]    ; 004023f4
    PUSH EBX                            ; 004023fb
    MOV ESI,dword ptr [ESP + 0x101c]    ; 004023fc
    PUSH ESI                            ; 00402403
    MOV EDI,dword ptr [ESP + 0x101c]    ; 00402404
    PUSH EDI                            ; 0040240b
    LEA EAX,[ESP + 0xc]                 ; 0040240c
    XOR ECX,ECX                         ; 00402410
    PUSH EAX                            ; 00402412
    MOV dword ptr [ESP + 0x1010],ECX    ; 00402413
    CALL engine_2d.c_drawTextCentered_FUN_00402350 ; 0040241a
        ;   XREF to: 00402350 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextCentered_FUN_00402350(char * text, int left_x, int right_x, int y)
    ADD ESP,0x10                        ; 0040241f
    ADD ESP,0x1004                      ; 00402422
    POP EDI                             ; 00402428
    POP ESI                             ; 00402429
    POP EBX                             ; 0040242a
    RET                                 ; 0040242b

