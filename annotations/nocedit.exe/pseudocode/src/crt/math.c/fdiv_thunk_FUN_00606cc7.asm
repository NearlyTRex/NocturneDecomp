; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __fpu_thunk float10 __fpu_thunk crt_math_c_fdiv_thunk_FUN_00606cc7(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_00606960
;
; *****************************************************************************

section .text

    FXCH ST4                            ; 00606cc7
        ;   Label: crt_math.c_fdiv_thunk_FUN_00606cc7
    FSTP extended double ptr [ESP + 0xc] ; 00606cc9
    FXCH ST3                            ; 00606ccd
    FLD ST0                             ; 00606ccf
    FSTP extended double ptr [ESP]      ; 00606cd1
    FSTP extended double ptr [ESP + 0x20] ; 00606cd4
    CALL crt_math.c_fdiv_FUN_00606960   ; 00606cd8
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)
    FXCH ST3                            ; 00606cdd
    FLD extended double ptr [ESP + 0x20] ; 00606cdf
    ADD ESP,0x2c                        ; 00606ce3
    RET                                 ; 00606ce6

