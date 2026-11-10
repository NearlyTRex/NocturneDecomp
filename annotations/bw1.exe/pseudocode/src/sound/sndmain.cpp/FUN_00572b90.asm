; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00572b90(char *param_1,int param_2,int param_3,byte param_4)
;
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572b90
        ;   Label: sound_sndmain.cpp_FUN_00572b90
    PUSH ESI                            ; 00572b91
    PUSH EDI                            ; 00572b92
    PUSH EBP                            ; 00572b93
    MOV EDI,dword ptr [ESP + 0x14]      ; 00572b94
    MOV EAX,dword ptr [ESP + 0x18]      ; 00572b98
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00572b9c
    MOV EBX,EDI                         ; 00572ba0
    TEST EAX,EAX                        ; 00572ba2
    JNZ 0x00572ce8                      ; 00572ba4
        ;   XREF to: 00572ce8 (CONDITIONAL_JUMP)  ; LAB_00572ce8
    MOV byte ptr [EDI],0x0              ; 00572baa
    TEST byte ptr [ESP + 0x20],0x1      ; 00572bad
        ;   Label: LAB_00572bad
    JZ 0x00572bc7                       ; 00572bb2
        ;   XREF to: 00572bc7 (CONDITIONAL_JUMP)  ; LAB_00572bc7
    MOV EDX,dword ptr [ESI]             ; 00572bb4
    PUSH EDX                            ; 00572bb6
    PUSH 0x5f3e81                       ; 00572bb7
    PUSH EBX                            ; 00572bbc
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00572bbd
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 00572bc2
    ADD EBX,EAX                         ; 00572bc5
    TEST byte ptr [ESP + 0x20],0x2      ; 00572bc7
        ;   Label: LAB_00572bc7
    JZ 0x00572c30                       ; 00572bcc
        ;   XREF to: 00572c30 (CONDITIONAL_JUMP)  ; LAB_00572c30
    CMP dword ptr [ESI + 0x20],0x0      ; 00572bce
    JNZ 0x00572bfc                      ; 00572bd2
        ;   XREF to: 00572bfc (CONDITIONAL_JUMP)  ; LAB_00572bfc
    MOV EDI,dword ptr [ESI + 0x18]      ; 00572bd4
    PUSH EDI                            ; 00572bd7
    MOV EBP,dword ptr [ESI + 0x14]      ; 00572bd8
    PUSH EBP                            ; 00572bdb
    MOV EAX,dword ptr [ESI + 0x10]      ; 00572bdc
    PUSH EAX                            ; 00572bdf
    MOV EDX,dword ptr [ESI + 0xc]       ; 00572be0
    PUSH EDX                            ; 00572be3
    MOV ECX,dword ptr [ESI + 0x8]       ; 00572be4
    PUSH ECX                            ; 00572be7
    MOV EDI,dword ptr [ESI + 0x4]       ; 00572be8
    PUSH EDI                            ; 00572beb
    PUSH 0x5f3e8f                       ; 00572bec
    PUSH EBX                            ; 00572bf1
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00572bf2
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x20                        ; 00572bf7
    ADD EBX,EAX                         ; 00572bfa
    CMP dword ptr [ESI + 0x20],0x1      ; 00572bfc
        ;   Label: LAB_00572bfc
    JNZ 0x00572c16                      ; 00572c00
        ;   XREF to: 00572c16 (CONDITIONAL_JUMP)  ; LAB_00572c16
    MOV EAX,dword ptr [ESI + 0x1c]      ; 00572c02
    PUSH EAX                            ; 00572c05
    PUSH 0x5f3ea0                       ; 00572c06
    PUSH EBX                            ; 00572c0b
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00572c0c
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 00572c11
    ADD EBX,EAX                         ; 00572c14
    CMP dword ptr [ESI + 0x20],0x2      ; 00572c16
        ;   Label: LAB_00572c16
    JNZ 0x00572c30                      ; 00572c1a
        ;   XREF to: 00572c30 (CONDITIONAL_JUMP)  ; LAB_00572c30
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00572c1c
    PUSH ECX                            ; 00572c1f
    PUSH 0x5f3eb0                       ; 00572c20
    PUSH EBX                            ; 00572c25
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00572c26
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 00572c2b
    ADD EBX,EAX                         ; 00572c2e
    TEST byte ptr [ESP + 0x20],0x4      ; 00572c30
        ;   Label: LAB_00572c30
    JZ 0x00572c9c                       ; 00572c35
        ;   XREF to: 00572c9c (CONDITIONAL_JUMP)  ; LAB_00572c9c
    CMP dword ptr [ESI + 0x34],0x0      ; 00572c37
    JNZ 0x00572c68                      ; 00572c3b
        ;   XREF to: 00572c68 (CONDITIONAL_JUMP)  ; LAB_00572c68
    SUB ESP,0x8                         ; 00572c3d
    FLD float ptr [ESI + 0x2c]          ; 00572c40
    FSTP double ptr [ESP]               ; 00572c43
    SUB ESP,0x8                         ; 00572c46
    FLD float ptr [ESI + 0x28]          ; 00572c49
    FSTP double ptr [ESP]               ; 00572c4c
    SUB ESP,0x8                         ; 00572c4f
    FLD float ptr [ESI + 0x24]          ; 00572c52
    FSTP double ptr [ESP]               ; 00572c55
    PUSH 0x5f3ec1                       ; 00572c58
    PUSH EBX                            ; 00572c5d
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00572c5e
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x20                        ; 00572c63
    ADD EBX,EAX                         ; 00572c66
    CMP dword ptr [ESI + 0x34],0x1      ; 00572c68
        ;   Label: LAB_00572c68
    JNZ 0x00572c82                      ; 00572c6c
        ;   XREF to: 00572c82 (CONDITIONAL_JUMP)  ; LAB_00572c82
    MOV EAX,dword ptr [ESI + 0x30]      ; 00572c6e
    PUSH EAX                            ; 00572c71
    PUSH 0x5f3ed2                       ; 00572c72
    PUSH EBX                            ; 00572c77
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00572c78
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 00572c7d
    ADD EBX,EAX                         ; 00572c80
    CMP dword ptr [ESI + 0x34],0x2      ; 00572c82
        ;   Label: LAB_00572c82
    JNZ 0x00572c9c                      ; 00572c86
        ;   XREF to: 00572c9c (CONDITIONAL_JUMP)  ; LAB_00572c9c
    MOV ECX,dword ptr [ESI + 0x30]      ; 00572c88
    PUSH ECX                            ; 00572c8b
    PUSH 0x5f3ee2                       ; 00572c8c
    PUSH EBX                            ; 00572c91
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00572c92
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 00572c97
    ADD EBX,EAX                         ; 00572c9a
    TEST byte ptr [ESP + 0x20],0x8      ; 00572c9c
        ;   Label: LAB_00572c9c
    JZ 0x00572cbc                       ; 00572ca1
        ;   XREF to: 00572cbc (CONDITIONAL_JUMP)  ; LAB_00572cbc
    SUB ESP,0x8                         ; 00572ca3
    FLD float ptr [ESI + 0x38]          ; 00572ca6
    FSTP double ptr [ESP]               ; 00572ca9
    PUSH 0x5f3ef3                       ; 00572cac
    PUSH EBX                            ; 00572cb1
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00572cb2
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 00572cb7
    ADD EBX,EAX                         ; 00572cba
    TEST byte ptr [ESP + 0x20],0x10     ; 00572cbc
        ;   Label: LAB_00572cbc
    JZ 0x00572cdc                       ; 00572cc1
        ;   XREF to: 00572cdc (CONDITIONAL_JUMP)  ; LAB_00572cdc
    SUB ESP,0x8                         ; 00572cc3
    FLD float ptr [ESI + 0x3c]          ; 00572cc6
    FSTP double ptr [ESP]               ; 00572cc9
    PUSH 0x5f3efb                       ; 00572ccc
    PUSH EBX                            ; 00572cd1
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00572cd2
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 00572cd7
    ADD EBX,EAX                         ; 00572cda
    TEST byte ptr [ESP + 0x20],0x20     ; 00572cdc
        ;   Label: LAB_00572cdc
    JNZ 0x00572cff                      ; 00572ce1
        ;   XREF to: 00572cff (CONDITIONAL_JUMP)  ; LAB_00572cff
    POP EBP                             ; 00572ce3
    POP EDI                             ; 00572ce4
    POP ESI                             ; 00572ce5
    POP EBX                             ; 00572ce6
    RET                                 ; 00572ce7
    PUSH EAX                            ; 00572ce8
        ;   Label: LAB_00572ce8
    PUSH 0x5f3e7e                       ; 00572ce9
    PUSH EDI                            ; 00572cee
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00572cef
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 00572cf4
    LEA EBX,[EDI + EAX*0x1]             ; 00572cf7
    JMP 0x00572bad                      ; 00572cfa
        ;   XREF to: 00572bad (UNCONDITIONAL_JUMP)  ; LAB_00572bad
    SUB ESP,0x8                         ; 00572cff
        ;   Label: LAB_00572cff
    FLD float ptr [ESI + 0x40]          ; 00572d02
    FSTP double ptr [ESP]               ; 00572d05
    PUSH 0x5f3f04                       ; 00572d08
    PUSH EBX                            ; 00572d0d
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00572d0e
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 00572d13
    POP EBP                             ; 00572d16
    POP EDI                             ; 00572d17
    POP ESI                             ; 00572d18
    POP EBX                             ; 00572d19
    RET                                 ; 00572d1a

