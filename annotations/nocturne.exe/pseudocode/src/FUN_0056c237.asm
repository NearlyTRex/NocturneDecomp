; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c237(void)
;
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 0056c237
        ;   Label: FUN_0056c237
    INT 0x6                             ; 0056c23a
    FSTP extended double ptr [ESP]      ; 0056c23c
        ;   Label: LAB_0056c23c
    FXCH ST4                            ; 0056c23f
    FSTP extended double ptr [ESP + 0xc] ; 0056c241
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c245
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FXCH ST4                            ; 0056c24a
    FLD extended double ptr [ESP + 0xc] ; 0056c24c
    FXCH ST5                            ; 0056c250
    ADD ESP,0x2c                        ; 0056c252
    RET                                 ; 0056c255

