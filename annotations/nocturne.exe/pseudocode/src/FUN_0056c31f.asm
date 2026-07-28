; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c31f(void)
;
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 0056c31f
        ;   Label: FUN_0056c31f
    FXCH ST5                            ; 0056c322
    FSTP extended double ptr [ESP + 0xc] ; 0056c324
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c328
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FXCH ST5                            ; 0056c32d
    ADD ESP,0x2c                        ; 0056c32f
    RET                                 ; 0056c332

