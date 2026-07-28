; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c39e(void)
;
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 0056c39e
        ;   Label: FUN_0056c39e
    INT 0x6                             ; 0056c3a1
    FXCH ST7                            ; 0056c3a3
        ;   Label: LAB_0056c3a3
    FSTP extended double ptr [ESP + 0xc] ; 0056c3a5
    FXCH ST6                            ; 0056c3a9
    FLD ST0                             ; 0056c3ab
    FSTP extended double ptr [ESP]      ; 0056c3ad
    FSTP extended double ptr [ESP + 0x20] ; 0056c3b0
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c3b4
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FXCH ST6                            ; 0056c3b9
    FLD extended double ptr [ESP + 0x20] ; 0056c3bb
    ADD ESP,0x2c                        ; 0056c3bf
    RET                                 ; 0056c3c2

