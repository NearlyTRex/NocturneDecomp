; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __fpu_thunk crt_math_c_fdiv_thunk_FUN_0056c333(void)
;
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 0056c333
        ;   Label: crt_math.c_fdiv_thunk_FUN_0056c333
    FXCH ST5                            ; 0056c337
    FSTP extended double ptr [ESP]      ; 0056c339
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c33c
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FXCH ST5                            ; 0056c341
    FLD extended double ptr [ESP + 0xc] ; 0056c343
    ADD ESP,0x2c                        ; 0056c347
    RET                                 ; 0056c34a

