; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_00606ad0()
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_ieee754_divide_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 00606ad0
        ;   Label: crt_unknown.c_FUN_00606ad0
    FSTP extended double ptr [ESP + 0xc] ; 00606ad3
    CALL crt_math.c_ieee754_divide_FUN_00606960 ; 00606ad7 | float10 crt_math.c_ieee754_divide_FUN_00606960(float10 dividend, float10 divisor)
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)
    FLD extended double ptr [ESP + 0xc] ; 00606adc
    FXCH                                ; 00606ae0
    ADD ESP,0x2c                        ; 00606ae2
    RET                                 ; 00606ae5

