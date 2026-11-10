; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_ini_cpp_FUN_004f4e6e(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_005c2cac
;   crt_unknown.c_sprintf_FUN_005bfb40
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 004f4e6e
        ;   Label: engine_ini.cpp_FUN_004f4e6e
    PUSH EBX                            ; 004f4e70
    PUSH ESI                            ; 004f4e71
    PUSH EDI                            ; 004f4e72
    SUB ESP,0x64                        ; 004f4e73
    MOV EBX,dword ptr [ESP + 0x7c]      ; 004f4e76
    MOV EDX,dword ptr [EBX + 0x4]       ; 004f4e7a
    PUSH EDX                            ; 004f4e7d
    MOV ECX,dword ptr [EBX]             ; 004f4e7e
    PUSH ECX                            ; 004f4e80
    PUSH 0x5e58fa                       ; 004f4e81
    LEA EAX,[ESP + 0xc]                 ; 004f4e86
    PUSH EAX                            ; 004f4e8a
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004f4e8b
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 004f4e90
    PUSH 0x64                           ; 004f4e93
    LEA EAX,[ESP + 0x4]                 ; 004f4e95
    PUSH EAX                            ; 004f4e99
    MOV ESI,dword ptr [ESP + 0x80]      ; 004f4e9a
    MOV EDX,dword ptr [ESP + 0x7c]      ; 004f4ea1
    PUSH ESI                            ; 004f4ea5
    MOV EDI,dword ptr [ESP + 0x80]      ; 004f4ea6
    MOV EDX,dword ptr [EDX + 0x200]     ; 004f4ead
    PUSH EDI                            ; 004f4eb3
    CALL dword ptr [EDX + 0x4]          ; 004f4eb4
    ADD ESP,0x10                        ; 004f4eb7
    PUSH EBX                            ; 004f4eba
    PUSH 0x5e58fe                       ; 004f4ebb
    LEA EAX,[ESP + 0x8]                 ; 004f4ec0
    PUSH EAX                            ; 004f4ec4
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004f4ec5
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0xc                         ; 004f4eca
    ADD ESP,0x64                        ; 004f4ecd
    POP EDI                             ; 004f4ed0
    POP ESI                             ; 004f4ed1
    POP EBX                             ; 004f4ed2
    RET                                 ; 004f4ed3

