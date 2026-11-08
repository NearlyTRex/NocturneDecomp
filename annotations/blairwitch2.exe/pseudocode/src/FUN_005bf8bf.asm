; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bf8bf(void)
;
;
; Called Functions:
;   FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005bf8bf
        ;   Label: FUN_005bf8bf
    FXCH ST5                            ; 005bf8c3
    FSTP extended double ptr [ESP]      ; 005bf8c5
    CALL FUN_005bf3dc                   ; 005bf8c8
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined FUN_005bf3dc()
    FXCH ST5                            ; 005bf8cd
    FLD extended double ptr [ESP + 0xc] ; 005bf8cf
    ADD ESP,0x2c                        ; 005bf8d3
    RET                                 ; 005bf8d6

