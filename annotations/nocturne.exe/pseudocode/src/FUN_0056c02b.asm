; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c02b(void)
;
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 0056c02b
        ;   Label: FUN_0056c02b
    FXCH                                ; 0056c02f
    FLD ST0                             ; 0056c031
    FSTP extended double ptr [ESP]      ; 0056c033
    FSTP extended double ptr [ESP + 0x20] ; 0056c036
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c03a
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FXCH                                ; 0056c03f
    FLD extended double ptr [ESP + 0x20] ; 0056c041
    FXCH ST2                            ; 0056c045
    ADD ESP,0x2c                        ; 0056c047
    RET                                 ; 0056c04a

