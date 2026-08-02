; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056c384(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 0056c384
        ;   Label: crt_unknown.c_FUN_0056c384
    FXCH ST6                            ; 0056c387
    FSTP extended double ptr [ESP + 0xc] ; 0056c389
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c38d
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FXCH ST6                            ; 0056c392
    FLD extended double ptr [ESP + 0xc] ; 0056c394
    FXCH ST7                            ; 0056c398
    ADD ESP,0x2c                        ; 0056c39a
    RET                                 ; 0056c39d

