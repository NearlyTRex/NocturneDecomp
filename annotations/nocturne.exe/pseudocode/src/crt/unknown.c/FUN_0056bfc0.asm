; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056bfc0(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 0056bfc0
        ;   Label: crt_unknown.c_FUN_0056bfc0
    FSTP extended double ptr [ESP + 0xc] ; 0056bfc3
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056bfc7
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FLD extended double ptr [ESP + 0xc] ; 0056bfcc
    FXCH                                ; 0056bfd0
    ADD ESP,0x2c                        ; 0056bfd2
    RET                                 ; 0056bfd5

