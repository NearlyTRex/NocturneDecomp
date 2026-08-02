; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056c15f(void)
;
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 0056c15f
        ;   Label: crt_unknown.c_FUN_0056c15f
    FXCH ST2                            ; 0056c163
    FSTP extended double ptr [ESP]      ; 0056c165
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c168
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FXCH ST2                            ; 0056c16d
    ADD ESP,0x2c                        ; 0056c16f
    RET                                 ; 0056c172

