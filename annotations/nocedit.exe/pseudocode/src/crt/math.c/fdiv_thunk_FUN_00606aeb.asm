; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __fpu_thunk float10 crt_math.c_fdiv_thunk_FUN_00606aeb(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_00606960
;
; *****************************************************************************

section .text

    FXCH                                ; 00606aeb
        ;   Label: crt_math.c_fdiv_thunk_FUN_00606aeb
    FSTP extended double ptr [ESP + 0xc] ; 00606aed
    FLD ST0                             ; 00606af1
    FSTP extended double ptr [ESP]      ; 00606af3
    FSTP extended double ptr [ESP + 0x20] ; 00606af6
    CALL crt_math.c_fdiv_FUN_00606960   ; 00606afa
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)
    FLD extended double ptr [ESP + 0x20] ; 00606aff
    ADD ESP,0x2c                        ; 00606b03
    RET                                 ; 00606b06

