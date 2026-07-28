; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c27b(void)
;
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 0056c27b
        ;   Label: FUN_0056c27b
    FXCH ST4                            ; 0056c27e
    FSTP extended double ptr [ESP + 0xc] ; 0056c280
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c284
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FXCH ST4                            ; 0056c289
    ADD ESP,0x2c                        ; 0056c28b
    RET                                 ; 0056c28e

