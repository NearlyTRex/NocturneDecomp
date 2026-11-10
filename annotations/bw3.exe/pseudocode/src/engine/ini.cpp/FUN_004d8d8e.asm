; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_ini_cpp_FUN_004d8d8e(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_005a5b9c
;   crt_unknown.c_sprintf_FUN_005a28c0
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 004d8d8e
        ;   Label: engine_ini.cpp_FUN_004d8d8e
    PUSH EBX                            ; 004d8d90
    PUSH ESI                            ; 004d8d91
    PUSH EDI                            ; 004d8d92
    SUB ESP,0x64                        ; 004d8d93
    MOV EBX,dword ptr [ESP + 0x7c]      ; 004d8d96
    MOV EDX,dword ptr [EBX + 0x4]       ; 004d8d9a
    PUSH EDX                            ; 004d8d9d
    MOV ECX,dword ptr [EBX]             ; 004d8d9e
    PUSH ECX                            ; 004d8da0
    PUSH 0x5c58c0                       ; 004d8da1
    LEA EAX,[ESP + 0xc]                 ; 004d8da6
    PUSH EAX                            ; 004d8daa
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004d8dab
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d8db0
    PUSH 0x64                           ; 004d8db3
    LEA EAX,[ESP + 0x4]                 ; 004d8db5
    PUSH EAX                            ; 004d8db9
    MOV ESI,dword ptr [ESP + 0x80]      ; 004d8dba
    MOV EDX,dword ptr [ESP + 0x7c]      ; 004d8dc1
    PUSH ESI                            ; 004d8dc5
    MOV EDI,dword ptr [ESP + 0x80]      ; 004d8dc6
    MOV EDX,dword ptr [EDX + 0x200]     ; 004d8dcd
    PUSH EDI                            ; 004d8dd3
    CALL dword ptr [EDX + 0x4]          ; 004d8dd4
    ADD ESP,0x10                        ; 004d8dd7
    PUSH EBX                            ; 004d8dda
    PUSH 0x5c58c4                       ; 004d8ddb
    LEA EAX,[ESP + 0x8]                 ; 004d8de0
    PUSH EAX                            ; 004d8de4
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 004d8de5
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0xc                         ; 004d8dea
    ADD ESP,0x64                        ; 004d8ded
    POP EDI                             ; 004d8df0
    POP ESI                             ; 004d8df1
    POP EBX                             ; 004d8df2
    RET                                 ; 004d8df3

