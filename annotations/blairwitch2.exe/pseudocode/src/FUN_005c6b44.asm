; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c6b44(short *param_1)
;
;
; XREF[1]:
;   FUN_005c6210 at 005c63cc
;
; Referenced Globals:
;   undefined4 DAT_026807e0
;   undefined4 DAT_026807e8
;
; Called Functions:
;   FUN_005b77c0
;   FUN_005b8580
;   FUN_005b8ce0
;   FUN_005ba1f0
;   FUN_005c4cf0
;   FUN_005c6ce4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c6b44
        ;   Label: FUN_005c6b44
    PUSH ESI                            ; 005c6b45
    PUSH EDI                            ; 005c6b46
    PUSH EBP                            ; 005c6b47
    SUB ESP,0x8                         ; 005c6b48
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005c6b4b
    TEST EDX,EDX                        ; 005c6b4f
    JNZ 0x005c6b5d                      ; 005c6b51
        ;   XREF to: 005c6b5d (CONDITIONAL_JUMP)  ; LAB_005c6b5d
    MOV EAX,0xffffffff                  ; 005c6b53
    JMP 0x005c6cda                      ; 005c6b58
        ;   XREF to: 005c6cda (UNCONDITIONAL_JUMP)  ; LAB_005c6cda
    CMP word ptr [EDX],0x0              ; 005c6b5d
        ;   Label: LAB_005c6b5d
    JZ 0x005c6b85                       ; 005c6b61
        ;   XREF to: 005c6b85 (CONDITIONAL_JUMP)  ; LAB_005c6b85
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005c6b63
    MOV BX,word ptr [EAX + 0x2]         ; 005c6b67
    ADD EAX,0x2                         ; 005c6b6b
    TEST BX,BX                          ; 005c6b6e
    JZ 0x005c6b85                       ; 005c6b71
        ;   XREF to: 005c6b85 (CONDITIONAL_JUMP)  ; LAB_005c6b85
    CMP word ptr [EAX],0x3d             ; 005c6b73
        ;   Label: LAB_005c6b73
    JZ 0x005c6b85                       ; 005c6b77
        ;   XREF to: 005c6b85 (CONDITIONAL_JUMP)  ; LAB_005c6b85
    MOV CX,word ptr [EAX + 0x2]         ; 005c6b79
    ADD EAX,0x2                         ; 005c6b7d
    TEST CX,CX                          ; 005c6b80
    JNZ 0x005c6b73                      ; 005c6b83
        ;   XREF to: 005c6b73 (CONDITIONAL_JUMP)  ; LAB_005c6b73
    CMP word ptr [EAX],0x0              ; 005c6b85
        ;   Label: LAB_005c6b85
    JNZ 0x005c6b98                      ; 005c6b89
        ;   XREF to: 005c6b98 (CONDITIONAL_JUMP)  ; LAB_005c6b98
    MOV EAX,0xffffffff                  ; 005c6b8b
    ADD ESP,0x8                         ; 005c6b90
    POP EBP                             ; 005c6b93
    POP EDI                             ; 005c6b94
    POP ESI                             ; 005c6b95
    POP EBX                             ; 005c6b96
    RET                                 ; 005c6b97
    CMP word ptr [EAX + 0x2],0x0        ; 005c6b98
        ;   Label: LAB_005c6b98
    SETZ AL                             ; 005c6b9d
    MOV EBX,dword ptr [0x026807e8]      ; 005c6ba0 | DAT_026807e8
    MOVZX ESI,AL                        ; 005c6ba6
    TEST EBX,EBX                        ; 005c6ba9
    JNZ 0x005c6bea                      ; 005c6bab
        ;   XREF to: 005c6bea (CONDITIONAL_JUMP)  ; LAB_005c6bea
    TEST ESI,ESI                        ; 005c6bad
    JNZ 0x005c6cd8                      ; 005c6baf
        ;   XREF to: 005c6cd8 (CONDITIONAL_JUMP)  ; LAB_005c6cd8
    PUSH 0x9                            ; 005c6bb5
    CALL FUN_005b8580                   ; 005c6bb7
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8580()
    ADD ESP,0x4                         ; 005c6bbc
    MOV EBX,EAX                         ; 005c6bbf
    TEST EAX,EAX                        ; 005c6bc1
    JNZ 0x005c6bd2                      ; 005c6bc3
        ;   XREF to: 005c6bd2 (CONDITIONAL_JUMP)  ; LAB_005c6bd2
    MOV EAX,0xffffffff                  ; 005c6bc5
    ADD ESP,0x8                         ; 005c6bca
    POP EBP                             ; 005c6bcd
    POP EDI                             ; 005c6bce
    POP ESI                             ; 005c6bcf
    POP EBX                             ; 005c6bd0
    RET                                 ; 005c6bd1
    MOV [0x026807e8],EAX                ; 005c6bd2 | DAT_026807e8
        ;   Label: LAB_005c6bd2
    ADD EAX,0x8                         ; 005c6bd7
    MOV dword ptr [EAX + -0x8],ESI      ; 005c6bda
    MOV dword ptr [EAX + -0x4],ESI      ; 005c6bdd
    MOV [0x026807e0],EAX                ; 005c6be0 | DAT_026807e0
    JMP 0x005c6cc0                      ; 005c6be5
        ;   XREF to: 005c6cc0 (UNCONDITIONAL_JUMP)  ; LAB_005c6cc0
    PUSH ESI                            ; 005c6bea
        ;   Label: LAB_005c6bea
    MOV ECX,dword ptr [ESP + 0x20]      ; 005c6beb
    PUSH ECX                            ; 005c6bef
    CALL FUN_005c6ce4                   ; 005c6bf0
        ;   XREF to: 005c6ce4 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6ce4()
    ADD ESP,0x8                         ; 005c6bf5
    TEST ESI,ESI                        ; 005c6bf8
    JNZ 0x005c6cd8                      ; 005c6bfa
        ;   XREF to: 005c6cd8 (CONDITIONAL_JUMP)  ; LAB_005c6cd8
    TEST EAX,EAX                        ; 005c6c00
    JG 0x005c6cbd                       ; 005c6c02
        ;   XREF to: 005c6cbd (CONDITIONAL_JUMP)  ; LAB_005c6cbd
    NEG EAX                             ; 005c6c08
    MOV ESI,EAX                         ; 005c6c0a
    INC EAX                             ; 005c6c0c
    MOV dword ptr [ESP + 0x4],EAX       ; 005c6c0d
    MOV EAX,ESI                         ; 005c6c11
    SHL EAX,0x2                         ; 005c6c13
    MOV dword ptr [ESP],EAX             ; 005c6c16
    LEA EBP,[EAX + 0x8]                 ; 005c6c19
    MOV EAX,dword ptr [ESP + 0x4]       ; 005c6c1c
    MOV EDI,dword ptr [0x026807e0]      ; 005c6c20 | DAT_026807e0
    ADD EAX,EBP                         ; 005c6c26
    TEST EDI,EDI                        ; 005c6c28
    JNZ 0x005c6c77                      ; 005c6c2a
        ;   XREF to: 005c6c77 (CONDITIONAL_JUMP)  ; LAB_005c6c77
    PUSH EAX                            ; 005c6c2c
    CALL FUN_005b8580                   ; 005c6c2d
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8580()
    MOV EDI,EAX                         ; 005c6c32
    ADD ESP,0x4                         ; 005c6c34
    MOV EBX,EAX                         ; 005c6c37
    TEST EAX,EAX                        ; 005c6c39
    JNZ 0x005c6c4a                      ; 005c6c3b
        ;   XREF to: 005c6c4a (CONDITIONAL_JUMP)  ; LAB_005c6c4a
    MOV EAX,0xffffffff                  ; 005c6c3d
    ADD ESP,0x8                         ; 005c6c42
    POP EBP                             ; 005c6c45
    POP EDI                             ; 005c6c46
    POP ESI                             ; 005c6c47
    POP EBX                             ; 005c6c48
    RET                                 ; 005c6c49
    MOV ECX,dword ptr [ESP]             ; 005c6c4a
        ;   Label: LAB_005c6c4a
    PUSH ECX                            ; 005c6c4d
    MOV EAX,[0x026807e8]                ; 005c6c4e | DAT_026807e8
    PUSH EAX                            ; 005c6c53
    PUSH EDI                            ; 005c6c54
    CALL FUN_005c4cf0                   ; 005c6c55
        ;   XREF to: 005c4cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c4cf0()
    ADD ESP,0xc                         ; 005c6c5a
    MOV EDX,dword ptr [ESP + 0x4]       ; 005c6c5d
    PUSH EDX                            ; 005c6c61
    PUSH 0x0                            ; 005c6c62
    ADD EDI,EBP                         ; 005c6c64
    PUSH EDI                            ; 005c6c66
    MOV dword ptr [0x026807e0],EDI      ; 005c6c67 | DAT_026807e0
    CALL FUN_005b77c0                   ; 005c6c6d
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    ADD ESP,0xc                         ; 005c6c72
    JMP 0x005c6cad                      ; 005c6c75
        ;   XREF to: 005c6cad (UNCONDITIONAL_JUMP)  ; LAB_005c6cad
    PUSH EAX                            ; 005c6c77
        ;   Label: LAB_005c6c77
    PUSH EBX                            ; 005c6c78
    CALL FUN_005b8ce0                   ; 005c6c79
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8ce0()
    ADD ESP,0x8                         ; 005c6c7e
    MOV EBX,EAX                         ; 005c6c81
    TEST EAX,EAX                        ; 005c6c83
    JNZ 0x005c6c94                      ; 005c6c85
        ;   XREF to: 005c6c94 (CONDITIONAL_JUMP)  ; LAB_005c6c94
    MOV EAX,0xffffffff                  ; 005c6c87
    ADD ESP,0x8                         ; 005c6c8c
    POP EBP                             ; 005c6c8f
    POP EDI                             ; 005c6c90
    POP ESI                             ; 005c6c91
    POP EBX                             ; 005c6c92
    RET                                 ; 005c6c93
    PUSH ESI                            ; 005c6c94
        ;   Label: LAB_005c6c94
    MOV EDX,dword ptr [0x026807e0]      ; 005c6c95 | DAT_026807e0
    PUSH EDX                            ; 005c6c9b
    ADD EBP,EAX                         ; 005c6c9c
    PUSH EBP                            ; 005c6c9e
    CALL FUN_005ba1f0                   ; 005c6c9f
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ba1f0()
    ADD ESP,0xc                         ; 005c6ca4
    MOV dword ptr [0x026807e0],EBP      ; 005c6ca7 | DAT_026807e0
    MOV dword ptr [EBX + ESI*0x4 + 0x4],0x0 ; 005c6cad
        ;   Label: LAB_005c6cad
    MOV dword ptr [0x026807e8],EBX      ; 005c6cb5 | DAT_026807e8
    JMP 0x005c6cc0                      ; 005c6cbb
        ;   XREF to: 005c6cc0 (UNCONDITIONAL_JUMP)  ; LAB_005c6cc0
    LEA ESI,[EAX + -0x1]                ; 005c6cbd
        ;   Label: LAB_005c6cbd
    LEA EAX,[ESI*0x4 + 0x0]             ; 005c6cc0
        ;   Label: LAB_005c6cc0
    ADD EBX,EAX                         ; 005c6cc7
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005c6cc9
    MOV dword ptr [EBX],EAX             ; 005c6ccd
    MOV EAX,[0x026807e0]                ; 005c6ccf | DAT_026807e0
    MOV byte ptr [ESI + EAX*0x1],0x0    ; 005c6cd4
    XOR EAX,EAX                         ; 005c6cd8
        ;   Label: LAB_005c6cd8
    ADD ESP,0x8                         ; 005c6cda
        ;   Label: LAB_005c6cda
    POP EBP                             ; 005c6cdd
    POP EDI                             ; 005c6cde
    POP ESI                             ; 005c6cdf
    POP EBX                             ; 005c6ce0
    RET                                 ; 005c6ce1

