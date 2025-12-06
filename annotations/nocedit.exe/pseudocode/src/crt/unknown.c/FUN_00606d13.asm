; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_00606d13()
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_ieee754_divide_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 00606d13
        ;   Label: crt_unknown.c_FUN_00606d13
    FXCH ST3                            ; 00606d17
    FSTP extended double ptr [ESP]      ; 00606d19
    CALL crt_math.c_ieee754_divide_FUN_00606960 ; 00606d1c | float10 crt_math.c_ieee754_divide_FUN_00606960(float10 dividend, float10 divisor)
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)
    FXCH ST3                            ; 00606d21
    ADD ESP,0x2c                        ; 00606d23
    RET                                 ; 00606d26

