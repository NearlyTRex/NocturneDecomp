; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_00606e2f()
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_ieee754_divide_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 00606e2f
        ;   Label: crt_unknown.c_FUN_00606e2f
    FXCH ST5                            ; 00606e32
    FSTP extended double ptr [ESP + 0xc] ; 00606e34
    CALL crt_math.c_ieee754_divide_FUN_00606960 ; 00606e38 | float10 crt_math.c_ieee754_divide_FUN_00606960(float10 dividend, float10 divisor)
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)
    FXCH ST5                            ; 00606e3d
    ADD ESP,0x2c                        ; 00606e3f
    RET                                 ; 00606e42

