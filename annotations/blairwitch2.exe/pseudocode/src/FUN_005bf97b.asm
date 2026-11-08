; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bf97b(void)
;
;
; Called Functions:
;   FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005bf97b
        ;   Label: FUN_005bf97b
    FXCH ST6                            ; 005bf97f
    FSTP extended double ptr [ESP]      ; 005bf981
    CALL FUN_005bf3dc                   ; 005bf984
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined FUN_005bf3dc()
    FXCH ST6                            ; 005bf989
    ADD ESP,0x2c                        ; 005bf98b
    RET                                 ; 005bf98e

