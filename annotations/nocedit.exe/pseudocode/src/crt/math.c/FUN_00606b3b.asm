; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_math_c_FUN_00606b3b(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 00606b3b
        ;   Label: crt_math.c_FUN_00606b3b
    FXCH                                ; 00606b3f
    FLD ST0                             ; 00606b41
    FSTP extended double ptr [ESP]      ; 00606b43
    FSTP extended double ptr [ESP + 0x20] ; 00606b46
    CALL crt_math.c_fdiv_FUN_00606960   ; 00606b4a
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)
    FXCH                                ; 00606b4f
    FLD extended double ptr [ESP + 0x20] ; 00606b51
    FXCH ST2                            ; 00606b55
    ADD ESP,0x2c                        ; 00606b57
    RET                                 ; 00606b5a

