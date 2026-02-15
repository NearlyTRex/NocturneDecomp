; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_math_c_FUN_00606ce7(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_00606960
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 00606ce7
        ;   Label: crt_math.c_FUN_00606ce7
    FXCH ST3                            ; 00606cea
    FSTP extended double ptr [ESP + 0xc] ; 00606cec
    CALL crt_math.c_fdiv_FUN_00606960   ; 00606cf0
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)
    FXCH ST3                            ; 00606cf5
    ADD ESP,0x2c                        ; 00606cf7
    RET                                 ; 00606cfa

