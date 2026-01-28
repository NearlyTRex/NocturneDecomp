; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __fpu_thunk float10 __fpu_thunk crt_math_c_fdiv_thunk_FUN_00606b17(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 00606b17
        ;   Label: crt_math.c_fdiv_thunk_FUN_00606b17
    FSTP extended double ptr [ESP]      ; 00606b1b
    CALL crt_math.c_fdiv_FUN_00606960   ; 00606b1e
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)
    FLD extended double ptr [ESP + 0xc] ; 00606b23
    ADD ESP,0x2c                        ; 00606b27
    RET                                 ; 00606b2a

