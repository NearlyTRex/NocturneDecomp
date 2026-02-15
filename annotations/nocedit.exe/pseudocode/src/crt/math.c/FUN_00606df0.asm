; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_math_c_FUN_00606df0(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 00606df0
        ;   Label: crt_math.c_FUN_00606df0
    FXCH ST5                            ; 00606df3
    FSTP extended double ptr [ESP + 0xc] ; 00606df5
    CALL crt_math.c_fdiv_FUN_00606960   ; 00606df9
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)
    FXCH ST5                            ; 00606dfe
    FLD extended double ptr [ESP + 0xc] ; 00606e00
    FXCH ST6                            ; 00606e04
    ADD ESP,0x2c                        ; 00606e06
    RET                                 ; 00606e09

