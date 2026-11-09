; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aa9db(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005aa9db
        ;   Label: crt_unknown.c_FUN_005aa9db
    FXCH ST5                            ; 005aa9de
    FSTP extended double ptr [ESP + 0xc] ; 005aa9e0
    CALL crt_unknown.c_FUN_005aa50c     ; 005aa9e4
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    FXCH ST5                            ; 005aa9e9
    ADD ESP,0x2c                        ; 005aa9eb
    RET                                 ; 005aa9ee

