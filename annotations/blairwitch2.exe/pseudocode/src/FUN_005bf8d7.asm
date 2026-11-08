; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bf8d7(void)
;
;
; Called Functions:
;   FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005bf8d7
        ;   Label: FUN_005bf8d7
    FXCH ST5                            ; 005bf8db
    FSTP extended double ptr [ESP]      ; 005bf8dd
    CALL FUN_005bf3dc                   ; 005bf8e0
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined FUN_005bf3dc()
    FXCH ST5                            ; 005bf8e5
    ADD ESP,0x2c                        ; 005bf8e7
    RET                                 ; 005bf8ea

