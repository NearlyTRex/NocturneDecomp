; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallRegister float10 __watcallRegister crt_math_c_dispatch_divide_FUN_00606aaf(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 00606aaf
        ;   Label: crt_math.c_dispatch_divide_FUN_00606aaf
    FLD ST0                             ; 00606ab3
    FSTP extended double ptr [ESP]      ; 00606ab5
    FSTP extended double ptr [ESP + 0x20] ; 00606ab8
    CALL crt_math.c_fdiv_FUN_00606960   ; 00606abc
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)
    FLD extended double ptr [ESP + 0x20] ; 00606ac1
    FXCH                                ; 00606ac5
    ADD ESP,0x2c                        ; 00606ac7
    RET                                 ; 00606aca

