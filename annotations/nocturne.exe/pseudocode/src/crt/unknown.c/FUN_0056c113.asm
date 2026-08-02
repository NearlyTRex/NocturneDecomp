; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056c113(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    FXCH ST3                            ; 0056c113
        ;   Label: crt_unknown.c_FUN_0056c113
    FSTP extended double ptr [ESP + 0xc] ; 0056c115
    FXCH ST2                            ; 0056c119
    FLD ST0                             ; 0056c11b
    FSTP extended double ptr [ESP]      ; 0056c11d
    FSTP extended double ptr [ESP + 0x20] ; 0056c120
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c124
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FXCH ST2                            ; 0056c129
    FLD extended double ptr [ESP + 0x20] ; 0056c12b
    ADD ESP,0x2c                        ; 0056c12f
    RET                                 ; 0056c132

