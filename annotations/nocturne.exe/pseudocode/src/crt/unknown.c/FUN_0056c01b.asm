; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056c01b(void)
;
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 0056c01b
        ;   Label: crt_unknown.c_FUN_0056c01b
    FSTP extended double ptr [ESP]      ; 0056c01f
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c022
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    ADD ESP,0x2c                        ; 0056c027
    RET                                 ; 0056c02a

