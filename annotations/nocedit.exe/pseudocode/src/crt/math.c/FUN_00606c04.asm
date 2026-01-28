; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown float10 crt_math_c_FUN_00606c04(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 00606c04
        ;   Label: crt_math.c_FUN_00606c04
    FXCH ST2                            ; 00606c07
    FSTP extended double ptr [ESP + 0xc] ; 00606c09
    CALL crt_math.c_fdiv_FUN_00606960   ; 00606c0d
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)
    FXCH ST2                            ; 00606c12
    FLD extended double ptr [ESP + 0xc] ; 00606c14
    FXCH ST3                            ; 00606c18
    ADD ESP,0x2c                        ; 00606c1a
    RET                                 ; 00606c1d

