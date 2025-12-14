; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __fpu_thunk float10 crt_math.c_fdiv_thunk_FUN_00606cfb(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 00606cfb
        ;   Label: crt_math.c_fdiv_thunk_FUN_00606cfb
    FXCH ST3                            ; 00606cff
    FSTP extended double ptr [ESP]      ; 00606d01
    CALL crt_math.c_fdiv_FUN_00606960   ; 00606d04
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)
    FXCH ST3                            ; 00606d09
    FLD extended double ptr [ESP + 0xc] ; 00606d0b
    ADD ESP,0x2c                        ; 00606d0f
    RET                                 ; 00606d12

