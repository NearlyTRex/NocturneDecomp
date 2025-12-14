; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __fpu_thunk float10 crt_math.c_fdiv_thunk_FUN_00606d6b(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_00606960
;
; *****************************************************************************

section .text

    FXCH ST5                            ; 00606d6b
        ;   Label: crt_math.c_fdiv_thunk_FUN_00606d6b
    FSTP extended double ptr [ESP + 0xc] ; 00606d6d
    FXCH ST4                            ; 00606d71
    FLD ST0                             ; 00606d73
    FSTP extended double ptr [ESP]      ; 00606d75
    FSTP extended double ptr [ESP + 0x20] ; 00606d78
    CALL crt_math.c_fdiv_FUN_00606960   ; 00606d7c
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)
    FXCH ST4                            ; 00606d81
    FLD extended double ptr [ESP + 0x20] ; 00606d83
    ADD ESP,0x2c                        ; 00606d87
    RET                                 ; 00606d8a

