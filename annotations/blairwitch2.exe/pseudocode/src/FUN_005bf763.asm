; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bf763(void)
;
;
; Called Functions:
;   FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005bf763
        ;   Label: FUN_005bf763
    FXCH ST3                            ; 005bf766
    FSTP extended double ptr [ESP + 0xc] ; 005bf768
    CALL FUN_005bf3dc                   ; 005bf76c
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined FUN_005bf3dc()
    FXCH ST3                            ; 005bf771
    ADD ESP,0x2c                        ; 005bf773
    RET                                 ; 005bf776

