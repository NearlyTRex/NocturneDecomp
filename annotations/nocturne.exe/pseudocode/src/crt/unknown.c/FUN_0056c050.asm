; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056c050(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 0056c050
        ;   Label: crt_unknown.c_FUN_0056c050
    FXCH                                ; 0056c053
    FSTP extended double ptr [ESP + 0xc] ; 0056c055
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c059
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FXCH                                ; 0056c05e
    FLD extended double ptr [ESP + 0xc] ; 0056c060
    FXCH ST2                            ; 0056c064
    ADD ESP,0x2c                        ; 0056c066
    RET                                 ; 0056c069

