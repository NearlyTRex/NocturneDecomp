; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_watcom_c_FUN_0049604c(void)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049604c
        ;   Label: crt_watcom.c_FUN_0049604c
    MOV AL,byte ptr [EDX]               ; 0049604d
    TEST ECX,0x7                        ; 0049604f
    JZ 0x0049606f                       ; 00496055
        ;   XREF to: 0049606f (CONDITIONAL_JUMP)  ; LAB_0049606f
    TEST AL,AL                          ; 00496057
        ;   Label: LAB_00496057
    MOV byte ptr [ECX],AL               ; 00496059
    JZ 0x004960bb                       ; 0049605b
        ;   XREF to: 004960bb (CONDITIONAL_JUMP)  ; LAB_004960bb
    MOV AL,byte ptr [EDX + 0x1]         ; 0049605d
    INC ECX                             ; 00496060
    INC EDX                             ; 00496061
    TEST ECX,0x7                        ; 00496062
    JNZ 0x00496057                      ; 00496068
        ;   XREF to: 00496057 (CONDITIONAL_JUMP)  ; LAB_00496057
    JMP 0x0049606f                      ; 0049606a
        ;   XREF to: 0049606f (UNCONDITIONAL_JUMP)  ; LAB_0049606f
    FISTP qword ptr [ECX + -0x8]        ; 0049606c
        ;   Label: LAB_0049606c
    FILD qword ptr [EDX]                ; 0049606f
        ;   Label: LAB_0049606f
    MOV EAX,dword ptr [EDX]             ; 00496071
    ADD ECX,0x8                         ; 00496073
    TEST EAX,0xff                       ; 00496076
    JZ 0x004960e8                       ; 0049607b
        ;   XREF to: 004960e8 (CONDITIONAL_JUMP)  ; LAB_004960e8
    TEST EAX,0xff00                     ; 0049607d
    JZ 0x004960e0                       ; 00496082
        ;   XREF to: 004960e0 (CONDITIONAL_JUMP)  ; LAB_004960e0
    TEST EAX,0xff0000                   ; 00496084
    JZ 0x004960dc                       ; 00496089
        ;   XREF to: 004960dc (CONDITIONAL_JUMP)  ; LAB_004960dc
    TEST EAX,0xff000000                 ; 0049608b
    JZ 0x004960d3                       ; 00496090
        ;   XREF to: 004960d3 (CONDITIONAL_JUMP)  ; LAB_004960d3
    MOV EBX,dword ptr [EDX + 0x4]       ; 00496092
    ADD EDX,0x8                         ; 00496095
    TEST EBX,0xff                       ; 00496098
    JZ 0x004960d0                       ; 0049609e
        ;   XREF to: 004960d0 (CONDITIONAL_JUMP)  ; LAB_004960d0
    TEST EBX,0xff00                     ; 004960a0
    JZ 0x004960c4                       ; 004960a6
        ;   XREF to: 004960c4 (CONDITIONAL_JUMP)  ; LAB_004960c4
    TEST EBX,0xff0000                   ; 004960a8
    JZ 0x004960c0                       ; 004960ae
        ;   XREF to: 004960c0 (CONDITIONAL_JUMP)  ; LAB_004960c0
    TEST EBX,0xff000000                 ; 004960b0
    JNZ 0x0049606c                      ; 004960b6
        ;   XREF to: 0049606c (CONDITIONAL_JUMP)  ; LAB_0049606c
    FISTP qword ptr [ECX + -0x8]        ; 004960b8
    POP EBX                             ; 004960bb
        ;   Label: LAB_004960bb
    RET                                 ; 004960bc
    MOV byte ptr [ECX + -0x2],0x0       ; 004960c0
        ;   Label: LAB_004960c0
    MOV word ptr [ECX + -0x4],BX        ; 004960c4
        ;   Label: LAB_004960c4
    MOV dword ptr [ECX + -0x8],EAX      ; 004960c8
    FMULP ST0                           ; 004960cb
    POP EBX                             ; 004960cd
    RET                                 ; 004960ce
    MOV byte ptr [ECX + -0x4],BL        ; 004960d0
        ;   Label: LAB_004960d0
    MOV dword ptr [ECX + -0x8],EAX      ; 004960d3
        ;   Label: LAB_004960d3
    POP EBX                             ; 004960d6
    FMULP ST0                           ; 004960d7
    RET                                 ; 004960d9
    MOV byte ptr [ECX + -0x6],0x0       ; 004960dc
        ;   Label: LAB_004960dc
    MOV word ptr [ECX + -0x8],AX        ; 004960e0
        ;   Label: LAB_004960e0
    POP EBX                             ; 004960e4
    FMULP ST0                           ; 004960e5
    RET                                 ; 004960e7
    MOV byte ptr [ECX + -0x8],AL        ; 004960e8
        ;   Label: LAB_004960e8
    POP EBX                             ; 004960eb
    FMULP ST0                           ; 004960ec
    RET                                 ; 004960ee

