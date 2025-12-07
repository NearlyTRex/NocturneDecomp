; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __fpu_thunk float10 crt_math.c_fdiv_thunk_FUN_00606ee7(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 00606ee7
        ;   Label: crt_math.c_fdiv_thunk_FUN_00606ee7
    FXCH ST6                            ; 00606eeb
    FSTP extended double ptr [ESP]      ; 00606eed
    CALL crt_math.c_fdiv_FUN_00606960   ; 00606ef0 | float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)
    FXCH ST6                            ; 00606ef5
    FLD extended double ptr [ESP + 0xc] ; 00606ef7
    ADD ESP,0x2c                        ; 00606efb
    RET                                 ; 00606efe

