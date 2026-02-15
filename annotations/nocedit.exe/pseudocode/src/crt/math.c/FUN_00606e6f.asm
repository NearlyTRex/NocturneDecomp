; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_math_c_FUN_00606e6f(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 00606e6f
        ;   Label: crt_math.c_FUN_00606e6f
    FXCH ST6                            ; 00606e73
    FLD ST0                             ; 00606e75
    FSTP extended double ptr [ESP]      ; 00606e77
    FSTP extended double ptr [ESP + 0x20] ; 00606e7a
    CALL crt_math.c_fdiv_FUN_00606960   ; 00606e7e
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)
    FXCH ST6                            ; 00606e83
    FLD extended double ptr [ESP + 0x20] ; 00606e85
    FXCH ST7                            ; 00606e89
    ADD ESP,0x2c                        ; 00606e8b
    RET                                 ; 00606e8e

