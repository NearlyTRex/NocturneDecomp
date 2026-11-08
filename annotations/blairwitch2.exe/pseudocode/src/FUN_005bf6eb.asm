; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bf6eb(void)
;
;
; Called Functions:
;   FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005bf6eb
        ;   Label: FUN_005bf6eb
    FXCH ST2                            ; 005bf6ef
    FSTP extended double ptr [ESP]      ; 005bf6f1
    CALL FUN_005bf3dc                   ; 005bf6f4
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined FUN_005bf3dc()
    FXCH ST2                            ; 005bf6f9
    ADD ESP,0x2c                        ; 005bf6fb
    RET                                 ; 005bf6fe

