; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __fpu_thunk float10 crt_math.c_fdiv_thunk_FUN_00606b7f(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_00606960
;
; *****************************************************************************

section .text

    FXCH ST2                            ; 00606b7f
        ;   Label: crt_math.c_fdiv_thunk_FUN_00606b7f
    FSTP extended double ptr [ESP + 0xc] ; 00606b81
    FXCH                                ; 00606b85
    FLD ST0                             ; 00606b87
    FSTP extended double ptr [ESP]      ; 00606b89
    FSTP extended double ptr [ESP + 0x20] ; 00606b8c
    CALL crt_math.c_fdiv_FUN_00606960   ; 00606b90 | float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)
    FXCH                                ; 00606b95
    FLD extended double ptr [ESP + 0x20] ; 00606b97
    ADD ESP,0x2c                        ; 00606b9b
    RET                                 ; 00606b9e

