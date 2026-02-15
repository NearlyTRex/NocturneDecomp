; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_math_c_FUN_00606eff(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 00606eff
        ;   Label: crt_math.c_FUN_00606eff
    FXCH ST6                            ; 00606f03
    FSTP extended double ptr [ESP]      ; 00606f05
    CALL crt_math.c_fdiv_FUN_00606960   ; 00606f08
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)
    FXCH ST6                            ; 00606f0d
    ADD ESP,0x2c                        ; 00606f0f
    RET                                 ; 00606f12

