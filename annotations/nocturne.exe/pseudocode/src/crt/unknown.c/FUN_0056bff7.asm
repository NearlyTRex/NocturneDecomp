; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056bff7(void)
;
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 0056bff7
        ;   Label: crt_unknown.c_FUN_0056bff7
    FSTP extended double ptr [ESP + 0xc] ; 0056bffa
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056bffe
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    ADD ESP,0x2c                        ; 0056c003
    RET                                 ; 0056c006

