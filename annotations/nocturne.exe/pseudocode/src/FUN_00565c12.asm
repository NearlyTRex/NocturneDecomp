; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00565c12(void)
;
;
; XREF[1]:
;   crt_math.c_pow_FUN_00565ad6 at 00565b8c
;
; *****************************************************************************

section .text

    SHR AX,0x1                          ; 00565c12
        ;   Label: FUN_00565c12
    JBE 0x00565c1b                      ; 00565c15
        ;   XREF to: 00565c1b (CONDITIONAL_JUMP)  ; LAB_00565c1b
    FMUL ST0                            ; 00565c17
    JMP 0x00565c12                      ; 00565c19
        ;   XREF to: 00565c12 (UNCONDITIONAL_JUMP)
    JNC 0x00565c30                      ; 00565c1b
        ;   XREF to: 00565c30 (CONDITIONAL_JUMP)  ; LAB_00565c30
        ;   Label: LAB_00565c1b
    FLD ST0                             ; 00565c1d
    JZ 0x00565c2c                       ; 00565c1f
        ;   XREF to: 00565c2c (CONDITIONAL_JUMP)  ; LAB_00565c2c
        ;   Label: LAB_00565c1f
    FMUL ST0                            ; 00565c21
    SHR AX,0x1                          ; 00565c23
    JNC 0x00565c2a                      ; 00565c26
        ;   XREF to: 00565c2a (CONDITIONAL_JUMP)  ; LAB_00565c2a
    FMUL ST1                            ; 00565c28
    JMP 0x00565c1f                      ; 00565c2a
        ;   XREF to: 00565c1f (UNCONDITIONAL_JUMP)  ; LAB_00565c1f
        ;   Label: LAB_00565c2a
    FSTP ST0                            ; 00565c2c
        ;   Label: LAB_00565c2c
    JMP 0x00565c34                      ; 00565c2e
        ;   XREF to: 00565c34 (UNCONDITIONAL_JUMP)  ; LAB_00565c34
    FSTP ST0                            ; 00565c30
        ;   Label: LAB_00565c30
    FLD1                                ; 00565c32
    RET                                 ; 00565c34
        ;   Label: LAB_00565c34

