; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawTextCenteredColorFormatted_FUN_00402730(int left_x,int right_x,int y,char *format_string,...)
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
;   crt_stdio.c__vsprintf_FUN_005fdba8
;   engine_2d.c_drawTextCenteredColor_FUN_004026c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402730
        ;   Label: engine_2d.c_drawTextCenteredColorFormatted_FUN_00402730
    PUSH ESI                            ; 00402731
    PUSH EDI                            ; 00402732
    SUB ESP,0x1004                      ; 00402733
    LEA EAX,[ESP + 0x1024]              ; 00402739
    MOV dword ptr [ESP + 0x1000],EAX    ; 00402740
    LEA EAX,[ESP + 0x1000]              ; 00402747
    PUSH EAX                            ; 0040274e
    MOV EDX,dword ptr [ESP + 0x1024]    ; 0040274f
    PUSH EDX                            ; 00402756
    LEA EAX,[ESP + 0x8]                 ; 00402757
    PUSH EAX                            ; 0040275b
    CALL crt_stdio.c__vsprintf_FUN_005fdba8 ; 0040275c
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 00402761
    MOV EBX,dword ptr [ESP + 0x101c]    ; 00402764
    PUSH EBX                            ; 0040276b
    MOV ESI,dword ptr [ESP + 0x101c]    ; 0040276c
    PUSH ESI                            ; 00402773
    MOV EDI,dword ptr [ESP + 0x101c]    ; 00402774
    PUSH EDI                            ; 0040277b
    LEA EAX,[ESP + 0xc]                 ; 0040277c
    XOR ECX,ECX                         ; 00402780
    PUSH EAX                            ; 00402782
    MOV dword ptr [ESP + 0x1010],ECX    ; 00402783
    CALL engine_2d.c_drawTextCenteredColor_FUN_004026c0 ; 0040278a
        ;   XREF to: 004026c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextCenteredColor_FUN_004026c0(char * text, int left_x, int right_x, int y)
    ADD ESP,0x10                        ; 0040278f
    ADD ESP,0x1004                      ; 00402792
    POP EDI                             ; 00402798
    POP ESI                             ; 00402799
    POP EBX                             ; 0040279a
    RET                                 ; 0040279b

