; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void crt_math_c_FUN_00606b9f(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 00606b9f
        ;   Label: crt_math.c_FUN_00606b9f
    FXCH                                ; 00606ba2
    FSTP extended double ptr [ESP + 0xc] ; 00606ba4
    CALL crt_math.c_fdiv_FUN_00606960   ; 00606ba8
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)
    FXCH                                ; 00606bad
    ADD ESP,0x2c                        ; 00606baf
    RET                                 ; 00606bb2

