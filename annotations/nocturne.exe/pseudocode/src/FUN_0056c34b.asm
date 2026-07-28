; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c34b(void)
;
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 0056c34b
        ;   Label: FUN_0056c34b
    FXCH ST5                            ; 0056c34f
    FSTP extended double ptr [ESP]      ; 0056c351
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c354
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FXCH ST5                            ; 0056c359
    ADD ESP,0x2c                        ; 0056c35b
    RET                                 ; 0056c35e

