; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00481b0c(void)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481b0c
        ;   Label: FUN_00481b0c
    MOV AL,byte ptr [EDX]               ; 00481b0d
    TEST ECX,0x7                        ; 00481b0f
    JZ 0x00481b2f                       ; 00481b15
        ;   XREF to: 00481b2f (CONDITIONAL_JUMP)  ; LAB_00481b2f
    TEST AL,AL                          ; 00481b17
        ;   Label: LAB_00481b17
    MOV byte ptr [ECX],AL               ; 00481b19
    JZ 0x00481b7b                       ; 00481b1b
        ;   XREF to: 00481b7b (CONDITIONAL_JUMP)  ; LAB_00481b7b
    MOV AL,byte ptr [EDX + 0x1]         ; 00481b1d
    INC ECX                             ; 00481b20
    INC EDX                             ; 00481b21
    TEST ECX,0x7                        ; 00481b22
    JNZ 0x00481b17                      ; 00481b28
        ;   XREF to: 00481b17 (CONDITIONAL_JUMP)  ; LAB_00481b17
    JMP 0x00481b2f                      ; 00481b2a
        ;   XREF to: 00481b2f (UNCONDITIONAL_JUMP)  ; LAB_00481b2f
    FISTP qword ptr [ECX + -0x8]        ; 00481b2c
        ;   Label: LAB_00481b2c
    FILD qword ptr [EDX]                ; 00481b2f
        ;   Label: LAB_00481b2f
    MOV EAX,dword ptr [EDX]             ; 00481b31
    ADD ECX,0x8                         ; 00481b33
    TEST EAX,0xff                       ; 00481b36
    JZ 0x00481ba8                       ; 00481b3b
        ;   XREF to: 00481ba8 (CONDITIONAL_JUMP)  ; LAB_00481ba8
    TEST EAX,0xff00                     ; 00481b3d
    JZ 0x00481ba0                       ; 00481b42
        ;   XREF to: 00481ba0 (CONDITIONAL_JUMP)  ; LAB_00481ba0
    TEST EAX,0xff0000                   ; 00481b44
    JZ 0x00481b9c                       ; 00481b49
        ;   XREF to: 00481b9c (CONDITIONAL_JUMP)  ; LAB_00481b9c
    TEST EAX,0xff000000                 ; 00481b4b
    JZ 0x00481b93                       ; 00481b50
        ;   XREF to: 00481b93 (CONDITIONAL_JUMP)  ; LAB_00481b93
    MOV EBX,dword ptr [EDX + 0x4]       ; 00481b52
    ADD EDX,0x8                         ; 00481b55
    TEST EBX,0xff                       ; 00481b58
    JZ 0x00481b90                       ; 00481b5e
        ;   XREF to: 00481b90 (CONDITIONAL_JUMP)  ; LAB_00481b90
    TEST EBX,0xff00                     ; 00481b60
    JZ 0x00481b84                       ; 00481b66
        ;   XREF to: 00481b84 (CONDITIONAL_JUMP)  ; LAB_00481b84
    TEST EBX,0xff0000                   ; 00481b68
    JZ 0x00481b80                       ; 00481b6e
        ;   XREF to: 00481b80 (CONDITIONAL_JUMP)  ; LAB_00481b80
    TEST EBX,0xff000000                 ; 00481b70
    JNZ 0x00481b2c                      ; 00481b76
        ;   XREF to: 00481b2c (CONDITIONAL_JUMP)  ; LAB_00481b2c
    FISTP qword ptr [ECX + -0x8]        ; 00481b78
    POP EBX                             ; 00481b7b
        ;   Label: LAB_00481b7b
    RET                                 ; 00481b7c
    MOV byte ptr [ECX + -0x2],0x0       ; 00481b80
        ;   Label: LAB_00481b80
    MOV word ptr [ECX + -0x4],BX        ; 00481b84
        ;   Label: LAB_00481b84
    MOV dword ptr [ECX + -0x8],EAX      ; 00481b88
    FMULP ST0                           ; 00481b8b
    POP EBX                             ; 00481b8d
    RET                                 ; 00481b8e
    MOV byte ptr [ECX + -0x4],BL        ; 00481b90
        ;   Label: LAB_00481b90
    MOV dword ptr [ECX + -0x8],EAX      ; 00481b93
        ;   Label: LAB_00481b93
    POP EBX                             ; 00481b96
    FMULP ST0                           ; 00481b97
    RET                                 ; 00481b99
    MOV byte ptr [ECX + -0x6],0x0       ; 00481b9c
        ;   Label: LAB_00481b9c
    MOV word ptr [ECX + -0x8],AX        ; 00481ba0
        ;   Label: LAB_00481ba0
    POP EBX                             ; 00481ba4
    FMULP ST0                           ; 00481ba5
    RET                                 ; 00481ba7
    MOV byte ptr [ECX + -0x8],AL        ; 00481ba8
        ;   Label: LAB_00481ba8
    POP EBX                             ; 00481bab
    FMULP ST0                           ; 00481bac
    RET                                 ; 00481bae

