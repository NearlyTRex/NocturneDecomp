; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __fpu_thunk float10 crt_math.c_fdiv_thunk_FUN_00606bb3(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 00606bb3
        ;   Label: crt_math.c_fdiv_thunk_FUN_00606bb3
    FXCH                                ; 00606bb7
    FSTP extended double ptr [ESP]      ; 00606bb9
    CALL crt_math.c_fdiv_FUN_00606960   ; 00606bbc
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)
    FXCH                                ; 00606bc1
    FLD extended double ptr [ESP + 0xc] ; 00606bc3
    ADD ESP,0x2c                        ; 00606bc7
    RET                                 ; 00606bca

