; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __fpu_thunk float10 __fpu_thunk crt_math_c_fdiv_thunk_FUN_00606e0f(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_00606960
;
; *****************************************************************************

section .text

    FXCH ST6                            ; 00606e0f
        ;   Label: crt_math.c_fdiv_thunk_FUN_00606e0f
    FSTP extended double ptr [ESP + 0xc] ; 00606e11
    FXCH ST5                            ; 00606e15
    FLD ST0                             ; 00606e17
    FSTP extended double ptr [ESP]      ; 00606e19
    FSTP extended double ptr [ESP + 0x20] ; 00606e1c
    CALL crt_math.c_fdiv_FUN_00606960   ; 00606e20
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)
    FXCH ST5                            ; 00606e25
    FLD extended double ptr [ESP + 0x20] ; 00606e27
    ADD ESP,0x2c                        ; 00606e2b
    RET                                 ; 00606e2e

