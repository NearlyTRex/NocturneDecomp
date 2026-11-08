; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b95c0(void)
;
;
; XREF[1]:
;   FUN_005b9484 at 005b953a
;
; *****************************************************************************

section .text

    SHR AX,0x1                          ; 005b95c0
        ;   Label: FUN_005b95c0
    JBE 0x005b95c9                      ; 005b95c3
        ;   XREF to: 005b95c9 (CONDITIONAL_JUMP)  ; LAB_005b95c9
    FMUL ST0                            ; 005b95c5
    JMP 0x005b95c0                      ; 005b95c7
        ;   XREF to: 005b95c0 (UNCONDITIONAL_JUMP)
    JNC 0x005b95de                      ; 005b95c9
        ;   XREF to: 005b95de (CONDITIONAL_JUMP)  ; LAB_005b95de
        ;   Label: LAB_005b95c9
    FLD ST0                             ; 005b95cb
    JZ 0x005b95da                       ; 005b95cd
        ;   XREF to: 005b95da (CONDITIONAL_JUMP)  ; LAB_005b95da
        ;   Label: LAB_005b95cd
    FMUL ST0                            ; 005b95cf
    SHR AX,0x1                          ; 005b95d1
    JNC 0x005b95d8                      ; 005b95d4
        ;   XREF to: 005b95d8 (CONDITIONAL_JUMP)  ; LAB_005b95d8
    FMUL ST1                            ; 005b95d6
    JMP 0x005b95cd                      ; 005b95d8
        ;   XREF to: 005b95cd (UNCONDITIONAL_JUMP)  ; LAB_005b95cd
        ;   Label: LAB_005b95d8
    FSTP ST0                            ; 005b95da
        ;   Label: LAB_005b95da
    JMP 0x005b95e2                      ; 005b95dc
        ;   XREF to: 005b95e2 (UNCONDITIONAL_JUMP)  ; LAB_005b95e2
    FSTP ST0                            ; 005b95de
        ;   Label: LAB_005b95de
    FLD1                                ; 005b95e0
    RET                                 ; 005b95e2
        ;   Label: LAB_005b95e2

