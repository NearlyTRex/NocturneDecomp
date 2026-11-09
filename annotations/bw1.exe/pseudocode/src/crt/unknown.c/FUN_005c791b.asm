; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c791b(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005c791b
        ;   Label: crt_unknown.c_FUN_005c791b
    FXCH ST2                            ; 005c791f
    FLD ST0                             ; 005c7921
    FSTP extended double ptr [ESP]      ; 005c7923
    FSTP extended double ptr [ESP + 0x20] ; 005c7926
    CALL crt_unknown.c_FUN_005c769c     ; 005c792a
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    FXCH ST2                            ; 005c792f
    FLD extended double ptr [ESP + 0x20] ; 005c7931
    FXCH ST3                            ; 005c7935
    ADD ESP,0x2c                        ; 005c7937
    RET                                 ; 005c793a

