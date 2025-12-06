; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_00606d27()
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_ieee754_divide_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 00606d27
        ;   Label: crt_unknown.c_FUN_00606d27
    FXCH ST4                            ; 00606d2b
    FLD ST0                             ; 00606d2d
    FSTP extended double ptr [ESP]      ; 00606d2f
    FSTP extended double ptr [ESP + 0x20] ; 00606d32
    CALL crt_math.c_ieee754_divide_FUN_00606960 ; 00606d36 | float10 crt_math.c_ieee754_divide_FUN_00606960(float10 dividend, float10 divisor)
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)
    FXCH ST4                            ; 00606d3b
    FLD extended double ptr [ESP + 0x20] ; 00606d3d
    FXCH ST5                            ; 00606d41
    ADD ESP,0x2c                        ; 00606d43
    RET                                 ; 00606d46

