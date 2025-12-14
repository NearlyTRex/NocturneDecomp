; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_math.c_FUN_00606b07()
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 00606b07
        ;   Label: crt_math.c_FUN_00606b07
    FSTP extended double ptr [ESP + 0xc] ; 00606b0a
    CALL crt_math.c_fdiv_FUN_00606960   ; 00606b0e
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)
    ADD ESP,0x2c                        ; 00606b13
    RET                                 ; 00606b16

