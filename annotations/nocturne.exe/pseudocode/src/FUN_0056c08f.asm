; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c08f(void)
;
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 0056c08f
        ;   Label: FUN_0056c08f
    FXCH                                ; 0056c092
    FSTP extended double ptr [ESP + 0xc] ; 0056c094
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c098
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FXCH                                ; 0056c09d
    ADD ESP,0x2c                        ; 0056c09f
    RET                                 ; 0056c0a2

