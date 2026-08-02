; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056c2e0(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 0056c2e0
        ;   Label: crt_unknown.c_FUN_0056c2e0
    FXCH ST5                            ; 0056c2e3
    FSTP extended double ptr [ESP + 0xc] ; 0056c2e5
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c2e9
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FXCH ST5                            ; 0056c2ee
    FLD extended double ptr [ESP + 0xc] ; 0056c2f0
    FXCH ST6                            ; 0056c2f4
    ADD ESP,0x2c                        ; 0056c2f6
    RET                                 ; 0056c2f9

