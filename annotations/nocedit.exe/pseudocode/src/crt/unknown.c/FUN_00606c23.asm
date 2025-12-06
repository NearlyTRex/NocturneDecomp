; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_00606c23()
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_ieee754_divide_FUN_00606960
;
; *****************************************************************************

section .text

    FXCH ST3                            ; 00606c23
        ;   Label: crt_unknown.c_FUN_00606c23
    FSTP extended double ptr [ESP + 0xc] ; 00606c25
    FXCH ST2                            ; 00606c29
    FLD ST0                             ; 00606c2b
    FSTP extended double ptr [ESP]      ; 00606c2d
    FSTP extended double ptr [ESP + 0x20] ; 00606c30
    CALL crt_math.c_ieee754_divide_FUN_00606960 ; 00606c34 | float10 crt_math.c_ieee754_divide_FUN_00606960(float10 dividend, float10 divisor)
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)
    FXCH ST2                            ; 00606c39
    FLD extended double ptr [ESP + 0x20] ; 00606c3b
    ADD ESP,0x2c                        ; 00606c3f
    RET                                 ; 00606c42

