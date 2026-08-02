; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056c133(void)
;
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 0056c133
        ;   Label: crt_unknown.c_FUN_0056c133
    FXCH ST2                            ; 0056c136
    FSTP extended double ptr [ESP + 0xc] ; 0056c138
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c13c
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FXCH ST2                            ; 0056c141
    ADD ESP,0x2c                        ; 0056c143
    RET                                 ; 0056c146

