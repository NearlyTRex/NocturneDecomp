; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_math.c_FUN_00606ed3()
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 00606ed3
        ;   Label: crt_math.c_FUN_00606ed3
    FXCH ST6                            ; 00606ed6
    FSTP extended double ptr [ESP + 0xc] ; 00606ed8
    CALL crt_math.c_fdiv_FUN_00606960   ; 00606edc
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)
    FXCH ST6                            ; 00606ee1
    ADD ESP,0x2c                        ; 00606ee3
    RET                                 ; 00606ee6

