; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056c198(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 0056c198
        ;   Label: crt_unknown.c_FUN_0056c198
    FXCH ST3                            ; 0056c19b
    FSTP extended double ptr [ESP + 0xc] ; 0056c19d
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c1a1
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FXCH ST3                            ; 0056c1a6
    FLD extended double ptr [ESP + 0xc] ; 0056c1a8
    FXCH ST4                            ; 0056c1ac
    ADD ESP,0x2c                        ; 0056c1ae
    RET                                 ; 0056c1b1

