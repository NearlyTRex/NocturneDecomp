; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c10e(void)
;
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 0056c10e
        ;   Label: FUN_0056c10e
    INT 0x6                             ; 0056c111
    FXCH ST3                            ; 0056c113
        ;   Label: LAB_0056c113
    FSTP extended double ptr [ESP + 0xc] ; 0056c115
    FXCH ST2                            ; 0056c119
    FLD ST0                             ; 0056c11b
    FSTP extended double ptr [ESP]      ; 0056c11d
    FSTP extended double ptr [ESP + 0x20] ; 0056c120
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c124
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FXCH ST2                            ; 0056c129
    FLD extended double ptr [ESP + 0x20] ; 0056c12b
    ADD ESP,0x2c                        ; 0056c12f
    RET                                 ; 0056c132

