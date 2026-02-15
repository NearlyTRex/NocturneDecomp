; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_math_c_FUN_00606bcb(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 00606bcb
        ;   Label: crt_math.c_FUN_00606bcb
    FXCH                                ; 00606bcf
    FSTP extended double ptr [ESP]      ; 00606bd1
    CALL crt_math.c_fdiv_FUN_00606960   ; 00606bd4
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)
    FXCH                                ; 00606bd9
    ADD ESP,0x2c                        ; 00606bdb
    RET                                 ; 00606bde

