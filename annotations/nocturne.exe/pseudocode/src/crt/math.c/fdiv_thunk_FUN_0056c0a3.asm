; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_math_c_fdiv_thunk_FUN_0056c0a3(void)
;
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 0056c0a3
        ;   Label: crt_math.c_fdiv_thunk_FUN_0056c0a3
    FXCH                                ; 0056c0a7
    FSTP extended double ptr [ESP]      ; 0056c0a9
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c0ac
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FXCH                                ; 0056c0b1
    FLD extended double ptr [ESP + 0xc] ; 0056c0b3
    ADD ESP,0x2c                        ; 0056c0b7
    RET                                 ; 0056c0ba

