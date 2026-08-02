; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056c23c(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 0056c23c
        ;   Label: crt_unknown.c_FUN_0056c23c
    FXCH ST4                            ; 0056c23f
    FSTP extended double ptr [ESP + 0xc] ; 0056c241
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c245
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FXCH ST4                            ; 0056c24a
    FLD extended double ptr [ESP + 0xc] ; 0056c24c
    FXCH ST5                            ; 0056c250
    ADD ESP,0x2c                        ; 0056c252
    RET                                 ; 0056c255

