; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00572b70(void)
;
; Local Variables:
; undefined        Stack[-0x20]:1  local_20
;
; XREF[1]:
;   FUN_00570f60 at 00571039
;
; Referenced Globals:
;   TerminatedCString s_C_FILE_INFO_00599288
;   TerminatedCString s_C_FILE_INFO_00599294
;
; Called Functions:
;   crt_env.c_getenv_FUN_00566e10
;   crt_string.c__strncpy_FUN_00565f70
;   FUN_0056e09c
;   FUN_0056f278
;   FUN_005738ac
;   FUN_00573930
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572b70
        ;   Label: FUN_00572b70
    PUSH ESI                            ; 00572b71
    PUSH EDI                            ; 00572b72
    PUSH EBP                            ; 00572b73
    SUB ESP,0x10                        ; 00572b74
    PUSH 0x599288                       ; 00572b77 | = "C_FILE_INFO"
    CALL crt_env.c_getenv_FUN_00566e10  ; 00572b7c
        ;   XREF to: 00566e10 (UNCONDITIONAL_CALL)  ; undefined crt_env.c_getenv_FUN_00566e10()
    ADD ESP,0x4                         ; 00572b81
    MOV EBX,EAX                         ; 00572b84
    TEST EAX,EAX                        ; 00572b86
    JZ 0x00572ca6                       ; 00572b88
        ;   XREF to: 00572ca6 (CONDITIONAL_JUMP)  ; LAB_00572ca6
    CMP byte ptr [EBX],0x0              ; 00572b8e
        ;   Label: LAB_00572b8e
    JZ 0x00572c99                       ; 00572b91
        ;   XREF to: 00572c99 (CONDITIONAL_JUMP)  ; LAB_00572c99
    MOV DL,0x3a                         ; 00572b97
    MOV ESI,EBX                         ; 00572b99
    MOV AL,byte ptr [ESI]               ; 00572b9b
        ;   Label: LAB_00572b9b
    CMP AL,DL                           ; 00572b9d
    JZ 0x00572bb3                       ; 00572b9f
        ;   XREF to: 00572bb3 (CONDITIONAL_JUMP)  ; LAB_00572bb3
    CMP AL,0x0                          ; 00572ba1
    JZ 0x00572bb1                       ; 00572ba3
        ;   XREF to: 00572bb1 (CONDITIONAL_JUMP)  ; LAB_00572bb1
    INC ESI                             ; 00572ba5
    MOV AL,byte ptr [ESI]               ; 00572ba6
    CMP AL,DL                           ; 00572ba8
    JZ 0x00572bb3                       ; 00572baa
        ;   XREF to: 00572bb3 (CONDITIONAL_JUMP)  ; LAB_00572bb3
    INC ESI                             ; 00572bac
    CMP AL,0x0                          ; 00572bad
    JNZ 0x00572b9b                      ; 00572baf
        ;   XREF to: 00572b9b (CONDITIONAL_JUMP)  ; LAB_00572b9b
    SUB ESI,ESI                         ; 00572bb1
        ;   Label: LAB_00572bb1
    MOV EDI,ESI                         ; 00572bb3
        ;   Label: LAB_00572bb3
    SUB ESI,EBX                         ; 00572bb5
    PUSH ESI                            ; 00572bb7
    PUSH EBX                            ; 00572bb8
    LEA EBX,[ESP + 0x8]                 ; 00572bb9
    PUSH EBX                            ; 00572bbd
    CALL crt_string.c__strncpy_FUN_00565f70 ; 00572bbe
        ;   XREF to: 00565f70 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__strncpy_FUN_00565f70()
    ADD ESP,0xc                         ; 00572bc3
    PUSH 0x10                           ; 00572bc6
    PUSH 0x0                            ; 00572bc8
    LEA EBX,[ESP + 0x8]                 ; 00572bca
    XOR DL,DL                           ; 00572bce
    PUSH EBX                            ; 00572bd0
    MOV byte ptr [ESP + ESI*0x1 + 0xc],DL ; 00572bd1
    LEA ESI,[EDI + 0x1]                 ; 00572bd5
    CALL FUN_005738ac                   ; 00572bd8
        ;   XREF to: 005738ac (UNCONDITIONAL_CALL)  ; undefined FUN_005738ac()
    MOV DL,0x3a                         ; 00572bdd
    ADD ESP,0xc                         ; 00572bdf
    MOV EBP,EAX                         ; 00572be2
    MOV EBX,ESI                         ; 00572be4
    MOV AL,byte ptr [ESI]               ; 00572be6
        ;   Label: LAB_00572be6
    CMP AL,DL                           ; 00572be8
    JZ 0x00572bfe                       ; 00572bea
        ;   XREF to: 00572bfe (CONDITIONAL_JUMP)  ; LAB_00572bfe
    CMP AL,0x0                          ; 00572bec
    JZ 0x00572bfc                       ; 00572bee
        ;   XREF to: 00572bfc (CONDITIONAL_JUMP)  ; LAB_00572bfc
    INC ESI                             ; 00572bf0
    MOV AL,byte ptr [ESI]               ; 00572bf1
    CMP AL,DL                           ; 00572bf3
    JZ 0x00572bfe                       ; 00572bf5
        ;   XREF to: 00572bfe (CONDITIONAL_JUMP)  ; LAB_00572bfe
    INC ESI                             ; 00572bf7
    CMP AL,0x0                          ; 00572bf8
    JNZ 0x00572be6                      ; 00572bfa
        ;   XREF to: 00572be6 (CONDITIONAL_JUMP)  ; LAB_00572be6
    SUB ESI,ESI                         ; 00572bfc
        ;   Label: LAB_00572bfc
    MOV EDI,ESI                         ; 00572bfe
        ;   Label: LAB_00572bfe
    SUB ESI,EBX                         ; 00572c00
    PUSH ESI                            ; 00572c02
    PUSH EBX                            ; 00572c03
    LEA EBX,[ESP + 0x8]                 ; 00572c04
    PUSH EBX                            ; 00572c08
    CALL crt_string.c__strncpy_FUN_00565f70 ; 00572c09
        ;   XREF to: 00565f70 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__strncpy_FUN_00565f70()
    ADD ESP,0xc                         ; 00572c0e
    PUSH 0x10                           ; 00572c11
    PUSH 0x0                            ; 00572c13
    LEA EBX,[ESP + 0x8]                 ; 00572c15
    XOR DH,DH                           ; 00572c19
    PUSH EBX                            ; 00572c1b
    MOV byte ptr [ESP + ESI*0x1 + 0xc],DH ; 00572c1c
    LEA ESI,[EDI + 0x1]                 ; 00572c20
    CALL FUN_005738ac                   ; 00572c23
        ;   XREF to: 005738ac (UNCONDITIONAL_CALL)  ; undefined FUN_005738ac()
    MOV dword ptr [ESP + 0x18],EAX      ; 00572c28
    ADD ESP,0xc                         ; 00572c2c
    MOV DL,0x2a                         ; 00572c2f
    MOV EBX,ESI                         ; 00572c31
    MOV AL,byte ptr [ESI]               ; 00572c33
        ;   Label: LAB_00572c33
    CMP AL,DL                           ; 00572c35
    JZ 0x00572c4b                       ; 00572c37
        ;   XREF to: 00572c4b (CONDITIONAL_JUMP)  ; LAB_00572c4b
    CMP AL,0x0                          ; 00572c39
    JZ 0x00572c49                       ; 00572c3b
        ;   XREF to: 00572c49 (CONDITIONAL_JUMP)  ; LAB_00572c49
    INC ESI                             ; 00572c3d
    MOV AL,byte ptr [ESI]               ; 00572c3e
    CMP AL,DL                           ; 00572c40
    JZ 0x00572c4b                       ; 00572c42
        ;   XREF to: 00572c4b (CONDITIONAL_JUMP)  ; LAB_00572c4b
    INC ESI                             ; 00572c44
    CMP AL,0x0                          ; 00572c45
    JNZ 0x00572c33                      ; 00572c47
        ;   XREF to: 00572c33 (CONDITIONAL_JUMP)  ; LAB_00572c33
    SUB ESI,ESI                         ; 00572c49
        ;   Label: LAB_00572c49
    MOV EDI,ESI                         ; 00572c4b
        ;   Label: LAB_00572c4b
    SUB ESI,EBX                         ; 00572c4d
    PUSH ESI                            ; 00572c4f
    PUSH EBX                            ; 00572c50
    LEA EBX,[ESP + 0x8]                 ; 00572c51
    PUSH EBX                            ; 00572c55
    CALL crt_string.c__strncpy_FUN_00565f70 ; 00572c56
        ;   XREF to: 00565f70 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__strncpy_FUN_00565f70()
    ADD ESP,0xc                         ; 00572c5b
    PUSH 0x10                           ; 00572c5e
    XOR BL,BL                           ; 00572c60
    PUSH 0x0                            ; 00572c62
    MOV byte ptr [ESP + ESI*0x1 + 0x8],BL ; 00572c64
    LEA EBX,[ESP + 0x8]                 ; 00572c68
    PUSH EBX                            ; 00572c6c
    CALL FUN_005738ac                   ; 00572c6d
        ;   XREF to: 005738ac (UNCONDITIONAL_CALL)  ; undefined FUN_005738ac()
    ADD ESP,0xc                         ; 00572c72
    PUSH EBP                            ; 00572c75
    MOV EDX,dword ptr [ESP + 0x10]      ; 00572c76
    PUSH EDX                            ; 00572c7a
    MOV EBX,EAX                         ; 00572c7b
    CALL FUN_0056e09c                   ; 00572c7d
        ;   XREF to: 0056e09c (UNCONDITIONAL_CALL)  ; undefined FUN_0056e09c()
    ADD ESP,0x8                         ; 00572c82
    PUSH EBX                            ; 00572c85
    PUSH EBP                            ; 00572c86
    LEA ESI,[EDI + 0x1]                 ; 00572c87
    CALL FUN_0056f278                   ; 00572c8a
        ;   XREF to: 0056f278 (UNCONDITIONAL_CALL)  ; undefined FUN_0056f278()
    MOV EBX,ESI                         ; 00572c8f
    ADD ESP,0x8                         ; 00572c91
    JMP 0x00572b8e                      ; 00572c94
        ;   XREF to: 00572b8e (UNCONDITIONAL_JUMP)  ; LAB_00572b8e
    PUSH 0x599294                       ; 00572c99 | = "C_FILE_INFO="
        ;   Label: LAB_00572c99
    CALL FUN_00573930                   ; 00572c9e
        ;   XREF to: 00573930 (UNCONDITIONAL_CALL)  ; undefined FUN_00573930()
    ADD ESP,0x4                         ; 00572ca3
    ADD ESP,0x10                        ; 00572ca6
        ;   Label: LAB_00572ca6
    POP EBP                             ; 00572ca9
    POP EDI                             ; 00572caa
    POP ESI                             ; 00572cab
    POP EBX                             ; 00572cac
    RET                                 ; 00572cad

