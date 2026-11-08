; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bf6bf(void)
;
;
; Called Functions:
;   FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005bf6bf
        ;   Label: FUN_005bf6bf
    FXCH ST2                            ; 005bf6c2
    FSTP extended double ptr [ESP + 0xc] ; 005bf6c4
    CALL FUN_005bf3dc                   ; 005bf6c8
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined FUN_005bf3dc()
    FXCH ST2                            ; 005bf6cd
    ADD ESP,0x2c                        ; 005bf6cf
    RET                                 ; 005bf6d2

