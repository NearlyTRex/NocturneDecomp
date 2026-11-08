; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c59e0(void)
;
;
; XREF[1]:
;   FUN_005c45b0 at 005c4689
;
; Called Functions:
;   FUN_005b9cf0
;   FUN_005bac90
;   FUN_005c0878
;   FUN_005c098c
;   FUN_005c618c
;   FUN_005c6210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c59e0
        ;   Label: FUN_005c59e0
    PUSH ESI                            ; 005c59e1
    PUSH EDI                            ; 005c59e2
    PUSH EBP                            ; 005c59e3
    SUB ESP,0x10                        ; 005c59e4
    PUSH 0x5f20f8                       ; 005c59e7
    CALL FUN_005bac90                   ; 005c59ec
        ;   XREF to: 005bac90 (UNCONDITIONAL_CALL)  ; undefined FUN_005bac90()
    ADD ESP,0x4                         ; 005c59f1
    MOV EBX,EAX                         ; 005c59f4
    TEST EAX,EAX                        ; 005c59f6
    JZ 0x005c5b16                       ; 005c59f8
        ;   XREF to: 005c5b16 (CONDITIONAL_JUMP)  ; LAB_005c5b16
    CMP byte ptr [EBX],0x0              ; 005c59fe
        ;   Label: LAB_005c59fe
    JZ 0x005c5b09                       ; 005c5a01
        ;   XREF to: 005c5b09 (CONDITIONAL_JUMP)  ; LAB_005c5b09
    MOV DL,0x3a                         ; 005c5a07
    MOV ESI,EBX                         ; 005c5a09
    MOV AL,byte ptr [ESI]               ; 005c5a0b
        ;   Label: LAB_005c5a0b
    CMP AL,DL                           ; 005c5a0d
    JZ 0x005c5a23                       ; 005c5a0f
        ;   XREF to: 005c5a23 (CONDITIONAL_JUMP)  ; LAB_005c5a23
    CMP AL,0x0                          ; 005c5a11
    JZ 0x005c5a21                       ; 005c5a13
        ;   XREF to: 005c5a21 (CONDITIONAL_JUMP)  ; LAB_005c5a21
    INC ESI                             ; 005c5a15
    MOV AL,byte ptr [ESI]               ; 005c5a16
    CMP AL,DL                           ; 005c5a18
    JZ 0x005c5a23                       ; 005c5a1a
        ;   XREF to: 005c5a23 (CONDITIONAL_JUMP)  ; LAB_005c5a23
    INC ESI                             ; 005c5a1c
    CMP AL,0x0                          ; 005c5a1d
    JNZ 0x005c5a0b                      ; 005c5a1f
        ;   XREF to: 005c5a0b (CONDITIONAL_JUMP)  ; LAB_005c5a0b
    SUB ESI,ESI                         ; 005c5a21
        ;   Label: LAB_005c5a21
    MOV EDI,ESI                         ; 005c5a23
        ;   Label: LAB_005c5a23
    SUB ESI,EBX                         ; 005c5a25
    PUSH ESI                            ; 005c5a27
    PUSH EBX                            ; 005c5a28
    LEA EBX,[ESP + 0x8]                 ; 005c5a29
    PUSH EBX                            ; 005c5a2d
    CALL FUN_005b9cf0                   ; 005c5a2e
        ;   XREF to: 005b9cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9cf0()
    ADD ESP,0xc                         ; 005c5a33
    PUSH 0x10                           ; 005c5a36
    PUSH 0x0                            ; 005c5a38
    LEA EBX,[ESP + 0x8]                 ; 005c5a3a
    XOR DL,DL                           ; 005c5a3e
    PUSH EBX                            ; 005c5a40
    MOV byte ptr [ESP + ESI*0x1 + 0xc],DL ; 005c5a41
    LEA ESI,[EDI + 0x1]                 ; 005c5a45
    CALL FUN_005c618c                   ; 005c5a48
        ;   XREF to: 005c618c (UNCONDITIONAL_CALL)  ; undefined FUN_005c618c()
    MOV DL,0x3a                         ; 005c5a4d
    ADD ESP,0xc                         ; 005c5a4f
    MOV EBP,EAX                         ; 005c5a52
    MOV EBX,ESI                         ; 005c5a54
    MOV AL,byte ptr [ESI]               ; 005c5a56
        ;   Label: LAB_005c5a56
    CMP AL,DL                           ; 005c5a58
    JZ 0x005c5a6e                       ; 005c5a5a
        ;   XREF to: 005c5a6e (CONDITIONAL_JUMP)  ; LAB_005c5a6e
    CMP AL,0x0                          ; 005c5a5c
    JZ 0x005c5a6c                       ; 005c5a5e
        ;   XREF to: 005c5a6c (CONDITIONAL_JUMP)  ; LAB_005c5a6c
    INC ESI                             ; 005c5a60
    MOV AL,byte ptr [ESI]               ; 005c5a61
    CMP AL,DL                           ; 005c5a63
    JZ 0x005c5a6e                       ; 005c5a65
        ;   XREF to: 005c5a6e (CONDITIONAL_JUMP)  ; LAB_005c5a6e
    INC ESI                             ; 005c5a67
    CMP AL,0x0                          ; 005c5a68
    JNZ 0x005c5a56                      ; 005c5a6a
        ;   XREF to: 005c5a56 (CONDITIONAL_JUMP)  ; LAB_005c5a56
    SUB ESI,ESI                         ; 005c5a6c
        ;   Label: LAB_005c5a6c
    MOV EDI,ESI                         ; 005c5a6e
        ;   Label: LAB_005c5a6e
    SUB ESI,EBX                         ; 005c5a70
    PUSH ESI                            ; 005c5a72
    PUSH EBX                            ; 005c5a73
    LEA EBX,[ESP + 0x8]                 ; 005c5a74
    PUSH EBX                            ; 005c5a78
    CALL FUN_005b9cf0                   ; 005c5a79
        ;   XREF to: 005b9cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9cf0()
    ADD ESP,0xc                         ; 005c5a7e
    PUSH 0x10                           ; 005c5a81
    PUSH 0x0                            ; 005c5a83
    LEA EBX,[ESP + 0x8]                 ; 005c5a85
    XOR DH,DH                           ; 005c5a89
    PUSH EBX                            ; 005c5a8b
    MOV byte ptr [ESP + ESI*0x1 + 0xc],DH ; 005c5a8c
    LEA ESI,[EDI + 0x1]                 ; 005c5a90
    CALL FUN_005c618c                   ; 005c5a93
        ;   XREF to: 005c618c (UNCONDITIONAL_CALL)  ; undefined FUN_005c618c()
    MOV dword ptr [ESP + 0x18],EAX      ; 005c5a98
    ADD ESP,0xc                         ; 005c5a9c
    MOV DL,0x2a                         ; 005c5a9f
    MOV EBX,ESI                         ; 005c5aa1
    MOV AL,byte ptr [ESI]               ; 005c5aa3
        ;   Label: LAB_005c5aa3
    CMP AL,DL                           ; 005c5aa5
    JZ 0x005c5abb                       ; 005c5aa7
        ;   XREF to: 005c5abb (CONDITIONAL_JUMP)  ; LAB_005c5abb
    CMP AL,0x0                          ; 005c5aa9
    JZ 0x005c5ab9                       ; 005c5aab
        ;   XREF to: 005c5ab9 (CONDITIONAL_JUMP)  ; LAB_005c5ab9
    INC ESI                             ; 005c5aad
    MOV AL,byte ptr [ESI]               ; 005c5aae
    CMP AL,DL                           ; 005c5ab0
    JZ 0x005c5abb                       ; 005c5ab2
        ;   XREF to: 005c5abb (CONDITIONAL_JUMP)  ; LAB_005c5abb
    INC ESI                             ; 005c5ab4
    CMP AL,0x0                          ; 005c5ab5
    JNZ 0x005c5aa3                      ; 005c5ab7
        ;   XREF to: 005c5aa3 (CONDITIONAL_JUMP)  ; LAB_005c5aa3
    SUB ESI,ESI                         ; 005c5ab9
        ;   Label: LAB_005c5ab9
    MOV EDI,ESI                         ; 005c5abb
        ;   Label: LAB_005c5abb
    SUB ESI,EBX                         ; 005c5abd
    PUSH ESI                            ; 005c5abf
    PUSH EBX                            ; 005c5ac0
    LEA EBX,[ESP + 0x8]                 ; 005c5ac1
    PUSH EBX                            ; 005c5ac5
    CALL FUN_005b9cf0                   ; 005c5ac6
        ;   XREF to: 005b9cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9cf0()
    ADD ESP,0xc                         ; 005c5acb
    PUSH 0x10                           ; 005c5ace
    XOR BL,BL                           ; 005c5ad0
    PUSH 0x0                            ; 005c5ad2
    MOV byte ptr [ESP + ESI*0x1 + 0x8],BL ; 005c5ad4
    LEA EBX,[ESP + 0x8]                 ; 005c5ad8
    PUSH EBX                            ; 005c5adc
    CALL FUN_005c618c                   ; 005c5add
        ;   XREF to: 005c618c (UNCONDITIONAL_CALL)  ; undefined FUN_005c618c()
    ADD ESP,0xc                         ; 005c5ae2
    PUSH EBP                            ; 005c5ae5
    MOV EDX,dword ptr [ESP + 0x10]      ; 005c5ae6
    PUSH EDX                            ; 005c5aea
    MOV EBX,EAX                         ; 005c5aeb
    CALL FUN_005c098c                   ; 005c5aed
        ;   XREF to: 005c098c (UNCONDITIONAL_CALL)  ; undefined FUN_005c098c()
    ADD ESP,0x8                         ; 005c5af2
    PUSH EBX                            ; 005c5af5
    PUSH EBP                            ; 005c5af6
    LEA ESI,[EDI + 0x1]                 ; 005c5af7
    CALL FUN_005c0878                   ; 005c5afa
        ;   XREF to: 005c0878 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0878()
    MOV EBX,ESI                         ; 005c5aff
    ADD ESP,0x8                         ; 005c5b01
    JMP 0x005c59fe                      ; 005c5b04
        ;   XREF to: 005c59fe (UNCONDITIONAL_JUMP)  ; LAB_005c59fe
    PUSH 0x5f2104                       ; 005c5b09
        ;   Label: LAB_005c5b09
    CALL FUN_005c6210                   ; 005c5b0e
        ;   XREF to: 005c6210 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6210()
    ADD ESP,0x4                         ; 005c5b13
    ADD ESP,0x10                        ; 005c5b16
        ;   Label: LAB_005c5b16
    POP EBP                             ; 005c5b19
    POP EDI                             ; 005c5b1a
    POP ESI                             ; 005c5b1b
    POP EBX                             ; 005c5b1c
    RET                                 ; 005c5b1d

