; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056c147(void)
;
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 0056c147
        ;   Label: crt_unknown.c_FUN_0056c147
    FXCH ST2                            ; 0056c14b
    FSTP extended double ptr [ESP]      ; 0056c14d
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c150
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FXCH ST2                            ; 0056c155
    FLD extended double ptr [ESP + 0xc] ; 0056c157
    ADD ESP,0x2c                        ; 0056c15b
    RET                                 ; 0056c15e

