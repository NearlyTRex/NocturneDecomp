; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c1a30(void)
;
;
; XREF[1]:
;   crt_math.c_pow_FUN_005c18f4 at 005c19aa
;
; *****************************************************************************

section .text

    SHR AX,0x1                          ; 005c1a30
        ;   Label: crt_unknown.c_FUN_005c1a30
    JBE 0x005c1a39                      ; 005c1a33
        ;   XREF to: 005c1a39 (CONDITIONAL_JUMP)  ; LAB_005c1a39
    FMUL ST0                            ; 005c1a35
    JMP 0x005c1a30                      ; 005c1a37
        ;   XREF to: 005c1a30 (UNCONDITIONAL_JUMP)
    JNC 0x005c1a4e                      ; 005c1a39
        ;   XREF to: 005c1a4e (CONDITIONAL_JUMP)  ; LAB_005c1a4e
        ;   Label: LAB_005c1a39
    FLD ST0                             ; 005c1a3b
    JZ 0x005c1a4a                       ; 005c1a3d
        ;   XREF to: 005c1a4a (CONDITIONAL_JUMP)  ; LAB_005c1a4a
        ;   Label: LAB_005c1a3d
    FMUL ST0                            ; 005c1a3f
    SHR AX,0x1                          ; 005c1a41
    JNC 0x005c1a48                      ; 005c1a44
        ;   XREF to: 005c1a48 (CONDITIONAL_JUMP)  ; LAB_005c1a48
    FMUL ST1                            ; 005c1a46
    JMP 0x005c1a3d                      ; 005c1a48
        ;   XREF to: 005c1a3d (UNCONDITIONAL_JUMP)  ; LAB_005c1a3d
        ;   Label: LAB_005c1a48
    FSTP ST0                            ; 005c1a4a
        ;   Label: LAB_005c1a4a
    JMP 0x005c1a52                      ; 005c1a4c
        ;   XREF to: 005c1a52 (UNCONDITIONAL_JUMP)  ; LAB_005c1a52
    FSTP ST0                            ; 005c1a4e
        ;   Label: LAB_005c1a4e
    FLD1                                ; 005c1a50
    RET                                 ; 005c1a52
        ;   Label: LAB_005c1a52

