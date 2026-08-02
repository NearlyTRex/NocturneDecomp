; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056c0f4(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 0056c0f4
        ;   Label: crt_unknown.c_FUN_0056c0f4
    FXCH ST2                            ; 0056c0f7
    FSTP extended double ptr [ESP + 0xc] ; 0056c0f9
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c0fd
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FXCH ST2                            ; 0056c102
    FLD extended double ptr [ESP + 0xc] ; 0056c104
    FXCH ST3                            ; 0056c108
    ADD ESP,0x2c                        ; 0056c10a
    RET                                 ; 0056c10d

