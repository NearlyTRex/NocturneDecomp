; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a48a0(void)
;
;
; XREF[1]:
;   crt_math.c_pow_FUN_005a4764 at 005a481a
;
; *****************************************************************************

section .text

    SHR AX,0x1                          ; 005a48a0
        ;   Label: crt_unknown.c_FUN_005a48a0
    JBE 0x005a48a9                      ; 005a48a3
        ;   XREF to: 005a48a9 (CONDITIONAL_JUMP)  ; LAB_005a48a9
    FMUL ST0                            ; 005a48a5
    JMP 0x005a48a0                      ; 005a48a7
        ;   XREF to: 005a48a0 (UNCONDITIONAL_JUMP)
    JNC 0x005a48be                      ; 005a48a9
        ;   XREF to: 005a48be (CONDITIONAL_JUMP)  ; LAB_005a48be
        ;   Label: LAB_005a48a9
    FLD ST0                             ; 005a48ab
    JZ 0x005a48ba                       ; 005a48ad
        ;   XREF to: 005a48ba (CONDITIONAL_JUMP)  ; LAB_005a48ba
        ;   Label: LAB_005a48ad
    FMUL ST0                            ; 005a48af
    SHR AX,0x1                          ; 005a48b1
    JNC 0x005a48b8                      ; 005a48b4
        ;   XREF to: 005a48b8 (CONDITIONAL_JUMP)  ; LAB_005a48b8
    FMUL ST1                            ; 005a48b6
    JMP 0x005a48ad                      ; 005a48b8
        ;   XREF to: 005a48ad (UNCONDITIONAL_JUMP)  ; LAB_005a48ad
        ;   Label: LAB_005a48b8
    FSTP ST0                            ; 005a48ba
        ;   Label: LAB_005a48ba
    JMP 0x005a48c2                      ; 005a48bc
        ;   XREF to: 005a48c2 (UNCONDITIONAL_JUMP)  ; LAB_005a48c2
    FSTP ST0                            ; 005a48be
        ;   Label: LAB_005a48be
    FLD1                                ; 005a48c0
    RET                                 ; 005a48c2
        ;   Label: LAB_005a48c2

