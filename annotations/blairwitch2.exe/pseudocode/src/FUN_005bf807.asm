; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bf807(void)
;
;
; Called Functions:
;   FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005bf807
        ;   Label: FUN_005bf807
    FXCH ST4                            ; 005bf80a
    FSTP extended double ptr [ESP + 0xc] ; 005bf80c
    CALL FUN_005bf3dc                   ; 005bf810
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined FUN_005bf3dc()
    FXCH ST4                            ; 005bf815
    ADD ESP,0x2c                        ; 005bf817
    RET                                 ; 005bf81a

