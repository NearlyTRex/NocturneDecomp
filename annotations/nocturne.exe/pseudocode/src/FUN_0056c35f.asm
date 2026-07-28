; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c35f(void)
;
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 0056c35f
        ;   Label: FUN_0056c35f
    FXCH ST6                            ; 0056c363
    FLD ST0                             ; 0056c365
    FSTP extended double ptr [ESP]      ; 0056c367
    FSTP extended double ptr [ESP + 0x20] ; 0056c36a
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c36e
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FXCH ST6                            ; 0056c373
    FLD extended double ptr [ESP + 0x20] ; 0056c375
    FXCH ST7                            ; 0056c379
    ADD ESP,0x2c                        ; 0056c37b
    RET                                 ; 0056c37e

