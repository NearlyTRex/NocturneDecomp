; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_math.c_FUN_00606d4c()
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 00606d4c
        ;   Label: crt_math.c_FUN_00606d4c
    FXCH ST4                            ; 00606d4f
    FSTP extended double ptr [ESP + 0xc] ; 00606d51
    CALL crt_math.c_fdiv_FUN_00606960   ; 00606d55 | float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)
    FXCH ST4                            ; 00606d5a
    FLD extended double ptr [ESP + 0xc] ; 00606d5c
    FXCH ST5                            ; 00606d60
    ADD ESP,0x2c                        ; 00606d62
    RET                                 ; 00606d65

