; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056c173(void)
;
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 0056c173
        ;   Label: crt_unknown.c_FUN_0056c173
    FXCH ST3                            ; 0056c177
    FLD ST0                             ; 0056c179
    FSTP extended double ptr [ESP]      ; 0056c17b
    FSTP extended double ptr [ESP + 0x20] ; 0056c17e
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c182
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FXCH ST3                            ; 0056c187
    FLD extended double ptr [ESP + 0x20] ; 0056c189
    FXCH ST4                            ; 0056c18d
    ADD ESP,0x2c                        ; 0056c18f
    RET                                 ; 0056c192

