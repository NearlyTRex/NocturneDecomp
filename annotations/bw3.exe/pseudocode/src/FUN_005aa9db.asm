; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aa9db(void)
;
;
; Called Functions:
;   FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005aa9db
        ;   Label: FUN_005aa9db
    FXCH ST5                            ; 005aa9de
    FSTP extended double ptr [ESP + 0xc] ; 005aa9e0
    CALL FUN_005aa50c                   ; 005aa9e4
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined FUN_005aa50c()
    FXCH ST5                            ; 005aa9e9
    ADD ESP,0x2c                        ; 005aa9eb
    RET                                 ; 005aa9ee

