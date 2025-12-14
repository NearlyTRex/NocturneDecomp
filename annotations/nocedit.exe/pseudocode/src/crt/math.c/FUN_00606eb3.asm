; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_math.c_FUN_00606eb3()
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_00606960
;
; *****************************************************************************

section .text

    FXCH ST7                            ; 00606eb3
        ;   Label: crt_math.c_FUN_00606eb3
    FSTP extended double ptr [ESP + 0xc] ; 00606eb5
    FXCH ST6                            ; 00606eb9
    FLD ST0                             ; 00606ebb
    FSTP extended double ptr [ESP]      ; 00606ebd
    FSTP extended double ptr [ESP + 0x20] ; 00606ec0
    CALL crt_math.c_fdiv_FUN_00606960   ; 00606ec4
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)
    FXCH ST6                            ; 00606ec9
    FLD extended double ptr [ESP + 0x20] ; 00606ecb
    ADD ESP,0x2c                        ; 00606ecf
    RET                                 ; 00606ed2

