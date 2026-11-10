; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 crt_unknown_c_FUN_005a6a78(byte *param_1,uint *param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined        Stack[-0x1c]:1  local_1c
; undefined1       Stack[-0x1b]:1  local_1b
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   crt_unknown.c_FUN_005a6190 at 005a63cb
;
; Referenced Globals:
;   undefined4 DAT_02d25930
;
; Called Functions:
;   crt_unknown.c_FUN_005a678c
;   crt_unknown.c_FUN_005a67bc
;   crt_unknown.c_FUN_005a6838
;   crt_unknown.c_FUN_005a689c
;   crt_unknown.c_FUN_005a69a0
;   crt_unknown.c_FUN_005a69bc
;   crt_unknown.c_FUN_005a70dc
;   crt_unknown.c_FUN_005ad320
;   crt_unknown.c_FUN_005ad370
;   crt_unknown.c_FUN_005ad480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a6a78
        ;   Label: crt_unknown.c_FUN_005a6a78
    PUSH ESI                            ; 005a6a79
    PUSH EDI                            ; 005a6a7a
    PUSH ES                             ; 005a6a7b
    PUSH EBP                            ; 005a6a7c
    SUB ESP,0x10                        ; 005a6a7d
    MOV ESI,dword ptr [ESP + 0x28]      ; 005a6a80
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005a6a84
    MOV EBX,dword ptr [ESP + 0x30]      ; 005a6a88
    MOV dword ptr [EBX + 0x20],0x0      ; 005a6a8c
    MOV dword ptr [EBX + 0x24],0x0      ; 005a6a93
    MOV dword ptr [EBX + 0x28],0x0      ; 005a6a9a
    MOV dword ptr [EBX + 0x2c],0x0      ; 005a6aa1
    MOV word ptr [ESP + 0xc],DS         ; 005a6aa8
    MOV dword ptr [EBX + 0x30],0x0      ; 005a6aac
    MOV EDI,ESI                         ; 005a6ab3
    MOV AL,byte ptr [EBX + 0x15]        ; 005a6ab5
    MOV dword ptr [EBX + 0x34],0x0      ; 005a6ab8
    CMP AL,0x69                         ; 005a6abf
    JC 0x005a6ae1                       ; 005a6ac1
        ;   XREF to: 005a6ae1 (CONDITIONAL_JUMP)  ; LAB_005a6ae1
    JBE 0x005a6b4e                      ; 005a6ac3
        ;   XREF to: 005a6b4e (CONDITIONAL_JUMP)  ; LAB_005a6b4e
    CMP AL,0x75                         ; 005a6ac9
    JC 0x005a6ad8                       ; 005a6acb
        ;   XREF to: 005a6ad8 (CONDITIONAL_JUMP)  ; LAB_005a6ad8
    JBE 0x005a6af4                      ; 005a6acd
        ;   XREF to: 005a6af4 (CONDITIONAL_JUMP)  ; LAB_005a6af4
    CMP AL,0x78                         ; 005a6acf
    JZ 0x005a6af4                       ; 005a6ad1
        ;   XREF to: 005a6af4 (CONDITIONAL_JUMP)  ; LAB_005a6af4
    JMP 0x005a6c15                      ; 005a6ad3
        ;   XREF to: 005a6c15 (UNCONDITIONAL_JUMP)  ; LAB_005a6c15
    CMP AL,0x6f                         ; 005a6ad8
        ;   Label: LAB_005a6ad8
    JZ 0x005a6af4                       ; 005a6ada
        ;   XREF to: 005a6af4 (CONDITIONAL_JUMP)  ; LAB_005a6af4
    JMP 0x005a6c15                      ; 005a6adc
        ;   XREF to: 005a6c15 (UNCONDITIONAL_JUMP)  ; LAB_005a6c15
    CMP AL,0x58                         ; 005a6ae1
        ;   Label: LAB_005a6ae1
    JC 0x005a6c15                       ; 005a6ae3
        ;   XREF to: 005a6c15 (CONDITIONAL_JUMP)  ; LAB_005a6c15
    JBE 0x005a6af4                      ; 005a6ae9
        ;   XREF to: 005a6af4 (CONDITIONAL_JUMP)  ; LAB_005a6af4
    CMP AL,0x64                         ; 005a6aeb
    JZ 0x005a6b4e                       ; 005a6aed
        ;   XREF to: 005a6b4e (CONDITIONAL_JUMP)  ; LAB_005a6b4e
    JMP 0x005a6c15                      ; 005a6aef
        ;   XREF to: 005a6c15 (UNCONDITIONAL_JUMP)  ; LAB_005a6c15
    TEST byte ptr [EBX + 0x1f],0x1      ; 005a6af4
        ;   Label: LAB_005a6af4
    JZ 0x005a6b1a                       ; 005a6af8
        ;   XREF to: 005a6b1a (CONDITIONAL_JUMP)  ; LAB_005a6b1a
    MOV EBP,dword ptr [EDX]             ; 005a6afa
    ADD EBP,0x4                         ; 005a6afc
    MOV dword ptr [EDX],EBP             ; 005a6aff
    MOV EAX,dword ptr [EBP + -0x4]      ; 005a6b01
    MOV dword ptr [ESP],EAX             ; 005a6b04
    MOV EAX,dword ptr [EDX]             ; 005a6b07
    ADD EAX,0x4                         ; 005a6b09
    MOV dword ptr [EDX],EAX             ; 005a6b0c
    MOV EAX,dword ptr [EAX + -0x4]      ; 005a6b0e
    MOV dword ptr [ESP + 0x4],EAX       ; 005a6b11
    JMP 0x005a6c15                      ; 005a6b15
        ;   XREF to: 005a6c15 (UNCONDITIONAL_JUMP)  ; LAB_005a6c15
    TEST byte ptr [EBX + 0x1e],0x20     ; 005a6b1a
        ;   Label: LAB_005a6b1a
    JZ 0x005a6b2f                       ; 005a6b1e
        ;   XREF to: 005a6b2f (CONDITIONAL_JUMP)  ; LAB_005a6b2f
    MOV ECX,dword ptr [EDX]             ; 005a6b20
    ADD ECX,0x4                         ; 005a6b22
    MOV dword ptr [EDX],ECX             ; 005a6b25
    MOV ECX,dword ptr [ECX + -0x4]      ; 005a6b27
    JMP 0x005a6c15                      ; 005a6b2a
        ;   XREF to: 005a6c15 (UNCONDITIONAL_JUMP)  ; LAB_005a6c15
    MOV EAX,dword ptr [EDX]             ; 005a6b2f
        ;   Label: LAB_005a6b2f
    ADD EAX,0x4                         ; 005a6b31
    MOV dword ptr [EDX],EAX             ; 005a6b34
    MOV ECX,dword ptr [EAX + -0x4]      ; 005a6b36
    TEST byte ptr [EBX + 0x1e],0x10     ; 005a6b39
    JZ 0x005a6c15                       ; 005a6b3d
        ;   XREF to: 005a6c15 (CONDITIONAL_JUMP)  ; LAB_005a6c15
    AND ECX,0xffff                      ; 005a6b43
    JMP 0x005a6c15                      ; 005a6b49
        ;   XREF to: 005a6c15 (UNCONDITIONAL_JUMP)  ; LAB_005a6c15
    TEST byte ptr [EBX + 0x1f],0x1      ; 005a6b4e
        ;   Label: LAB_005a6b4e
    JZ 0x005a6b71                       ; 005a6b52
        ;   XREF to: 005a6b71 (CONDITIONAL_JUMP)  ; LAB_005a6b71
    MOV EAX,dword ptr [EDX]             ; 005a6b54
    ADD EAX,0x4                         ; 005a6b56
    MOV dword ptr [EDX],EAX             ; 005a6b59
    MOV EAX,dword ptr [EAX + -0x4]      ; 005a6b5b
    MOV dword ptr [ESP],EAX             ; 005a6b5e
    MOV EBP,dword ptr [EDX]             ; 005a6b61
    ADD EBP,0x4                         ; 005a6b63
    MOV dword ptr [EDX],EBP             ; 005a6b66
    MOV EAX,dword ptr [EBP + -0x4]      ; 005a6b68
    MOV dword ptr [ESP + 0x4],EAX       ; 005a6b6b
    JMP 0x005a6b97                      ; 005a6b6f
        ;   XREF to: 005a6b97 (UNCONDITIONAL_JUMP)  ; LAB_005a6b97
    TEST byte ptr [EBX + 0x1e],0x20     ; 005a6b71
        ;   Label: LAB_005a6b71
    JZ 0x005a6b83                       ; 005a6b75
        ;   XREF to: 005a6b83 (CONDITIONAL_JUMP)  ; LAB_005a6b83
    MOV EBP,dword ptr [EDX]             ; 005a6b77
    ADD EBP,0x4                         ; 005a6b79
    MOV dword ptr [EDX],EBP             ; 005a6b7c
    MOV ECX,dword ptr [EBP + -0x4]      ; 005a6b7e
    JMP 0x005a6b97                      ; 005a6b81
        ;   XREF to: 005a6b97 (UNCONDITIONAL_JUMP)  ; LAB_005a6b97
    MOV ECX,dword ptr [EDX]             ; 005a6b83
        ;   Label: LAB_005a6b83
    ADD ECX,0x4                         ; 005a6b85
    MOV dword ptr [EDX],ECX             ; 005a6b88
    MOV AL,byte ptr [EBX + 0x1e]        ; 005a6b8a
    MOV ECX,dword ptr [ECX + -0x4]      ; 005a6b8d
    TEST AL,0x10                        ; 005a6b90
    JZ 0x005a6b97                       ; 005a6b92
        ;   XREF to: 005a6b97 (CONDITIONAL_JUMP)  ; LAB_005a6b97
    MOVSX ECX,CX                        ; 005a6b94
    XOR EAX,EAX                         ; 005a6b97
        ;   Label: LAB_005a6b97
    TEST byte ptr [EBX + 0x1f],0x1      ; 005a6b99
    JZ 0x005a6ba8                       ; 005a6b9d
        ;   XREF to: 005a6ba8 (CONDITIONAL_JUMP)  ; LAB_005a6ba8
    TEST byte ptr [ESP + 0x7],0x80      ; 005a6b9f
    JZ 0x005a6bac                       ; 005a6ba4
        ;   XREF to: 005a6bac (CONDITIONAL_JUMP)  ; LAB_005a6bac
    JMP 0x005a6bb0                      ; 005a6ba6
        ;   XREF to: 005a6bb0 (UNCONDITIONAL_JUMP)  ; LAB_005a6bb0
    TEST ECX,ECX                        ; 005a6ba8
        ;   Label: LAB_005a6ba8
    JL 0x005a6bb0                       ; 005a6baa
        ;   XREF to: 005a6bb0 (CONDITIONAL_JUMP)  ; LAB_005a6bb0
    TEST EAX,EAX                        ; 005a6bac
        ;   Label: LAB_005a6bac
    JZ 0x005a6bec                       ; 005a6bae
        ;   XREF to: 005a6bec (CONDITIONAL_JUMP)  ; LAB_005a6bec
    MOV EAX,dword ptr [EBX + 0x20]      ; 005a6bb0
        ;   Label: LAB_005a6bb0
    LEA EBP,[EAX + 0x1]                 ; 005a6bb3
    MOV dword ptr [EBX + 0x20],EBP      ; 005a6bb6
    MOV byte ptr [ESI + EAX*0x1],0x2d   ; 005a6bb9
    TEST byte ptr [EBX + 0x1f],0x1      ; 005a6bbd
    JZ 0x005a6be8                       ; 005a6bc1
        ;   XREF to: 005a6be8 (CONDITIONAL_JUMP)  ; LAB_005a6be8
    MOV EAX,dword ptr [ESP]             ; 005a6bc3
    MOV EBP,dword ptr [ESP + 0x4]       ; 005a6bc6
    NOT EAX                             ; 005a6bca
    NOT EBP                             ; 005a6bcc
    MOV dword ptr [ESP],EAX             ; 005a6bce
    MOV dword ptr [ESP + 0x4],EBP       ; 005a6bd1
    INC EAX                             ; 005a6bd5
    MOV dword ptr [ESP],EAX             ; 005a6bd6
    JNZ 0x005a6be0                      ; 005a6bd9
        ;   XREF to: 005a6be0 (CONDITIONAL_JUMP)  ; LAB_005a6be0
    LEA EAX,[EBP + 0x1]                 ; 005a6bdb
    JMP 0x005a6be2                      ; 005a6bde
        ;   XREF to: 005a6be2 (UNCONDITIONAL_JUMP)  ; LAB_005a6be2
    MOV EAX,EBP                         ; 005a6be0
        ;   Label: LAB_005a6be0
    MOV dword ptr [ESP + 0x4],EAX       ; 005a6be2
        ;   Label: LAB_005a6be2
    JMP 0x005a6c15                      ; 005a6be6
        ;   XREF to: 005a6c15 (UNCONDITIONAL_JUMP)  ; LAB_005a6c15
    NEG ECX                             ; 005a6be8
        ;   Label: LAB_005a6be8
    JMP 0x005a6c15                      ; 005a6bea
        ;   XREF to: 005a6c15 (UNCONDITIONAL_JUMP)  ; LAB_005a6c15
    MOV AH,byte ptr [EBX + 0x1e]        ; 005a6bec
        ;   Label: LAB_005a6bec
    TEST AH,0x4                         ; 005a6bef
    JZ 0x005a6c03                       ; 005a6bf2
        ;   XREF to: 005a6c03 (CONDITIONAL_JUMP)  ; LAB_005a6c03
    MOV EAX,dword ptr [EBX + 0x20]      ; 005a6bf4
    LEA EBP,[EAX + 0x1]                 ; 005a6bf7
    MOV dword ptr [EBX + 0x20],EBP      ; 005a6bfa
    MOV byte ptr [ESI + EAX*0x1],0x2b   ; 005a6bfd
    JMP 0x005a6c15                      ; 005a6c01
        ;   XREF to: 005a6c15 (UNCONDITIONAL_JUMP)  ; LAB_005a6c15
    TEST AH,0x2                         ; 005a6c03
        ;   Label: LAB_005a6c03
    JZ 0x005a6c15                       ; 005a6c06
        ;   XREF to: 005a6c15 (CONDITIONAL_JUMP)  ; LAB_005a6c15
    MOV EAX,dword ptr [EBX + 0x20]      ; 005a6c08
    LEA EBP,[EAX + 0x1]                 ; 005a6c0b
    MOV dword ptr [EBX + 0x20],EBP      ; 005a6c0e
    MOV byte ptr [ESI + EAX*0x1],0x20   ; 005a6c11
    MOV AL,byte ptr [EBX + 0x15]        ; 005a6c15
        ;   Label: LAB_005a6c15
    MOV EBP,0xa                         ; 005a6c18
    CMP AL,0x64                         ; 005a6c1d
    JC 0x005a6c82                       ; 005a6c1f
        ;   XREF to: 005a6c82 (CONDITIONAL_JUMP)  ; LAB_005a6c82
    JBE 0x005a6e67                      ; 005a6c21
        ;   XREF to: 005a6e67 (CONDITIONAL_JUMP)  ; LAB_005a6e67
    CMP AL,0x6f                         ; 005a6c27
    JC 0x005a6c63                       ; 005a6c29
        ;   XREF to: 005a6c63 (CONDITIONAL_JUMP)  ; LAB_005a6c63
    JBE 0x005a6e47                      ; 005a6c2b
        ;   XREF to: 005a6e47 (CONDITIONAL_JUMP)  ; LAB_005a6e47
    CMP AL,0x73                         ; 005a6c31
    JC 0x005a6c56                       ; 005a6c33
        ;   XREF to: 005a6c56 (CONDITIONAL_JUMP)  ; LAB_005a6c56
    JBE 0x005a6d33                      ; 005a6c35
        ;   XREF to: 005a6d33 (CONDITIONAL_JUMP)  ; LAB_005a6d33
    CMP AL,0x75                         ; 005a6c3b
    JC 0x005a70ba                       ; 005a6c3d
        ;   XREF to: 005a70ba (CONDITIONAL_JUMP)  ; LAB_005a70ba
    JBE 0x005a6e67                      ; 005a6c43
        ;   XREF to: 005a6e67 (CONDITIONAL_JUMP)  ; LAB_005a6e67
    CMP AL,0x78                         ; 005a6c49
    JZ 0x005a6e05                       ; 005a6c4b
        ;   XREF to: 005a6e05 (CONDITIONAL_JUMP)  ; LAB_005a6e05
    JMP 0x005a70ba                      ; 005a6c51
        ;   XREF to: 005a70ba (UNCONDITIONAL_JUMP)  ; LAB_005a70ba
    CMP AL,0x70                         ; 005a6c56
        ;   Label: LAB_005a6c56
    JZ 0x005a6f42                       ; 005a6c58
        ;   XREF to: 005a6f42 (CONDITIONAL_JUMP)  ; LAB_005a6f42
    JMP 0x005a70ba                      ; 005a6c5e
        ;   XREF to: 005a70ba (UNCONDITIONAL_JUMP)  ; LAB_005a70ba
    CMP AL,0x66                         ; 005a6c63
        ;   Label: LAB_005a6c63
    JC 0x005a6d09                       ; 005a6c65
        ;   XREF to: 005a6d09 (CONDITIONAL_JUMP)  ; LAB_005a6d09
    JBE 0x005a6cd3                      ; 005a6c6b
        ;   XREF to: 005a6cd3 (CONDITIONAL_JUMP)  ; LAB_005a6cd3
    CMP AL,0x67                         ; 005a6c6d
    JBE 0x005a6d09                      ; 005a6c6f
        ;   XREF to: 005a6d09 (CONDITIONAL_JUMP)  ; LAB_005a6d09
    CMP AL,0x69                         ; 005a6c75
    JZ 0x005a6e67                       ; 005a6c77
        ;   XREF to: 005a6e67 (CONDITIONAL_JUMP)  ; LAB_005a6e67
    JMP 0x005a70ba                      ; 005a6c7d
        ;   XREF to: 005a70ba (UNCONDITIONAL_JUMP)  ; LAB_005a70ba
    CMP AL,0x47                         ; 005a6c82
        ;   Label: LAB_005a6c82
    JC 0x005a6cbe                       ; 005a6c84
        ;   XREF to: 005a6cbe (CONDITIONAL_JUMP)  ; LAB_005a6cbe
    JBE 0x005a6d09                      ; 005a6c86
        ;   XREF to: 005a6d09 (CONDITIONAL_JUMP)  ; LAB_005a6d09
    CMP AL,0x53                         ; 005a6c8c
    JC 0x005a6cb1                       ; 005a6c8e
        ;   XREF to: 005a6cb1 (CONDITIONAL_JUMP)  ; LAB_005a6cb1
    JBE 0x005a6d33                      ; 005a6c90
        ;   XREF to: 005a6d33 (CONDITIONAL_JUMP)  ; LAB_005a6d33
    CMP AL,0x58                         ; 005a6c96
    JC 0x005a70ba                       ; 005a6c98
        ;   XREF to: 005a70ba (CONDITIONAL_JUMP)  ; LAB_005a70ba
    JBE 0x005a6e05                      ; 005a6c9e
        ;   XREF to: 005a6e05 (CONDITIONAL_JUMP)  ; LAB_005a6e05
    CMP AL,0x63                         ; 005a6ca4
    JZ 0x005a6fda                       ; 005a6ca6
        ;   XREF to: 005a6fda (CONDITIONAL_JUMP)  ; LAB_005a6fda
    JMP 0x005a70ba                      ; 005a6cac
        ;   XREF to: 005a70ba (UNCONDITIONAL_JUMP)  ; LAB_005a70ba
    CMP AL,0x50                         ; 005a6cb1
        ;   Label: LAB_005a6cb1
    JZ 0x005a6f42                       ; 005a6cb3
        ;   XREF to: 005a6f42 (CONDITIONAL_JUMP)  ; LAB_005a6f42
    JMP 0x005a70ba                      ; 005a6cb9
        ;   XREF to: 005a70ba (UNCONDITIONAL_JUMP)  ; LAB_005a70ba
    CMP AL,0x45                         ; 005a6cbe
        ;   Label: LAB_005a6cbe
    JC 0x005a6cc6                       ; 005a6cc0
        ;   XREF to: 005a6cc6 (CONDITIONAL_JUMP)  ; LAB_005a6cc6
    JBE 0x005a6d09                      ; 005a6cc2
        ;   XREF to: 005a6d09 (CONDITIONAL_JUMP)  ; LAB_005a6d09
    JMP 0x005a6cd3                      ; 005a6cc4
        ;   XREF to: 005a6cd3 (UNCONDITIONAL_JUMP)  ; LAB_005a6cd3
    CMP AL,0x43                         ; 005a6cc6
        ;   Label: LAB_005a6cc6
    JZ 0x005a7071                       ; 005a6cc8
        ;   XREF to: 005a7071 (CONDITIONAL_JUMP)  ; LAB_005a7071
    JMP 0x005a70ba                      ; 005a6cce
        ;   XREF to: 005a70ba (UNCONDITIONAL_JUMP)  ; LAB_005a70ba
    TEST byte ptr [EBX + 0x1e],0x10     ; 005a6cd3
        ;   Label: LAB_005a6cd3
    JZ 0x005a6d09                       ; 005a6cd7
        ;   XREF to: 005a6d09 (CONDITIONAL_JUMP)  ; LAB_005a6d09
    MOV EBP,dword ptr [EDX]             ; 005a6cd9
    ADD EBP,0x4                         ; 005a6cdb
    MOV dword ptr [EDX],EBP             ; 005a6cde
    PUSH EBX                            ; 005a6ce0
    MOV ECX,dword ptr [EBP + -0x4]      ; 005a6ce1
    PUSH ECX                            ; 005a6ce4
    PUSH ESI                            ; 005a6ce5
    CALL crt_unknown.c_FUN_005a689c     ; 005a6ce6
        ;   XREF to: 005a689c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a689c()
    ADD ESP,0xc                         ; 005a6ceb
    MOV AX,DS                           ; 005a6cee
    PUSH -0x1                           ; 005a6cf0
    AND EAX,0xffff                      ; 005a6cf2
    PUSH EAX                            ; 005a6cf7
    PUSH ESI                            ; 005a6cf8
    CALL crt_unknown.c_FUN_005a678c     ; 005a6cf9
        ;   XREF to: 005a678c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a678c()
    ADD ESP,0xc                         ; 005a6cfe
    MOV dword ptr [EBX + 0x28],EAX      ; 005a6d01
    JMP 0x005a70cd                      ; 005a6d04
        ;   XREF to: 005a70cd (UNCONDITIONAL_JUMP)  ; LAB_005a70cd
    PUSH EBX                            ; 005a6d09
        ;   Label: LAB_005a6d09
    PUSH EDX                            ; 005a6d0a
    PUSH ESI                            ; 005a6d0b
    CALL crt_unknown.c_FUN_005a69a0     ; 005a6d0c
        ;   XREF to: 005a69a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a69a0()
    ADD ESP,0xc                         ; 005a6d11
    PUSH EBX                            ; 005a6d14
    CALL crt_unknown.c_FUN_005a69bc     ; 005a6d15
        ;   XREF to: 005a69bc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a69bc()
    ADD ESP,0x4                         ; 005a6d1a
    LEA EDI,[ESI + 0x1]                 ; 005a6d1d
    MOV word ptr [ESP + 0xc],DS         ; 005a6d20
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a6d24
    MOV EAX,EDI                         ; 005a6d28
    ADD ESP,0x10                        ; 005a6d2a
    POP EBP                             ; 005a6d2d
    POP ES                              ; 005a6d2e
    POP EDI                             ; 005a6d2f
    POP ESI                             ; 005a6d30
    POP EBX                             ; 005a6d31
    RET                                 ; 005a6d32
    MOV byte ptr [ESI],0x0              ; 005a6d33
        ;   Label: LAB_005a6d33
    MOV CH,byte ptr [EBX + 0x1e]        ; 005a6d36
    TEST CH,0x80                        ; 005a6d39
    JZ 0x005a6d5d                       ; 005a6d3c
        ;   XREF to: 005a6d5d (CONDITIONAL_JUMP)  ; LAB_005a6d5d
    MOV ESI,dword ptr [EDX]             ; 005a6d3e
    ADD ESI,0x8                         ; 005a6d40
    MOV dword ptr [EDX],ESI             ; 005a6d43
    MOV EDX,dword ptr [ESI + -0x8]      ; 005a6d45
    MOV AX,word ptr [ESI + -0x4]        ; 005a6d48
    TEST EDX,EDX                        ; 005a6d4c
    JNZ 0x005a6d55                      ; 005a6d4e
        ;   XREF to: 005a6d55 (CONDITIONAL_JUMP)  ; LAB_005a6d55
    TEST AX,AX                          ; 005a6d50
    JZ 0x005a6d86                       ; 005a6d53
        ;   XREF to: 005a6d86 (CONDITIONAL_JUMP)  ; LAB_005a6d86
    MOV dword ptr [ESP + 0xc],EAX       ; 005a6d55
        ;   Label: LAB_005a6d55
    MOV EDI,EDX                         ; 005a6d59
    JMP 0x005a6d86                      ; 005a6d5b
        ;   XREF to: 005a6d86 (UNCONDITIONAL_JUMP)  ; LAB_005a6d86
    TEST CH,0x40                        ; 005a6d5d
        ;   Label: LAB_005a6d5d
    JZ 0x005a6d72                       ; 005a6d60
        ;   XREF to: 005a6d72 (CONDITIONAL_JUMP)  ; LAB_005a6d72
    MOV ECX,dword ptr [EDX]             ; 005a6d62
    ADD ECX,0x4                         ; 005a6d64
    MOV dword ptr [EDX],ECX             ; 005a6d67
    MOV EAX,dword ptr [ECX + -0x4]      ; 005a6d69
    TEST EAX,EAX                        ; 005a6d6c
    JZ 0x005a6d86                       ; 005a6d6e
        ;   XREF to: 005a6d86 (CONDITIONAL_JUMP)  ; LAB_005a6d86
    JMP 0x005a6d80                      ; 005a6d70
        ;   XREF to: 005a6d80 (UNCONDITIONAL_JUMP)  ; LAB_005a6d80
    MOV EAX,dword ptr [EDX]             ; 005a6d72
        ;   Label: LAB_005a6d72
    ADD EAX,0x4                         ; 005a6d74
    MOV dword ptr [EDX],EAX             ; 005a6d77
    MOV EAX,dword ptr [EAX + -0x4]      ; 005a6d79
    TEST EAX,EAX                        ; 005a6d7c
    JZ 0x005a6d86                       ; 005a6d7e
        ;   XREF to: 005a6d86 (CONDITIONAL_JUMP)  ; LAB_005a6d86
    MOV word ptr [ESP + 0xc],DS         ; 005a6d80
        ;   Label: LAB_005a6d80
    MOV EDI,EAX                         ; 005a6d84
    CMP byte ptr [EBX + 0x15],0x53      ; 005a6d86
        ;   Label: LAB_005a6d86
    JNZ 0x005a6dae                      ; 005a6d8a
        ;   XREF to: 005a6dae (CONDITIONAL_JUMP)  ; LAB_005a6dae
    TEST byte ptr [EBX + 0x1e],0x10     ; 005a6d8c
    JZ 0x005a6d9a                       ; 005a6d90
        ;   XREF to: 005a6d9a (CONDITIONAL_JUMP)  ; LAB_005a6d9a
    MOV ECX,dword ptr [EBX + 0x8]       ; 005a6d92
    XOR EAX,EAX                         ; 005a6d95
    PUSH ECX                            ; 005a6d97
    JMP 0x005a6dce                      ; 005a6d98
        ;   XREF to: 005a6dce (UNCONDITIONAL_JUMP)  ; LAB_005a6dce
    MOV EDX,dword ptr [EBX + 0x8]       ; 005a6d9a
        ;   Label: LAB_005a6d9a
    XOR EAX,EAX                         ; 005a6d9d
    PUSH EDX                            ; 005a6d9f
    MOV AX,word ptr [ESP + 0x10]        ; 005a6da0
    PUSH EAX                            ; 005a6da5
    PUSH EDI                            ; 005a6da6
    CALL crt_unknown.c_FUN_005a67bc     ; 005a6da7
        ;   XREF to: 005a67bc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a67bc()
    JMP 0x005a6dda                      ; 005a6dac
        ;   XREF to: 005a6dda (UNCONDITIONAL_JUMP)  ; LAB_005a6dda
    TEST byte ptr [EBX + 0x1e],0x20     ; 005a6dae
        ;   Label: LAB_005a6dae
    JZ 0x005a6dc8                       ; 005a6db2
        ;   XREF to: 005a6dc8 (CONDITIONAL_JUMP)  ; LAB_005a6dc8
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a6db4
    PUSH EAX                            ; 005a6db7
    XOR EAX,EAX                         ; 005a6db8
    MOV AX,word ptr [ESP + 0x10]        ; 005a6dba
    PUSH EAX                            ; 005a6dbf
    PUSH EDI                            ; 005a6dc0
    CALL crt_unknown.c_FUN_005a67bc     ; 005a6dc1
        ;   XREF to: 005a67bc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a67bc()
    JMP 0x005a6dda                      ; 005a6dc6
        ;   XREF to: 005a6dda (UNCONDITIONAL_JUMP)  ; LAB_005a6dda
    MOV EBP,dword ptr [EBX + 0x8]       ; 005a6dc8
        ;   Label: LAB_005a6dc8
    XOR EAX,EAX                         ; 005a6dcb
    PUSH EBP                            ; 005a6dcd
    MOV AX,word ptr [ESP + 0x10]        ; 005a6dce
        ;   Label: LAB_005a6dce
    PUSH EAX                            ; 005a6dd3
    PUSH EDI                            ; 005a6dd4
    CALL crt_unknown.c_FUN_005a678c     ; 005a6dd5
        ;   XREF to: 005a678c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a678c()
    ADD ESP,0xc                         ; 005a6dda
        ;   Label: LAB_005a6dda
    MOV ESI,dword ptr [EBX + 0x8]       ; 005a6ddd
    MOV dword ptr [EBX + 0x28],EAX      ; 005a6de0
    TEST ESI,ESI                        ; 005a6de3
    JL 0x005a70cd                       ; 005a6de5
        ;   XREF to: 005a70cd (CONDITIONAL_JUMP)  ; LAB_005a70cd
    CMP EAX,ESI                         ; 005a6deb
    JLE 0x005a70cd                      ; 005a6ded
        ;   XREF to: 005a70cd (CONDITIONAL_JUMP)  ; LAB_005a70cd
    MOV dword ptr [EBX + 0x28],ESI      ; 005a6df3
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a6df6
    MOV EAX,EDI                         ; 005a6dfa
    ADD ESP,0x10                        ; 005a6dfc
    POP EBP                             ; 005a6dff
    POP ES                              ; 005a6e00
    POP EDI                             ; 005a6e01
    POP ESI                             ; 005a6e02
    POP EBX                             ; 005a6e03
    RET                                 ; 005a6e04
    TEST byte ptr [EBX + 0x1e],0x1      ; 005a6e05
        ;   Label: LAB_005a6e05
    JZ 0x005a6e42                       ; 005a6e09
        ;   XREF to: 005a6e42 (CONDITIONAL_JUMP)  ; LAB_005a6e42
    TEST byte ptr [EBX + 0x1f],0x1      ; 005a6e0b
    JZ 0x005a6e20                       ; 005a6e0f
        ;   XREF to: 005a6e20 (CONDITIONAL_JUMP)  ; LAB_005a6e20
    CMP dword ptr [ESP],0x0             ; 005a6e11
    JNZ 0x005a6e24                      ; 005a6e15
        ;   XREF to: 005a6e24 (CONDITIONAL_JUMP)  ; LAB_005a6e24
    CMP dword ptr [ESP + 0x4],0x0       ; 005a6e17
    JZ 0x005a6e42                       ; 005a6e1c
        ;   XREF to: 005a6e42 (CONDITIONAL_JUMP)  ; LAB_005a6e42
    JMP 0x005a6e24                      ; 005a6e1e
        ;   XREF to: 005a6e24 (UNCONDITIONAL_JUMP)  ; LAB_005a6e24
    TEST ECX,ECX                        ; 005a6e20
        ;   Label: LAB_005a6e20
    JZ 0x005a6e42                       ; 005a6e22
        ;   XREF to: 005a6e42 (CONDITIONAL_JUMP)  ; LAB_005a6e42
    MOV EAX,dword ptr [EBX + 0x20]      ; 005a6e24
        ;   Label: LAB_005a6e24
    LEA EDX,[EAX + 0x1]                 ; 005a6e27
    MOV dword ptr [EBX + 0x20],EDX      ; 005a6e2a
    MOV byte ptr [ESI + EAX*0x1],0x30   ; 005a6e2d
    MOV EAX,dword ptr [EBX + 0x20]      ; 005a6e31
    LEA EDX,[EAX + 0x1]                 ; 005a6e34
    MOV dword ptr [EBX + 0x20],EDX      ; 005a6e37
    LEA EDX,[ESI + EAX*0x1]             ; 005a6e3a
    MOV AL,byte ptr [EBX + 0x15]        ; 005a6e3d
    MOV byte ptr [EDX],AL               ; 005a6e40
    MOV EBP,0x10                        ; 005a6e42
        ;   Label: LAB_005a6e42
    CMP byte ptr [EBX + 0x15],0x6f      ; 005a6e47
        ;   Label: LAB_005a6e47
    JNZ 0x005a6e67                      ; 005a6e4b
        ;   XREF to: 005a6e67 (CONDITIONAL_JUMP)  ; LAB_005a6e67
    MOV AH,byte ptr [EBX + 0x1e]        ; 005a6e4d
    MOV EBP,0x8                         ; 005a6e50
    TEST AH,0x1                         ; 005a6e55
    JZ 0x005a6e67                       ; 005a6e58
        ;   XREF to: 005a6e67 (CONDITIONAL_JUMP)  ; LAB_005a6e67
    MOV EAX,dword ptr [EBX + 0x20]      ; 005a6e5a
    LEA EDX,[EAX + 0x1]                 ; 005a6e5d
    MOV dword ptr [EBX + 0x20],EDX      ; 005a6e60
    MOV byte ptr [ESI + EAX*0x1],0x30   ; 005a6e63
    MOV EAX,dword ptr [EBX + 0x20]      ; 005a6e67
        ;   Label: LAB_005a6e67
    MOV word ptr [ESP + 0xc],DS         ; 005a6e6a
    ADD EAX,ESI                         ; 005a6e6e
    MOV DL,byte ptr [EBX + 0x1f]        ; 005a6e70
    MOV EDI,EAX                         ; 005a6e73
    TEST DL,0x1                         ; 005a6e75
    JZ 0x005a6ec3                       ; 005a6e78
        ;   XREF to: 005a6ec3 (CONDITIONAL_JUMP)  ; LAB_005a6ec3
    CMP dword ptr [EBX + 0x8],0x0       ; 005a6e7a
    JNZ 0x005a6e9c                      ; 005a6e7e
        ;   XREF to: 005a6e9c (CONDITIONAL_JUMP)  ; LAB_005a6e9c
    CMP dword ptr [ESP],0x0             ; 005a6e80
    JNZ 0x005a6e9c                      ; 005a6e84
        ;   XREF to: 005a6e9c (CONDITIONAL_JUMP)  ; LAB_005a6e9c
    CMP dword ptr [ESP + 0x4],0x0       ; 005a6e86
    JNZ 0x005a6e9c                      ; 005a6e8b
        ;   XREF to: 005a6e9c (CONDITIONAL_JUMP)  ; LAB_005a6e9c
    MOV ES,word ptr [ESP + 0xc]         ; 005a6e8d
    MOV byte ptr ES:[EAX],0x0           ; 005a6e91
    XOR EAX,EAX                         ; 005a6e95
    JMP 0x005a6f0d                      ; 005a6e97
        ;   XREF to: 005a6f0d (UNCONDITIONAL_JUMP)  ; LAB_005a6f0d
    MOV EAX,dword ptr [EBX + 0x20]      ; 005a6e9c
        ;   Label: LAB_005a6e9c
    PUSH EBP                            ; 005a6e9f
    ADD EAX,ESI                         ; 005a6ea0
    PUSH EAX                            ; 005a6ea2
    LEA EAX,[ESP + 0x8]                 ; 005a6ea3
    PUSH EAX                            ; 005a6ea7
    CALL crt_unknown.c_FUN_005ad370     ; 005a6ea8
        ;   XREF to: 005ad370 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ad370()
    MOV CL,byte ptr [EBX + 0x15]        ; 005a6ead
    ADD ESP,0xc                         ; 005a6eb0
    CMP CL,0x58                         ; 005a6eb3
    JNZ 0x005a6efa                      ; 005a6eb6
        ;   XREF to: 005a6efa (CONDITIONAL_JUMP)  ; LAB_005a6efa
    PUSH ESI                            ; 005a6eb8
    CALL crt_unknown.c_FUN_005a70dc     ; 005a6eb9
        ;   XREF to: 005a70dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a70dc()
    ADD ESP,0x4                         ; 005a6ebe
    JMP 0x005a6efa                      ; 005a6ec1
        ;   XREF to: 005a6efa (UNCONDITIONAL_JUMP)  ; LAB_005a6efa
    CMP dword ptr [EBX + 0x8],0x0       ; 005a6ec3
        ;   Label: LAB_005a6ec3
    JNZ 0x005a6ed9                      ; 005a6ec7
        ;   XREF to: 005a6ed9 (CONDITIONAL_JUMP)  ; LAB_005a6ed9
    TEST ECX,ECX                        ; 005a6ec9
    JNZ 0x005a6ed9                      ; 005a6ecb
        ;   XREF to: 005a6ed9 (CONDITIONAL_JUMP)  ; LAB_005a6ed9
    MOV ES,word ptr [ESP + 0xc]         ; 005a6ecd
    MOV byte ptr ES:[EAX],0x0           ; 005a6ed1
    XOR EAX,EAX                         ; 005a6ed5
    JMP 0x005a6f0d                      ; 005a6ed7
        ;   XREF to: 005a6f0d (UNCONDITIONAL_JUMP)  ; LAB_005a6f0d
    MOV EAX,dword ptr [EBX + 0x20]      ; 005a6ed9
        ;   Label: LAB_005a6ed9
    PUSH EBP                            ; 005a6edc
    ADD EAX,ESI                         ; 005a6edd
    PUSH EAX                            ; 005a6edf
    PUSH ECX                            ; 005a6ee0
    CALL crt_unknown.c_FUN_005ad480     ; 005a6ee1
        ;   XREF to: 005ad480 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ad480()
    MOV DH,byte ptr [EBX + 0x15]        ; 005a6ee6
    ADD ESP,0xc                         ; 005a6ee9
    CMP DH,0x58                         ; 005a6eec
    JNZ 0x005a6efa                      ; 005a6eef
        ;   XREF to: 005a6efa (CONDITIONAL_JUMP)  ; LAB_005a6efa
    PUSH ESI                            ; 005a6ef1
    CALL crt_unknown.c_FUN_005a70dc     ; 005a6ef2
        ;   XREF to: 005a70dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a70dc()
    ADD ESP,0x4                         ; 005a6ef7
    XOR EAX,EAX                         ; 005a6efa
        ;   Label: LAB_005a6efa
    PUSH -0x1                           ; 005a6efc
    MOV AX,word ptr [ESP + 0x10]        ; 005a6efe
    PUSH EAX                            ; 005a6f03
    PUSH EDI                            ; 005a6f04
    CALL crt_unknown.c_FUN_005a678c     ; 005a6f05
        ;   XREF to: 005a678c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a678c()
    ADD ESP,0xc                         ; 005a6f0a
    MOV EDX,EAX                         ; 005a6f0d
        ;   Label: LAB_005a6f0d
    MOV ESI,dword ptr [EBX + 0x8]       ; 005a6f0f
    MOV dword ptr [EBX + 0x28],EAX      ; 005a6f12
    CMP EAX,ESI                         ; 005a6f15
    JGE 0x005a6f20                      ; 005a6f17
        ;   XREF to: 005a6f20 (CONDITIONAL_JUMP)  ; LAB_005a6f20
    MOV EAX,ESI                         ; 005a6f19
    SUB EAX,EDX                         ; 005a6f1b
    MOV dword ptr [EBX + 0x24],EAX      ; 005a6f1d
    CMP dword ptr [EBX + 0x8],-0x1      ; 005a6f20
        ;   Label: LAB_005a6f20
    JNZ 0x005a70cd                      ; 005a6f24
        ;   XREF to: 005a70cd (CONDITIONAL_JUMP)  ; LAB_005a70cd
    PUSH EBX                            ; 005a6f2a
    CALL crt_unknown.c_FUN_005a69bc     ; 005a6f2b
        ;   XREF to: 005a69bc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a69bc()
    ADD ESP,0x4                         ; 005a6f30
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a6f33
    MOV EAX,EDI                         ; 005a6f37
    ADD ESP,0x10                        ; 005a6f39
    POP EBP                             ; 005a6f3c
    POP ES                              ; 005a6f3d
    POP EDI                             ; 005a6f3e
    POP ESI                             ; 005a6f3f
    POP EBX                             ; 005a6f40
    RET                                 ; 005a6f41
    CMP dword ptr [EBX + 0x4],0x0       ; 005a6f42
        ;   Label: LAB_005a6f42
    JNZ 0x005a6f5e                      ; 005a6f46
        ;   XREF to: 005a6f5e (CONDITIONAL_JUMP)  ; LAB_005a6f5e
    TEST byte ptr [EBX + 0x1e],0x80     ; 005a6f48
    JZ 0x005a6f57                       ; 005a6f4c
        ;   XREF to: 005a6f57 (CONDITIONAL_JUMP)  ; LAB_005a6f57
    MOV dword ptr [EBX + 0x4],0xd       ; 005a6f4e
    JMP 0x005a6f5e                      ; 005a6f55
        ;   XREF to: 005a6f5e (UNCONDITIONAL_JUMP)  ; LAB_005a6f5e
    MOV dword ptr [EBX + 0x4],0x8       ; 005a6f57
        ;   Label: LAB_005a6f57
    AND byte ptr [EBX + 0x1e],0xf9      ; 005a6f5e
        ;   Label: LAB_005a6f5e
    MOV ECX,dword ptr [EDX]             ; 005a6f62
    ADD ECX,0x4                         ; 005a6f64
    MOV dword ptr [EDX],ECX             ; 005a6f67
    MOV EAX,ECX                         ; 005a6f69
    MOV EBP,dword ptr [ECX + -0x4]      ; 005a6f6b
    TEST byte ptr [EBX + 0x1e],0x80     ; 005a6f6e
    JZ 0x005a6f9a                       ; 005a6f72
        ;   XREF to: 005a6f9a (CONDITIONAL_JUMP)  ; LAB_005a6f9a
    ADD EAX,0x4                         ; 005a6f74
    MOV dword ptr [EDX],EAX             ; 005a6f77
    PUSH 0x4                            ; 005a6f79
    MOV EAX,dword ptr [EAX + -0x4]      ; 005a6f7b
    PUSH ESI                            ; 005a6f7e
    AND EAX,0xffff                      ; 005a6f7f
    PUSH EAX                            ; 005a6f84
    CALL crt_unknown.c_FUN_005a6838     ; 005a6f85
        ;   XREF to: 005a6838 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a6838()
    ADD ESP,0xc                         ; 005a6f8a
    PUSH 0x8                            ; 005a6f8d
    LEA EAX,[ESI + 0x5]                 ; 005a6f8f
    PUSH EAX                            ; 005a6f92
    PUSH EBP                            ; 005a6f93
    MOV byte ptr [ESI + 0x4],0x3a       ; 005a6f94
    JMP 0x005a6f9e                      ; 005a6f98
        ;   XREF to: 005a6f9e (UNCONDITIONAL_JUMP)  ; LAB_005a6f9e
    PUSH 0x8                            ; 005a6f9a
        ;   Label: LAB_005a6f9a
    PUSH ESI                            ; 005a6f9c
    PUSH EBP                            ; 005a6f9d
    CALL crt_unknown.c_FUN_005a6838     ; 005a6f9e
        ;   XREF to: 005a6838 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a6838()
        ;   Label: LAB_005a6f9e
    ADD ESP,0xc                         ; 005a6fa3
    CMP byte ptr [EBX + 0x15],0x50      ; 005a6fa6
    JNZ 0x005a6fb5                      ; 005a6faa
        ;   XREF to: 005a6fb5 (CONDITIONAL_JUMP)  ; LAB_005a6fb5
    PUSH ESI                            ; 005a6fac
    CALL crt_unknown.c_FUN_005a70dc     ; 005a6fad
        ;   XREF to: 005a70dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a70dc()
    ADD ESP,0x4                         ; 005a6fb2
    XOR EAX,EAX                         ; 005a6fb5
        ;   Label: LAB_005a6fb5
    PUSH -0x1                           ; 005a6fb7
    MOV AX,word ptr [ESP + 0x10]        ; 005a6fb9
    PUSH EAX                            ; 005a6fbe
    PUSH EDI                            ; 005a6fbf
    CALL crt_unknown.c_FUN_005a678c     ; 005a6fc0
        ;   XREF to: 005a678c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a678c()
    ADD ESP,0xc                         ; 005a6fc5
    MOV dword ptr [EBX + 0x20],EAX      ; 005a6fc8
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a6fcb
    MOV EAX,EDI                         ; 005a6fcf
    ADD ESP,0x10                        ; 005a6fd1
    POP EBP                             ; 005a6fd4
    POP ES                              ; 005a6fd5
    POP EDI                             ; 005a6fd6
    POP ESI                             ; 005a6fd7
    POP EBX                             ; 005a6fd8
    RET                                 ; 005a6fd9
    MOV AH,byte ptr [EBX + 0x1e]        ; 005a6fda
        ;   Label: LAB_005a6fda
    MOV dword ptr [EBX + 0x20],0x1      ; 005a6fdd
    TEST AH,0x20                        ; 005a6fe4
    JZ 0x005a7056                       ; 005a6fe7
        ;   XREF to: 005a7056 (CONDITIONAL_JUMP)  ; LAB_005a7056
    MOV ECX,dword ptr [EDX]             ; 005a6fe9
    ADD ECX,0x4                         ; 005a6feb
    MOV dword ptr [EDX],ECX             ; 005a6fee
    MOV AX,word ptr [ECX + -0x4]        ; 005a6ff0
    AND EAX,0xffff                      ; 005a6ff4
    PUSH EAX                            ; 005a6ff9
    LEA EAX,[ESP + 0xc]                 ; 005a6ffa
    PUSH EAX                            ; 005a6ffe
    CALL crt_unknown.c_FUN_005ad320     ; 005a6fff
        ;   XREF to: 005ad320 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ad320()
    ADD ESP,0x8                         ; 005a7004
    CMP EAX,-0x1                        ; 005a7007
    JZ 0x005a70cd                       ; 005a700a
        ;   XREF to: 005a70cd (CONDITIONAL_JUMP)  ; LAB_005a70cd
    MOV AL,byte ptr [ESP + 0x8]         ; 005a7010
    MOV EBP,dword ptr [0x02d25930]      ; 005a7014 | DAT_02d25930
    MOV byte ptr [ESI],AL               ; 005a701a
    TEST EBP,EBP                        ; 005a701c
    JZ 0x005a70cd                       ; 005a701e
        ;   XREF to: 005a70cd (CONDITIONAL_JUMP)  ; LAB_005a70cd
    XOR EAX,EAX                         ; 005a7024
    MOV AL,byte ptr [ESP + 0x8]         ; 005a7026
    MOV AL,byte ptr [EAX + 0x2d25941]   ; 005a702a
    AND AL,0x1                          ; 005a7030
    AND EAX,0xff                        ; 005a7032
    JZ 0x005a70cd                       ; 005a7037
        ;   XREF to: 005a70cd (CONDITIONAL_JUMP)  ; LAB_005a70cd
    MOV AL,byte ptr [ESP + 0x9]         ; 005a703d
    MOV byte ptr [ESI + 0x1],AL         ; 005a7041
    INC dword ptr [EBX + 0x20]          ; 005a7044
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a7047
    MOV EAX,EDI                         ; 005a704b
    ADD ESP,0x10                        ; 005a704d
    POP EBP                             ; 005a7050
    POP ES                              ; 005a7051
    POP EDI                             ; 005a7052
    POP ESI                             ; 005a7053
    POP EBX                             ; 005a7054
    RET                                 ; 005a7055
    MOV EBX,dword ptr [EDX]             ; 005a7056
        ;   Label: LAB_005a7056
    ADD EBX,0x4                         ; 005a7058
    MOV dword ptr [EDX],EBX             ; 005a705b
    MOV AL,byte ptr [EBX + -0x4]        ; 005a705d
    MOV byte ptr [ESI],AL               ; 005a7060
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a7062
    MOV EAX,EDI                         ; 005a7066
    ADD ESP,0x10                        ; 005a7068
    POP EBP                             ; 005a706b
    POP ES                              ; 005a706c
    POP EDI                             ; 005a706d
    POP ESI                             ; 005a706e
    POP EBX                             ; 005a706f
    RET                                 ; 005a7070
    MOV EAX,dword ptr [EDX]             ; 005a7071
        ;   Label: LAB_005a7071
    ADD EAX,0x4                         ; 005a7073
    MOV dword ptr [EDX],EAX             ; 005a7076
    MOV AX,word ptr [EAX + -0x4]        ; 005a7078
    AND EAX,0xffff                      ; 005a707c
    PUSH EAX                            ; 005a7081
    PUSH ESI                            ; 005a7082
    CALL crt_unknown.c_FUN_005ad320     ; 005a7083
        ;   XREF to: 005ad320 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ad320()
    ADD ESP,0x8                         ; 005a7088
    MOV EDX,EAX                         ; 005a708b
    CMP EAX,-0x1                        ; 005a708d
    JZ 0x005a70a4                       ; 005a7090
        ;   XREF to: 005a70a4 (CONDITIONAL_JUMP)  ; LAB_005a70a4
    MOV dword ptr [EBX + 0x20],EAX      ; 005a7092
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a7095
    MOV EAX,EDI                         ; 005a7099
    ADD ESP,0x10                        ; 005a709b
    POP EBP                             ; 005a709e
    POP ES                              ; 005a709f
    POP EDI                             ; 005a70a0
    POP ESI                             ; 005a70a1
    POP EBX                             ; 005a70a2
    RET                                 ; 005a70a3
    MOV dword ptr [EBX + 0x20],0x0      ; 005a70a4
        ;   Label: LAB_005a70a4
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a70ab
    MOV EAX,EDI                         ; 005a70af
    ADD ESP,0x10                        ; 005a70b1
    POP EBP                             ; 005a70b4
    POP ES                              ; 005a70b5
    POP EDI                             ; 005a70b6
    POP ESI                             ; 005a70b7
    POP EBX                             ; 005a70b8
    RET                                 ; 005a70b9
    MOV dword ptr [EBX + 0x4],0x0       ; 005a70ba
        ;   Label: LAB_005a70ba
    MOV AL,byte ptr [EBX + 0x15]        ; 005a70c1
    MOV byte ptr [ESI],AL               ; 005a70c4
    MOV dword ptr [EBX + 0x20],0x1      ; 005a70c6
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a70cd
        ;   Label: LAB_005a70cd
    MOV EAX,EDI                         ; 005a70d1
    ADD ESP,0x10                        ; 005a70d3
    POP EBP                             ; 005a70d6
    POP ES                              ; 005a70d7
    POP EDI                             ; 005a70d8
    POP ESI                             ; 005a70d9
    POP EBX                             ; 005a70da
    RET                                 ; 005a70db

