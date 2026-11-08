; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bf7c3(void)
;
;
; Called Functions:
;   FUN_005bf3dc
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005bf7c3
        ;   Label: FUN_005bf7c3
    INT 0x6                             ; 005bf7c6
    FSTP extended double ptr [ESP]      ; 005bf7c8
        ;   Label: LAB_005bf7c8
    FXCH ST4                            ; 005bf7cb
    FSTP extended double ptr [ESP + 0xc] ; 005bf7cd
    CALL FUN_005bf3dc                   ; 005bf7d1
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined FUN_005bf3dc()
    FXCH ST4                            ; 005bf7d6
    FLD extended double ptr [ESP + 0xc] ; 005bf7d8
    FXCH ST5                            ; 005bf7dc
    ADD ESP,0x2c                        ; 005bf7de
    RET                                 ; 005bf7e1

