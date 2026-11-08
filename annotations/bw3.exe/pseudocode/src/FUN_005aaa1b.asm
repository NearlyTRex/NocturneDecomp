; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aaa1b(void)
;
;
; Called Functions:
;   FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005aaa1b
        ;   Label: FUN_005aaa1b
    FXCH ST6                            ; 005aaa1f
    FLD ST0                             ; 005aaa21
    FSTP extended double ptr [ESP]      ; 005aaa23
    FSTP extended double ptr [ESP + 0x20] ; 005aaa26
    CALL FUN_005aa50c                   ; 005aaa2a
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined FUN_005aa50c()
    FXCH ST6                            ; 005aaa2f
    FLD extended double ptr [ESP + 0x20] ; 005aaa31
    FXCH ST7                            ; 005aaa35
    ADD ESP,0x2c                        ; 005aaa37
    RET                                 ; 005aaa3a

