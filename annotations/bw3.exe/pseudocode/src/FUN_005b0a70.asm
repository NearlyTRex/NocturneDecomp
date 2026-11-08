; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b0a70(void)
;
;
; XREF[1]:
;   FUN_005af560 at 005af639
;
; Called Functions:
;   FUN_005a4ee0
;   FUN_005a5ec0
;   FUN_005ab978
;   FUN_005aba8c
;   FUN_005b121c
;   FUN_005b12a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0a70
        ;   Label: FUN_005b0a70
    PUSH ESI                            ; 005b0a71
    PUSH EDI                            ; 005b0a72
    PUSH EBP                            ; 005b0a73
    SUB ESP,0x10                        ; 005b0a74
    PUSH 0x5daf5c                       ; 005b0a77
    CALL FUN_005a5ec0                   ; 005b0a7c
        ;   XREF to: 005a5ec0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a5ec0()
    ADD ESP,0x4                         ; 005b0a81
    MOV EBX,EAX                         ; 005b0a84
    TEST EAX,EAX                        ; 005b0a86
    JZ 0x005b0ba6                       ; 005b0a88
        ;   XREF to: 005b0ba6 (CONDITIONAL_JUMP)  ; LAB_005b0ba6
    CMP byte ptr [EBX],0x0              ; 005b0a8e
        ;   Label: LAB_005b0a8e
    JZ 0x005b0b99                       ; 005b0a91
        ;   XREF to: 005b0b99 (CONDITIONAL_JUMP)  ; LAB_005b0b99
    MOV DL,0x3a                         ; 005b0a97
    MOV ESI,EBX                         ; 005b0a99
    MOV AL,byte ptr [ESI]               ; 005b0a9b
        ;   Label: LAB_005b0a9b
    CMP AL,DL                           ; 005b0a9d
    JZ 0x005b0ab3                       ; 005b0a9f
        ;   XREF to: 005b0ab3 (CONDITIONAL_JUMP)  ; LAB_005b0ab3
    CMP AL,0x0                          ; 005b0aa1
    JZ 0x005b0ab1                       ; 005b0aa3
        ;   XREF to: 005b0ab1 (CONDITIONAL_JUMP)  ; LAB_005b0ab1
    INC ESI                             ; 005b0aa5
    MOV AL,byte ptr [ESI]               ; 005b0aa6
    CMP AL,DL                           ; 005b0aa8
    JZ 0x005b0ab3                       ; 005b0aaa
        ;   XREF to: 005b0ab3 (CONDITIONAL_JUMP)  ; LAB_005b0ab3
    INC ESI                             ; 005b0aac
    CMP AL,0x0                          ; 005b0aad
    JNZ 0x005b0a9b                      ; 005b0aaf
        ;   XREF to: 005b0a9b (CONDITIONAL_JUMP)  ; LAB_005b0a9b
    SUB ESI,ESI                         ; 005b0ab1
        ;   Label: LAB_005b0ab1
    MOV EDI,ESI                         ; 005b0ab3
        ;   Label: LAB_005b0ab3
    SUB ESI,EBX                         ; 005b0ab5
    PUSH ESI                            ; 005b0ab7
    PUSH EBX                            ; 005b0ab8
    LEA EBX,[ESP + 0x8]                 ; 005b0ab9
    PUSH EBX                            ; 005b0abd
    CALL FUN_005a4ee0                   ; 005b0abe
        ;   XREF to: 005a4ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4ee0()
    ADD ESP,0xc                         ; 005b0ac3
    PUSH 0x10                           ; 005b0ac6
    PUSH 0x0                            ; 005b0ac8
    LEA EBX,[ESP + 0x8]                 ; 005b0aca
    XOR DL,DL                           ; 005b0ace
    PUSH EBX                            ; 005b0ad0
    MOV byte ptr [ESP + ESI*0x1 + 0xc],DL ; 005b0ad1
    LEA ESI,[EDI + 0x1]                 ; 005b0ad5
    CALL FUN_005b121c                   ; 005b0ad8
        ;   XREF to: 005b121c (UNCONDITIONAL_CALL)  ; undefined FUN_005b121c()
    MOV DL,0x3a                         ; 005b0add
    ADD ESP,0xc                         ; 005b0adf
    MOV EBP,EAX                         ; 005b0ae2
    MOV EBX,ESI                         ; 005b0ae4
    MOV AL,byte ptr [ESI]               ; 005b0ae6
        ;   Label: LAB_005b0ae6
    CMP AL,DL                           ; 005b0ae8
    JZ 0x005b0afe                       ; 005b0aea
        ;   XREF to: 005b0afe (CONDITIONAL_JUMP)  ; LAB_005b0afe
    CMP AL,0x0                          ; 005b0aec
    JZ 0x005b0afc                       ; 005b0aee
        ;   XREF to: 005b0afc (CONDITIONAL_JUMP)  ; LAB_005b0afc
    INC ESI                             ; 005b0af0
    MOV AL,byte ptr [ESI]               ; 005b0af1
    CMP AL,DL                           ; 005b0af3
    JZ 0x005b0afe                       ; 005b0af5
        ;   XREF to: 005b0afe (CONDITIONAL_JUMP)  ; LAB_005b0afe
    INC ESI                             ; 005b0af7
    CMP AL,0x0                          ; 005b0af8
    JNZ 0x005b0ae6                      ; 005b0afa
        ;   XREF to: 005b0ae6 (CONDITIONAL_JUMP)  ; LAB_005b0ae6
    SUB ESI,ESI                         ; 005b0afc
        ;   Label: LAB_005b0afc
    MOV EDI,ESI                         ; 005b0afe
        ;   Label: LAB_005b0afe
    SUB ESI,EBX                         ; 005b0b00
    PUSH ESI                            ; 005b0b02
    PUSH EBX                            ; 005b0b03
    LEA EBX,[ESP + 0x8]                 ; 005b0b04
    PUSH EBX                            ; 005b0b08
    CALL FUN_005a4ee0                   ; 005b0b09
        ;   XREF to: 005a4ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4ee0()
    ADD ESP,0xc                         ; 005b0b0e
    PUSH 0x10                           ; 005b0b11
    PUSH 0x0                            ; 005b0b13
    LEA EBX,[ESP + 0x8]                 ; 005b0b15
    XOR DH,DH                           ; 005b0b19
    PUSH EBX                            ; 005b0b1b
    MOV byte ptr [ESP + ESI*0x1 + 0xc],DH ; 005b0b1c
    LEA ESI,[EDI + 0x1]                 ; 005b0b20
    CALL FUN_005b121c                   ; 005b0b23
        ;   XREF to: 005b121c (UNCONDITIONAL_CALL)  ; undefined FUN_005b121c()
    MOV dword ptr [ESP + 0x18],EAX      ; 005b0b28
    ADD ESP,0xc                         ; 005b0b2c
    MOV DL,0x2a                         ; 005b0b2f
    MOV EBX,ESI                         ; 005b0b31
    MOV AL,byte ptr [ESI]               ; 005b0b33
        ;   Label: LAB_005b0b33
    CMP AL,DL                           ; 005b0b35
    JZ 0x005b0b4b                       ; 005b0b37
        ;   XREF to: 005b0b4b (CONDITIONAL_JUMP)  ; LAB_005b0b4b
    CMP AL,0x0                          ; 005b0b39
    JZ 0x005b0b49                       ; 005b0b3b
        ;   XREF to: 005b0b49 (CONDITIONAL_JUMP)  ; LAB_005b0b49
    INC ESI                             ; 005b0b3d
    MOV AL,byte ptr [ESI]               ; 005b0b3e
    CMP AL,DL                           ; 005b0b40
    JZ 0x005b0b4b                       ; 005b0b42
        ;   XREF to: 005b0b4b (CONDITIONAL_JUMP)  ; LAB_005b0b4b
    INC ESI                             ; 005b0b44
    CMP AL,0x0                          ; 005b0b45
    JNZ 0x005b0b33                      ; 005b0b47
        ;   XREF to: 005b0b33 (CONDITIONAL_JUMP)  ; LAB_005b0b33
    SUB ESI,ESI                         ; 005b0b49
        ;   Label: LAB_005b0b49
    MOV EDI,ESI                         ; 005b0b4b
        ;   Label: LAB_005b0b4b
    SUB ESI,EBX                         ; 005b0b4d
    PUSH ESI                            ; 005b0b4f
    PUSH EBX                            ; 005b0b50
    LEA EBX,[ESP + 0x8]                 ; 005b0b51
    PUSH EBX                            ; 005b0b55
    CALL FUN_005a4ee0                   ; 005b0b56
        ;   XREF to: 005a4ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4ee0()
    ADD ESP,0xc                         ; 005b0b5b
    PUSH 0x10                           ; 005b0b5e
    XOR BL,BL                           ; 005b0b60
    PUSH 0x0                            ; 005b0b62
    MOV byte ptr [ESP + ESI*0x1 + 0x8],BL ; 005b0b64
    LEA EBX,[ESP + 0x8]                 ; 005b0b68
    PUSH EBX                            ; 005b0b6c
    CALL FUN_005b121c                   ; 005b0b6d
        ;   XREF to: 005b121c (UNCONDITIONAL_CALL)  ; undefined FUN_005b121c()
    ADD ESP,0xc                         ; 005b0b72
    PUSH EBP                            ; 005b0b75
    MOV EDX,dword ptr [ESP + 0x10]      ; 005b0b76
    PUSH EDX                            ; 005b0b7a
    MOV EBX,EAX                         ; 005b0b7b
    CALL FUN_005aba8c                   ; 005b0b7d
        ;   XREF to: 005aba8c (UNCONDITIONAL_CALL)  ; undefined FUN_005aba8c()
    ADD ESP,0x8                         ; 005b0b82
    PUSH EBX                            ; 005b0b85
    PUSH EBP                            ; 005b0b86
    LEA ESI,[EDI + 0x1]                 ; 005b0b87
    CALL FUN_005ab978                   ; 005b0b8a
        ;   XREF to: 005ab978 (UNCONDITIONAL_CALL)  ; undefined FUN_005ab978()
    MOV EBX,ESI                         ; 005b0b8f
    ADD ESP,0x8                         ; 005b0b91
    JMP 0x005b0a8e                      ; 005b0b94
        ;   XREF to: 005b0a8e (UNCONDITIONAL_JUMP)  ; LAB_005b0a8e
    PUSH 0x5daf68                       ; 005b0b99
        ;   Label: LAB_005b0b99
    CALL FUN_005b12a0                   ; 005b0b9e
        ;   XREF to: 005b12a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b12a0()
    ADD ESP,0x4                         ; 005b0ba3
    ADD ESP,0x10                        ; 005b0ba6
        ;   Label: LAB_005b0ba6
    POP EBP                             ; 005b0ba9
    POP EDI                             ; 005b0baa
    POP ESI                             ; 005b0bab
    POP EBX                             ; 005b0bac
    RET                                 ; 005b0bad

