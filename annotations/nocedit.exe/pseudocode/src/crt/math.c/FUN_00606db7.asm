; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_math.c_FUN_00606db7()
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 00606db7
        ;   Label: crt_math.c_FUN_00606db7
    FXCH ST4                            ; 00606dbb
    FSTP extended double ptr [ESP]      ; 00606dbd
    CALL crt_math.c_fdiv_FUN_00606960   ; 00606dc0 | float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)
    FXCH ST4                            ; 00606dc5
    ADD ESP,0x2c                        ; 00606dc7
    RET                                 ; 00606dca

