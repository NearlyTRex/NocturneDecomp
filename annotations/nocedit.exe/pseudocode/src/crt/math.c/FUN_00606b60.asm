; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown float10 crt_math_c_FUN_00606b60(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 00606b60
        ;   Label: crt_math.c_FUN_00606b60
    FXCH                                ; 00606b63
    FSTP extended double ptr [ESP + 0xc] ; 00606b65
    CALL crt_math.c_fdiv_FUN_00606960   ; 00606b69
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)
    FXCH                                ; 00606b6e
    FLD extended double ptr [ESP + 0xc] ; 00606b70
    FXCH ST2                            ; 00606b74
    ADD ESP,0x2c                        ; 00606b76
    RET                                 ; 00606b79

