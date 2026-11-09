; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_ini_cpp_FUN_004d8c7e(int param_1,undefined4 param_2,undefined4 *param_3)
;
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_005ba8cc
;   crt_unknown.c_FUN_005b7790
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 004d8c7e
        ;   Label: engine_ini.cpp_FUN_004d8c7e
    PUSH EBX                            ; 004d8c80
    PUSH ESI                            ; 004d8c81
    PUSH EDI                            ; 004d8c82
    SUB ESP,0x64                        ; 004d8c83
    MOV EBX,dword ptr [ESP + 0x7c]      ; 004d8c86
    MOV EDX,dword ptr [EBX + 0x4]       ; 004d8c8a
    PUSH EDX                            ; 004d8c8d
    MOV ECX,dword ptr [EBX]             ; 004d8c8e
    PUSH ECX                            ; 004d8c90
    PUSH 0x5dad99                       ; 004d8c91
    LEA EAX,[ESP + 0xc]                 ; 004d8c96
    PUSH EAX                            ; 004d8c9a
    CALL crt_unknown.c_FUN_005b7790     ; 004d8c9b
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 004d8ca0
    PUSH 0x64                           ; 004d8ca3
    LEA EAX,[ESP + 0x4]                 ; 004d8ca5
    PUSH EAX                            ; 004d8ca9
    MOV ESI,dword ptr [ESP + 0x80]      ; 004d8caa
    MOV EDX,dword ptr [ESP + 0x7c]      ; 004d8cb1
    PUSH ESI                            ; 004d8cb5
    MOV EDI,dword ptr [ESP + 0x80]      ; 004d8cb6
    MOV EDX,dword ptr [EDX + 0x200]     ; 004d8cbd
    PUSH EDI                            ; 004d8cc3
    CALL dword ptr [EDX + 0x4]          ; 004d8cc4
    ADD ESP,0x10                        ; 004d8cc7
    PUSH EBX                            ; 004d8cca
    PUSH 0x5dad9d                       ; 004d8ccb
    LEA EAX,[ESP + 0x8]                 ; 004d8cd0
    PUSH EAX                            ; 004d8cd4
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 004d8cd5
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0xc                         ; 004d8cda
    ADD ESP,0x64                        ; 004d8cdd
    POP EDI                             ; 004d8ce0
    POP ESI                             ; 004d8ce1
    POP EBX                             ; 004d8ce2
    RET                                 ; 004d8ce3

