; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056c3ef(void)
;
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 0056c3ef
        ;   Label: crt_unknown.c_FUN_0056c3ef
    FXCH ST6                            ; 0056c3f3
    FSTP extended double ptr [ESP]      ; 0056c3f5
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c3f8
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FXCH ST6                            ; 0056c3fd
    ADD ESP,0x2c                        ; 0056c3ff
    RET                                 ; 0056c402

