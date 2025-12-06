; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_00606ca8()
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_ieee754_divide_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 00606ca8
        ;   Label: crt_unknown.c_FUN_00606ca8
    FXCH ST3                            ; 00606cab
    FSTP extended double ptr [ESP + 0xc] ; 00606cad
    CALL crt_math.c_ieee754_divide_FUN_00606960 ; 00606cb1 | float10 crt_math.c_ieee754_divide_FUN_00606960(float10 dividend, float10 divisor)
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)
    FXCH ST3                            ; 00606cb6
    FLD extended double ptr [ESP + 0xc] ; 00606cb8
    FXCH ST4                            ; 00606cbc
    ADD ESP,0x2c                        ; 00606cbe
    RET                                 ; 00606cc1

