; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_00606dcb()
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_ieee754_divide_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 00606dcb
        ;   Label: crt_unknown.c_FUN_00606dcb
    FXCH ST5                            ; 00606dcf
    FLD ST0                             ; 00606dd1
    FSTP extended double ptr [ESP]      ; 00606dd3
    FSTP extended double ptr [ESP + 0x20] ; 00606dd6
    CALL crt_math.c_ieee754_divide_FUN_00606960 ; 00606dda | float10 crt_math.c_ieee754_divide_FUN_00606960(float10 dividend, float10 divisor)
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)
    FXCH ST5                            ; 00606ddf
    FLD extended double ptr [ESP + 0x20] ; 00606de1
    FXCH ST6                            ; 00606de5
    ADD ESP,0x2c                        ; 00606de7
    RET                                 ; 00606dea

