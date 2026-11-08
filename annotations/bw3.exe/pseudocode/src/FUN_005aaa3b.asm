; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aaa3b(void)
;
;
; Called Functions:
;   FUN_005aa50c
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005aaa3b
        ;   Label: FUN_005aaa3b
    INT 0x6                             ; 005aaa3e
    FSTP extended double ptr [ESP]      ; 005aaa40
        ;   Label: LAB_005aaa40
    FXCH ST6                            ; 005aaa43
    FSTP extended double ptr [ESP + 0xc] ; 005aaa45
    CALL FUN_005aa50c                   ; 005aaa49
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined FUN_005aa50c()
    FXCH ST6                            ; 005aaa4e
    FLD extended double ptr [ESP + 0xc] ; 005aaa50
    FXCH ST7                            ; 005aaa54
    ADD ESP,0x2c                        ; 005aaa56
    RET                                 ; 005aaa59

