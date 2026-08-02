; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056c25b(void)
;
; Parameters:
; undefined1[10]   Stack[0x0]:10   local_res0
;
; Called Functions:
;   crt_math.c_fdiv_FUN_0056be50
;
; *****************************************************************************

section .text

    FXCH ST5                            ; 0056c25b
        ;   Label: crt_unknown.c_FUN_0056c25b
    FSTP extended double ptr [ESP + 0xc] ; 0056c25d
    FXCH ST4                            ; 0056c261
    FLD ST0                             ; 0056c263
    FSTP extended double ptr [ESP]      ; 0056c265
    FSTP extended double ptr [ESP + 0x20] ; 0056c268
    CALL crt_math.c_fdiv_FUN_0056be50   ; 0056c26c
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_0056be50(float10 dividend, float10 divisor)
    FXCH ST4                            ; 0056c271
    FLD extended double ptr [ESP + 0x20] ; 0056c273
    ADD ESP,0x2c                        ; 0056c277
    RET                                 ; 0056c27a

