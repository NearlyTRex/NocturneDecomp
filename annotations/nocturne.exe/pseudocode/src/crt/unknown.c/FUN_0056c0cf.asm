; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056c0cf(void)
;
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 0056c0cf
        ;   Label: crt_unknown.c_FUN_0056c0cf
    FXCH ST2                            ; 0056c0d3
    FLD ST0                             ; 0056c0d5
    FSTP extended double ptr [ESP]      ; 0056c0d7
    FSTP extended double ptr [ESP + 0x20] ; 0056c0da
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c0de
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FXCH ST2                            ; 0056c0e3
    FLD extended double ptr [ESP + 0x20] ; 0056c0e5
    FXCH ST3                            ; 0056c0e9
    ADD ESP,0x2c                        ; 0056c0eb
    RET                                 ; 0056c0ee

