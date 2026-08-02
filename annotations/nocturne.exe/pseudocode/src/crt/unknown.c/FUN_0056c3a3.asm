; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056c3a3(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    FXCH ST7                            ; 0056c3a3
        ;   Label: crt_unknown.c_FUN_0056c3a3
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

