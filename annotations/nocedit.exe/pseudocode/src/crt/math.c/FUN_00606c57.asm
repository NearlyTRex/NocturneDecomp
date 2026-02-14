; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void crt_math_c_FUN_00606c57(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 00606c57
        ;   Label: crt_math.c_FUN_00606c57
    FXCH ST2                            ; 00606c5b
    FSTP extended double ptr [ESP]      ; 00606c5d
    CALL crt_math.c_fdiv_FUN_00606960   ; 00606c60
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)
    FXCH ST2                            ; 00606c65
    FLD extended double ptr [ESP + 0xc] ; 00606c67
    ADD ESP,0x2c                        ; 00606c6b
    RET                                 ; 00606c6e

