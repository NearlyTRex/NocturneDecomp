; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aaa5f(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    FXCH ST7                            ; 005aaa5f
        ;   Label: crt_unknown.c_FUN_005aaa5f
    FSTP extended double ptr [ESP + 0xc] ; 005aaa61
    FXCH ST6                            ; 005aaa65
    FLD ST0                             ; 005aaa67
    FSTP extended double ptr [ESP]      ; 005aaa69
    FSTP extended double ptr [ESP + 0x20] ; 005aaa6c
    CALL crt_unknown.c_FUN_005aa50c     ; 005aaa70
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    FXCH ST6                            ; 005aaa75
    FLD extended double ptr [ESP + 0x20] ; 005aaa77
    ADD ESP,0x2c                        ; 005aaa7b
    RET                                 ; 005aaa7e

