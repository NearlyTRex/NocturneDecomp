; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_math.c_FUN_00606e5b()
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 00606e5b
        ;   Label: crt_math.c_FUN_00606e5b
    FXCH ST5                            ; 00606e5f
    FSTP extended double ptr [ESP]      ; 00606e61
    CALL crt_math.c_fdiv_FUN_00606960   ; 00606e64 | float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)
    FXCH ST5                            ; 00606e69
    ADD ESP,0x2c                        ; 00606e6b
    RET                                 ; 00606e6e

