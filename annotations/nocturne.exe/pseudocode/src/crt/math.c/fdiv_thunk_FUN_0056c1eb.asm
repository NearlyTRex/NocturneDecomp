; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_math_c_fdiv_thunk_FUN_0056c1eb(void)
;
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 0056c1eb
        ;   Label: crt_math.c_fdiv_thunk_FUN_0056c1eb
    FXCH ST3                            ; 0056c1ef
    FSTP extended double ptr [ESP]      ; 0056c1f1
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c1f4
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FXCH ST3                            ; 0056c1f9
    FLD extended double ptr [ESP + 0xc] ; 0056c1fb
    ADD ESP,0x2c                        ; 0056c1ff
    RET                                 ; 0056c202

