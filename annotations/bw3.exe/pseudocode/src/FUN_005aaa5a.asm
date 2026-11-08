; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aaa5a(void)
;
;
; Called Functions:
;   FUN_005aa50c
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005aaa5a
        ;   Label: FUN_005aaa5a
    INT 0x6                             ; 005aaa5d
    FXCH ST7                            ; 005aaa5f
        ;   Label: LAB_005aaa5f
    FSTP extended double ptr [ESP + 0xc] ; 005aaa61
    FXCH ST6                            ; 005aaa65
    FLD ST0                             ; 005aaa67
    FSTP extended double ptr [ESP]      ; 005aaa69
    FSTP extended double ptr [ESP + 0x20] ; 005aaa6c
    CALL FUN_005aa50c                   ; 005aaa70
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined FUN_005aa50c()
    FXCH ST6                            ; 005aaa75
    FLD extended double ptr [ESP + 0x20] ; 005aaa77
    ADD ESP,0x2c                        ; 005aaa7b
    RET                                 ; 005aaa7e

