; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056bfd6(void)
;
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 0056bfd6
        ;   Label: FUN_0056bfd6
    INT 0x6                             ; 0056bfd9
    FXCH                                ; 0056bfdb
        ;   Label: LAB_0056bfdb
    FSTP extended double ptr [ESP + 0xc] ; 0056bfdd
    FLD ST0                             ; 0056bfe1
    FSTP extended double ptr [ESP]      ; 0056bfe3
    FSTP extended double ptr [ESP + 0x20] ; 0056bfe6
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056bfea
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FLD extended double ptr [ESP + 0x20] ; 0056bfef
    ADD ESP,0x2c                        ; 0056bff3
    RET                                 ; 0056bff6

