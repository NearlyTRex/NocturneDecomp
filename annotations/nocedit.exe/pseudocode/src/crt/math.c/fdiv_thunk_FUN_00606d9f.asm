; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __fpu_thunk float10 crt_math.c_fdiv_thunk_FUN_00606d9f(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 00606d9f
        ;   Label: crt_math.c_fdiv_thunk_FUN_00606d9f
    FXCH ST4                            ; 00606da3
    FSTP extended double ptr [ESP]      ; 00606da5
    CALL crt_math.c_fdiv_FUN_00606960   ; 00606da8
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)
    FXCH ST4                            ; 00606dad
    FLD extended double ptr [ESP + 0xc] ; 00606daf
    ADD ESP,0x2c                        ; 00606db3
    RET                                 ; 00606db6

