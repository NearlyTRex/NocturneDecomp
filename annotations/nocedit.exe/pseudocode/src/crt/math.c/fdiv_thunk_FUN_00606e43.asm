; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __fpu_thunk float10 crt_math.c_fdiv_thunk_FUN_00606e43(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 00606e43
        ;   Label: crt_math.c_fdiv_thunk_FUN_00606e43
    FXCH ST5                            ; 00606e47
    FSTP extended double ptr [ESP]      ; 00606e49
    CALL crt_math.c_fdiv_FUN_00606960   ; 00606e4c | float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)
    FXCH ST5                            ; 00606e51
    FLD extended double ptr [ESP + 0xc] ; 00606e53
    ADD ESP,0x2c                        ; 00606e57
    RET                                 ; 00606e5a

