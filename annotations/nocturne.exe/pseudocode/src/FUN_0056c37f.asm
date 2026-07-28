; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c37f(void)
;
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 0056c37f
        ;   Label: FUN_0056c37f
    INT 0x6                             ; 0056c382
    FSTP extended double ptr [ESP]      ; 0056c384
        ;   Label: LAB_0056c384
    FXCH ST6                            ; 0056c387
    FSTP extended double ptr [ESP + 0xc] ; 0056c389
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c38d
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FXCH ST6                            ; 0056c392
    FLD extended double ptr [ESP + 0xc] ; 0056c394
    FXCH ST7                            ; 0056c398
    ADD ESP,0x2c                        ; 0056c39a
    RET                                 ; 0056c39d

