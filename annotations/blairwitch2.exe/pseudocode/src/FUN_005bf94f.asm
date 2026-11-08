; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bf94f(void)
;
;
; Called Functions:
;   FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005bf94f
        ;   Label: FUN_005bf94f
    FXCH ST6                            ; 005bf952
    FSTP extended double ptr [ESP + 0xc] ; 005bf954
    CALL FUN_005bf3dc                   ; 005bf958
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined FUN_005bf3dc()
    FXCH ST6                            ; 005bf95d
    ADD ESP,0x2c                        ; 005bf95f
    RET                                 ; 005bf962

