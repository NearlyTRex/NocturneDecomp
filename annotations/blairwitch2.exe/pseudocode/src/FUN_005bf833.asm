; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bf833(void)
;
;
; Called Functions:
;   FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005bf833
        ;   Label: FUN_005bf833
    FXCH ST4                            ; 005bf837
    FSTP extended double ptr [ESP]      ; 005bf839
    CALL FUN_005bf3dc                   ; 005bf83c
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined FUN_005bf3dc()
    FXCH ST4                            ; 005bf841
    ADD ESP,0x2c                        ; 005bf843
    RET                                 ; 005bf846

