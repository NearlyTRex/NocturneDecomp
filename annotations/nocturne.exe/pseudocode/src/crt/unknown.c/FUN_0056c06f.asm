; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056c06f(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    FXCH ST2                            ; 0056c06f
        ;   Label: crt_unknown.c_FUN_0056c06f
    FSTP extended double ptr [ESP + 0xc] ; 0056c071
    FXCH                                ; 0056c075
    FLD ST0                             ; 0056c077
    FSTP extended double ptr [ESP]      ; 0056c079
    FSTP extended double ptr [ESP + 0x20] ; 0056c07c
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c080
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FXCH                                ; 0056c085
    FLD extended double ptr [ESP + 0x20] ; 0056c087
    ADD ESP,0x2c                        ; 0056c08b
    RET                                 ; 0056c08e

