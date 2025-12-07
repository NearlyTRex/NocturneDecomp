; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_math.c_FUN_00606b2b()
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 00606b2b
        ;   Label: crt_math.c_FUN_00606b2b
    FSTP extended double ptr [ESP]      ; 00606b2f
    CALL crt_math.c_fdiv_FUN_00606960   ; 00606b32 | float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)
    ADD ESP,0x2c                        ; 00606b37
    RET                                 ; 00606b3a

