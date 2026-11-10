; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_winrun_cpp_FUN_00590b0c(undefined4 param_1)
;
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_ini.cpp_FUN_004d8b20
;   unkafter_winrun.cpp_FUN_00590680
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 00590b0c
        ;   Label: unkafter_winrun.cpp_FUN_00590b0c
    PUSH EBX                            ; 00590b10
    PUSH ESI                            ; 00590b11
    PUSH EDI                            ; 00590b12
    PUSH EBP                            ; 00590b13
    SUB ESP,0x114                       ; 00590b14
    MOV EDI,dword ptr [ESP + 0x128]     ; 00590b1a
    MOV EDX,0x2665984                   ; 00590b21
    XOR ESI,ESI                         ; 00590b26
    MOV dword ptr [ESP + 0x108],EDX     ; 00590b28
    PUSH ESI                            ; 00590b2f
        ;   Label: LAB_00590b2f
    PUSH 0x5eeb84                       ; 00590b30
    LEA EAX,[ESP + 0x8]                 ; 00590b35
    XOR ECX,ECX                         ; 00590b39
    PUSH EAX                            ; 00590b3b
    MOV dword ptr [ESP + 0x10c],ECX     ; 00590b3c
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00590b43
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 00590b48
    LEA EAX,[ESP + 0x100]               ; 00590b4b
    PUSH EAX                            ; 00590b52
    LEA EAX,[ESP + 0x4]                 ; 00590b53
    PUSH EAX                            ; 00590b57
    PUSH EDI                            ; 00590b58
    CALL engine_ini.cpp_FUN_004d8b20    ; 00590b59
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    ADD ESP,0xc                         ; 00590b5e
    PUSH ESI                            ; 00590b61
    PUSH 0x5eeb97                       ; 00590b62
    LEA EAX,[ESP + 0x8]                 ; 00590b67
    PUSH EAX                            ; 00590b6b
    MOV dword ptr [ESP + 0x110],ESI     ; 00590b6c
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00590b73
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 00590b78
    LEA EAX,[ESP + 0x104]               ; 00590b7b
    PUSH EAX                            ; 00590b82
    LEA EAX,[ESP + 0x4]                 ; 00590b83
    PUSH EAX                            ; 00590b87
    PUSH EDI                            ; 00590b88
    CALL engine_ini.cpp_FUN_004d8b20    ; 00590b89
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    ADD ESP,0xc                         ; 00590b8e
    MOV EBX,dword ptr [ESP + 0x104]     ; 00590b91
    PUSH EBX                            ; 00590b98
    MOV EBP,dword ptr [ESP + 0x104]     ; 00590b99
    PUSH EBP                            ; 00590ba0
    PUSH ESI                            ; 00590ba1
    CALL unkafter_winrun.cpp_FUN_00590680 ; 00590ba2
        ;   XREF to: 00590680 (UNCONDITIONAL_CALL)  ; undefined unkafter_winrun.cpp_FUN_00590680()
    ADD ESP,0xc                         ; 00590ba7
    XOR EBX,EBX                         ; 00590baa
    MOV EAX,dword ptr [ESP + 0x108]     ; 00590bac
    MOV EBP,dword ptr [ESP + 0x108]     ; 00590bb3
    MOV dword ptr [ESP + 0x10c],EAX     ; 00590bba
    ADD EAX,0x8                         ; 00590bc1
    ADD EBP,0x4                         ; 00590bc4
    MOV dword ptr [ESP + 0x110],EAX     ; 00590bc7
    PUSH EBX                            ; 00590bce
        ;   Label: LAB_00590bce
    PUSH ESI                            ; 00590bcf
    PUSH 0x5eebad                       ; 00590bd0
    LEA EAX,[ESP + 0xc]                 ; 00590bd5
    PUSH EAX                            ; 00590bd9
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00590bda
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    IMUL EAX,EBX,0xc                    ; 00590bdf
    ADD ESP,0x10                        ; 00590be2
    ADD EAX,dword ptr [ESP + 0x10c]     ; 00590be5
    PUSH EAX                            ; 00590bec
    LEA EAX,[ESP + 0x4]                 ; 00590bed
    PUSH EAX                            ; 00590bf1
    PUSH EDI                            ; 00590bf2
    CALL engine_ini.cpp_FUN_004d8b20    ; 00590bf3
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    ADD ESP,0xc                         ; 00590bf8
    PUSH EBX                            ; 00590bfb
    PUSH ESI                            ; 00590bfc
    PUSH 0x5eebc7                       ; 00590bfd
    LEA EAX,[ESP + 0xc]                 ; 00590c02
    PUSH EAX                            ; 00590c06
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00590c07
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 00590c0c
    PUSH EBP                            ; 00590c0f
    LEA EAX,[ESP + 0x4]                 ; 00590c10
    PUSH EAX                            ; 00590c14
    PUSH EDI                            ; 00590c15
    CALL engine_ini.cpp_FUN_004d8b20    ; 00590c16
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    ADD ESP,0xc                         ; 00590c1b
    PUSH EBX                            ; 00590c1e
    PUSH ESI                            ; 00590c1f
    PUSH 0x5eebe1                       ; 00590c20
    LEA EAX,[ESP + 0xc]                 ; 00590c25
    PUSH EAX                            ; 00590c29
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00590c2a
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 00590c2f
    MOV ECX,dword ptr [ESP + 0x110]     ; 00590c32
    PUSH ECX                            ; 00590c39
    LEA EAX,[ESP + 0x4]                 ; 00590c3a
    PUSH EAX                            ; 00590c3e
    PUSH EDI                            ; 00590c3f
    CALL engine_ini.cpp_FUN_004d8b20    ; 00590c40
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    ADD ESP,0xc                         ; 00590c45
    MOV EAX,dword ptr [ESP + 0x110]     ; 00590c48
    ADD EBP,0xc                         ; 00590c4f
    ADD EAX,0xc                         ; 00590c52
    INC EBX                             ; 00590c55
    MOV dword ptr [ESP + 0x110],EAX     ; 00590c56
    CMP EBX,0x4                         ; 00590c5d
    JL 0x00590bce                       ; 00590c60
        ;   XREF to: 00590bce (CONDITIONAL_JUMP)  ; LAB_00590bce
    MOV EDX,dword ptr [ESP + 0x108]     ; 00590c66
    ADD EDX,0x30                        ; 00590c6d
    INC ESI                             ; 00590c70
    MOV dword ptr [ESP + 0x108],EDX     ; 00590c71
    CMP ESI,0x4                         ; 00590c78
    JL 0x00590b2f                       ; 00590c7b
        ;   XREF to: 00590b2f (CONDITIONAL_JUMP)  ; LAB_00590b2f
    ADD ESP,0x114                       ; 00590c81
    POP EBP                             ; 00590c87
    POP EDI                             ; 00590c88
    POP ESI                             ; 00590c89
    POP EBX                             ; 00590c8a
    RET                                 ; 00590c8b

