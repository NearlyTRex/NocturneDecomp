; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_00606b17()
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_ieee754_divide_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 00606b17
        ;   Label: crt_unknown.c_FUN_00606b17
    FSTP extended double ptr [ESP]      ; 00606b1b
    CALL crt_math.c_ieee754_divide_FUN_00606960 ; 00606b1e | float10 crt_math.c_ieee754_divide_FUN_00606960(float10 dividend, float10 divisor)
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)
    FLD extended double ptr [ESP + 0xc] ; 00606b23
    ADD ESP,0x2c                        ; 00606b27
    RET                                 ; 00606b2a

