; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c203(void)
;
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 0056c203
        ;   Label: FUN_0056c203
    FXCH ST3                            ; 0056c207
    FSTP extended double ptr [ESP]      ; 0056c209
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c20c
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FXCH ST3                            ; 0056c211
    ADD ESP,0x2c                        ; 0056c213
    RET                                 ; 0056c216

