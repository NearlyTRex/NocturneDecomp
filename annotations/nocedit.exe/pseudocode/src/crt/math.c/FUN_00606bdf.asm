; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_math.c_FUN_00606bdf()
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 00606bdf
        ;   Label: crt_math.c_FUN_00606bdf
    FXCH ST2                            ; 00606be3
    FLD ST0                             ; 00606be5
    FSTP extended double ptr [ESP]      ; 00606be7
    FSTP extended double ptr [ESP + 0x20] ; 00606bea
    CALL crt_math.c_fdiv_FUN_00606960   ; 00606bee
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)
    FXCH ST2                            ; 00606bf3
    FLD extended double ptr [ESP + 0x20] ; 00606bf5
    FXCH ST3                            ; 00606bf9
    ADD ESP,0x2c                        ; 00606bfb
    RET                                 ; 00606bfe

