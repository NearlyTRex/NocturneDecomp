; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_00606c43()
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_ieee754_divide_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 00606c43
        ;   Label: crt_unknown.c_FUN_00606c43
    FXCH ST2                            ; 00606c46
    FSTP extended double ptr [ESP + 0xc] ; 00606c48
    CALL crt_math.c_ieee754_divide_FUN_00606960 ; 00606c4c | float10 crt_math.c_ieee754_divide_FUN_00606960(float10 dividend, float10 divisor)
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)
    FXCH ST2                            ; 00606c51
    ADD ESP,0x2c                        ; 00606c53
    RET                                 ; 00606c56

