; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aaa07(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005aaa07
        ;   Label: crt_unknown.c_FUN_005aaa07
    FXCH ST5                            ; 005aaa0b
    FSTP extended double ptr [ESP]      ; 005aaa0d
    CALL crt_unknown.c_FUN_005aa50c     ; 005aaa10
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    FXCH ST5                            ; 005aaa15
    ADD ESP,0x2c                        ; 005aaa17
    RET                                 ; 005aaa1a

