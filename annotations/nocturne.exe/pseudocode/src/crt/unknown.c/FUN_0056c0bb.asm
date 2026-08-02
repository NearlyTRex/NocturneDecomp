; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056c0bb(void)
;
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 0056c0bb
        ;   Label: crt_unknown.c_FUN_0056c0bb
    FXCH                                ; 0056c0bf
    FSTP extended double ptr [ESP]      ; 0056c0c1
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c0c4
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FXCH                                ; 0056c0c9
    ADD ESP,0x2c                        ; 0056c0cb
    RET                                 ; 0056c0ce

