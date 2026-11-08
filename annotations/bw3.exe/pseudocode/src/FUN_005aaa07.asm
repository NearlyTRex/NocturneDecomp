; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aaa07(void)
;
;
; Called Functions:
;   FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005aaa07
        ;   Label: FUN_005aaa07
    FXCH ST5                            ; 005aaa0b
    FSTP extended double ptr [ESP]      ; 005aaa0d
    CALL FUN_005aa50c                   ; 005aaa10
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined FUN_005aa50c()
    FXCH ST5                            ; 005aaa15
    ADD ESP,0x2c                        ; 005aaa17
    RET                                 ; 005aaa1a

