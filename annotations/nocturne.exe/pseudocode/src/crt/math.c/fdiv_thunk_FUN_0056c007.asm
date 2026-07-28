; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_math_c_fdiv_thunk_FUN_0056c007(void)
;
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 0056c007
        ;   Label: crt_math.c_fdiv_thunk_FUN_0056c007
    FSTP extended double ptr [ESP]      ; 0056c00b
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c00e
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FLD extended double ptr [ESP + 0xc] ; 0056c013
    ADD ESP,0x2c                        ; 0056c017
    RET                                 ; 0056c01a

