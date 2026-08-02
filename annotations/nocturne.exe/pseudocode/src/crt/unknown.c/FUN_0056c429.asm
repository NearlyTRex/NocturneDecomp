; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056c429(void)
;
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    SUB ESP,0x2c                        ; 0056c429
        ;   Label: crt_unknown.c_FUN_0056c429
    FSTP extended double ptr [ESP + 0xc] ; 0056c42c
    FSTP extended double ptr [ESP]      ; 0056c430
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c433
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    ADD ESP,0x2c                        ; 0056c438
    RET                                 ; 0056c43b

