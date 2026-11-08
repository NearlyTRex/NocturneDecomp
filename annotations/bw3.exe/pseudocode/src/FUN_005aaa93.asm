; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aaa93(void)
;
;
; Called Functions:
;   FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005aaa93
        ;   Label: FUN_005aaa93
    FXCH ST6                            ; 005aaa97
    FSTP extended double ptr [ESP]      ; 005aaa99
    CALL FUN_005aa50c                   ; 005aaa9c
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined FUN_005aa50c()
    FXCH ST6                            ; 005aaaa1
    FLD extended double ptr [ESP + 0xc] ; 005aaaa3
    ADD ESP,0x2c                        ; 005aaaa7
    RET                                 ; 005aaaaa

