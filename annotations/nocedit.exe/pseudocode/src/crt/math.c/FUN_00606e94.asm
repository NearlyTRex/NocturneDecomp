; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_math.c_FUN_00606e94()
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 00606e94
        ;   Label: crt_math.c_FUN_00606e94
    FXCH ST6                            ; 00606e97
    FSTP extended double ptr [ESP + 0xc] ; 00606e99
    CALL crt_math.c_fdiv_FUN_00606960   ; 00606e9d
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)
    FXCH ST6                            ; 00606ea2
    FLD extended double ptr [ESP + 0xc] ; 00606ea4
    FXCH ST7                            ; 00606ea8
    ADD ESP,0x2c                        ; 00606eaa
    RET                                 ; 00606ead

