; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_2d_c_FUN_00402d60(int param_1,int param_2,int param_3,char *param_4)
;
; Local Variables:
; undefined        Stack[-0x1010]:1  local_1010
; undefined4       Stack[-0x10]:4  local_10
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_00563a08
;   engine_2d.c_drawTextCenteredColor_FUN_00402cf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402d60
        ;   Label: engine_2d.c_FUN_00402d60
    PUSH ESI                            ; 00402d61
    PUSH EDI                            ; 00402d62
    SUB ESP,0x1004                      ; 00402d63
    LEA EAX,[ESP + 0x1024]              ; 00402d69
    MOV dword ptr [ESP + 0x1000],EAX    ; 00402d70
    LEA EAX,[ESP + 0x1000]              ; 00402d77
    PUSH EAX                            ; 00402d7e
    MOV EDX,dword ptr [ESP + 0x1024]    ; 00402d7f
    PUSH EDX                            ; 00402d86
    LEA EAX,[ESP + 0x8]                 ; 00402d87
    PUSH EAX                            ; 00402d8b
    CALL crt_stdio.c_vsprintf_FUN_00563a08 ; 00402d8c
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_00563a08(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 00402d91
    MOV EBX,dword ptr [ESP + 0x101c]    ; 00402d94
    PUSH EBX                            ; 00402d9b
    MOV ESI,dword ptr [ESP + 0x101c]    ; 00402d9c
    PUSH ESI                            ; 00402da3
    MOV EDI,dword ptr [ESP + 0x101c]    ; 00402da4
    PUSH EDI                            ; 00402dab
    LEA EAX,[ESP + 0xc]                 ; 00402dac
    XOR ECX,ECX                         ; 00402db0
    PUSH EAX                            ; 00402db2
    MOV dword ptr [ESP + 0x1010],ECX    ; 00402db3
    CALL engine_2d.c_drawTextCenteredColor_FUN_00402cf0 ; 00402dba
        ;   XREF to: 00402cf0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextCenteredColor_FUN_00402cf0(char * text, int left_x, int right_x, int y)
    ADD ESP,0x10                        ; 00402dbf
    ADD ESP,0x1004                      ; 00402dc2
    POP EDI                             ; 00402dc8
    POP ESI                             ; 00402dc9
    POP EBX                             ; 00402dca
    RET                                 ; 00402dcb

