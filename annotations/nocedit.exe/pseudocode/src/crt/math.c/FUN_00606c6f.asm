; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_math_c_FUN_00606c6f(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 00606c6f
        ;   Label: crt_math.c_FUN_00606c6f
    FXCH ST2                            ; 00606c73
    FSTP extended double ptr [ESP]      ; 00606c75
    CALL crt_math.c_fdiv_FUN_00606960   ; 00606c78
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)
    FXCH ST2                            ; 00606c7d
    ADD ESP,0x2c                        ; 00606c7f
    RET                                 ; 00606c82

