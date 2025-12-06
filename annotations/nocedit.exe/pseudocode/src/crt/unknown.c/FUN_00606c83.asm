; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_00606c83()
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_ieee754_divide_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 00606c83
        ;   Label: crt_unknown.c_FUN_00606c83
    FXCH ST3                            ; 00606c87
    FLD ST0                             ; 00606c89
    FSTP extended double ptr [ESP]      ; 00606c8b
    FSTP extended double ptr [ESP + 0x20] ; 00606c8e
    CALL crt_math.c_ieee754_divide_FUN_00606960 ; 00606c92 | float10 crt_math.c_ieee754_divide_FUN_00606960(float10 dividend, float10 divisor)
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)
    FXCH ST3                            ; 00606c97
    FLD extended double ptr [ESP + 0x20] ; 00606c99
    FXCH ST4                            ; 00606c9d
    ADD ESP,0x2c                        ; 00606c9f
    RET                                 ; 00606ca2

