; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bf8ab(void)
;
;
; Called Functions:
;   FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005bf8ab
        ;   Label: FUN_005bf8ab
    FXCH ST5                            ; 005bf8ae
    FSTP extended double ptr [ESP + 0xc] ; 005bf8b0
    CALL FUN_005bf3dc                   ; 005bf8b4
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined FUN_005bf3dc()
    FXCH ST5                            ; 005bf8b9
    ADD ESP,0x2c                        ; 005bf8bb
    RET                                 ; 005bf8be

