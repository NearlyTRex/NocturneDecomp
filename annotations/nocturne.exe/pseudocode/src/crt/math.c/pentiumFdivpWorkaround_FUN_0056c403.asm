; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_math_c_pentiumFdivpWorkaround_FUN_0056c403(void)
;
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    SUB ESP,0x2c                        ; 0056c403
        ;   Label: crt_math.c_pentiumFdivpWorkaround_FUN_0056c403
    FSTP extended double ptr [ESP]      ; 0056c406
    FSTP extended double ptr [ESP + 0xc] ; 0056c409
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c40d
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    ADD ESP,0x2c                        ; 0056c412
    RET                                 ; 0056c415

