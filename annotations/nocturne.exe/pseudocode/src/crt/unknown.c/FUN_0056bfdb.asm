; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056bfdb(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    FXCH                                ; 0056bfdb
        ;   Label: crt_unknown.c_FUN_0056bfdb
    FSTP extended double ptr [ESP + 0xc] ; 0056bfdd
    FLD ST0                             ; 0056bfe1
    FSTP extended double ptr [ESP]      ; 0056bfe3
    FSTP extended double ptr [ESP + 0x20] ; 0056bfe6
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056bfea
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FLD extended double ptr [ESP + 0x20] ; 0056bfef
    ADD ESP,0x2c                        ; 0056bff3
    RET                                 ; 0056bff6

